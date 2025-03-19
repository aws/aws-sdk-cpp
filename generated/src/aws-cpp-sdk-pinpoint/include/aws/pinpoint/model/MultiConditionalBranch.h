/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SimpleCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a condition to evaluate for an activity path in a
   * journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MultiConditionalBranch">AWS
   * API Reference</a></p>
   */
  class MultiConditionalBranch
  {
  public:
    AWS_PINPOINT_API MultiConditionalBranch() = default;
    AWS_PINPOINT_API MultiConditionalBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MultiConditionalBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition to evaluate for the activity path.</p>
     */
    inline const SimpleCondition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = SimpleCondition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = SimpleCondition>
    MultiConditionalBranch& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after completing the
     * activity for the path.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    MultiConditionalBranch& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}
  private:

    SimpleCondition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
