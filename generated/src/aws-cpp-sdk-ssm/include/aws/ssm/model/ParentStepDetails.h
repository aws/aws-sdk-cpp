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
    AWS_SSM_API ParentStepDetails();
    AWS_SSM_API ParentStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParentStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of a step execution.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }
    inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = value; }
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId = std::move(value); }
    inline void SetStepExecutionId(const char* value) { m_stepExecutionIdHasBeenSet = true; m_stepExecutionId.assign(value); }
    inline ParentStepDetails& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}
    inline ParentStepDetails& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}
    inline ParentStepDetails& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline ParentStepDetails& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline ParentStepDetails& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline ParentStepDetails& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the automation action.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline ParentStepDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline ParentStepDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline ParentStepDetails& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current repetition of the loop represented by an integer.</p>
     */
    inline int GetIteration() const{ return m_iteration; }
    inline bool IterationHasBeenSet() const { return m_iterationHasBeenSet; }
    inline void SetIteration(int value) { m_iterationHasBeenSet = true; m_iteration = value; }
    inline ParentStepDetails& WithIteration(int value) { SetIteration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the specified iterator in the loop.</p>
     */
    inline const Aws::String& GetIteratorValue() const{ return m_iteratorValue; }
    inline bool IteratorValueHasBeenSet() const { return m_iteratorValueHasBeenSet; }
    inline void SetIteratorValue(const Aws::String& value) { m_iteratorValueHasBeenSet = true; m_iteratorValue = value; }
    inline void SetIteratorValue(Aws::String&& value) { m_iteratorValueHasBeenSet = true; m_iteratorValue = std::move(value); }
    inline void SetIteratorValue(const char* value) { m_iteratorValueHasBeenSet = true; m_iteratorValue.assign(value); }
    inline ParentStepDetails& WithIteratorValue(const Aws::String& value) { SetIteratorValue(value); return *this;}
    inline ParentStepDetails& WithIteratorValue(Aws::String&& value) { SetIteratorValue(std::move(value)); return *this;}
    inline ParentStepDetails& WithIteratorValue(const char* value) { SetIteratorValue(value); return *this;}
    ///@}
  private:

    Aws::String m_stepExecutionId;
    bool m_stepExecutionIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    int m_iteration;
    bool m_iterationHasBeenSet = false;

    Aws::String m_iteratorValue;
    bool m_iteratorValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
