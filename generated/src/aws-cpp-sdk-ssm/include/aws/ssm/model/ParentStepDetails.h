/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A detailed status of the parent step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParentStepDetails">AWS
   * API Reference</a></p>
   */
  class ParentStepDetails
  {
  public:
    AWS_SSM_API ParentStepDetails() = default;
    AWS_SSM_API ParentStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParentStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    template<typename StepExecutionIdT = Aws::String>
    void SetStepExecutionId(StepExecutionIdT&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::forward<StepExecutionIdT>(value); }
    template<typename StepExecutionIdT = Aws::String>
    ParentStepDetails& WithStepExecutionId(StepExecutionIdT&& value) { SetStepExecutionId(std::forward<StepExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    ParentStepDetails& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the automation action.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    ParentStepDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current repetition of the loop represented by an integer.</p>
     */
    inline int GetIteration() const { return m_iteration; }
    inline bool IterationHasBeenSet() const { return m_iterationHasBeenSet; }
    inline void SetIteration(int value) { m_iterationHasBeenSet = true; m_iteration = value; }
    inline ParentStepDetails& WithIteration(int value) { SetIteration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the specified iterator in the loop.</p>
     */
    inline const Aws::String& GetIteratorValue() const { return m_iteratorValue; }
    inline bool IteratorValueHasBeenSet() const { return m_iteratorValueHasBeenSet; }
    template<typename IteratorValueT = Aws::String>
    void SetIteratorValue(IteratorValueT&& value) { m_iteratorValueHasBeenSet = true; m_iteratorValue = std::forward<IteratorValueT>(value); }
    template<typename IteratorValueT = Aws::String>
    ParentStepDetails& WithIteratorValue(IteratorValueT&& value) { SetIteratorValue(std::forward<IteratorValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    int m_iteration{0};
    bool m_iterationHasBeenSet = false;

    Aws::String m_iteratorValue;
    bool m_iteratorValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
