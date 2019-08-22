#pragma once
#include "learner.h"
#include "options.h"
#include "cb.h"
#include "action_score.h"

namespace VW { namespace pmf_to_pdf
{
  LEARNER::base_learner* pmf_to_pdf_setup(VW::config::options_i& options, vw& all);
  struct pdf_data
  {
    std::vector<float> scores;
    uint32_t num_actions;
    uint32_t bandwidth;  // radius
    float min_value;
    float max_value;
    CB::label temp_cb;
    ACTION_SCORE::action_scores temp_probs;
    void set_num_actions(uint32_t x) { num_actions = x; }
    void set_bandwidth(uint32_t x) { bandwidth = x; }
    void set_min_value(float x) { min_value = x; }
    void set_max_value(float x) { max_value = x; }

    ~pdf_data();
  };
}}  // namespace VW::pmf_to_pdf
