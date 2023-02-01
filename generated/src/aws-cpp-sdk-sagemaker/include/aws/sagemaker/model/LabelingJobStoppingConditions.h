/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A set of conditions for stopping a labeling job. If any of the conditions are
   * met, the job is automatically stopped. You can use these conditions to control
   * the cost of data labeling.</p>  <p>Labeling jobs fail after 30 days with
   * an appropriate client error message.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobStoppingConditions">AWS
   * API Reference</a></p>
   */
  class LabelingJobStoppingConditions
  {
  public:
    AWS_SAGEMAKER_API LabelingJobStoppingConditions();
    AWS_SAGEMAKER_API LabelingJobStoppingConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobStoppingConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline int GetMaxHumanLabeledObjectCount() const{ return m_maxHumanLabeledObjectCount; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline bool MaxHumanLabeledObjectCountHasBeenSet() const { return m_maxHumanLabeledObjectCountHasBeenSet; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline void SetMaxHumanLabeledObjectCount(int value) { m_maxHumanLabeledObjectCountHasBeenSet = true; m_maxHumanLabeledObjectCount = value; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline LabelingJobStoppingConditions& WithMaxHumanLabeledObjectCount(int value) { SetMaxHumanLabeledObjectCount(value); return *this;}


    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline int GetMaxPercentageOfInputDatasetLabeled() const{ return m_maxPercentageOfInputDatasetLabeled; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline bool MaxPercentageOfInputDatasetLabeledHasBeenSet() const { return m_maxPercentageOfInputDatasetLabeledHasBeenSet; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline void SetMaxPercentageOfInputDatasetLabeled(int value) { m_maxPercentageOfInputDatasetLabeledHasBeenSet = true; m_maxPercentageOfInputDatasetLabeled = value; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline LabelingJobStoppingConditions& WithMaxPercentageOfInputDatasetLabeled(int value) { SetMaxPercentageOfInputDatasetLabeled(value); return *this;}

  private:

    int m_maxHumanLabeledObjectCount;
    bool m_maxHumanLabeledObjectCountHasBeenSet = false;

    int m_maxPercentageOfInputDatasetLabeled;
    bool m_maxPercentageOfInputDatasetLabeledHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
