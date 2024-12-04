/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingPlanFilterName.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A filter to apply when listing or searching for training plans.</p> <p>For
   * more information about how to reserve GPU capacity for your SageMaker HyperPod
   * clusters using Amazon SageMaker Training Plan, see <code> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingPlanFilter">AWS
   * API Reference</a></p>
   */
  class TrainingPlanFilter
  {
  public:
    AWS_SAGEMAKER_API TrainingPlanFilter();
    AWS_SAGEMAKER_API TrainingPlanFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingPlanFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter field (e.g., Status, InstanceType).</p>
     */
    inline const TrainingPlanFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const TrainingPlanFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(TrainingPlanFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline TrainingPlanFilter& WithName(const TrainingPlanFilterName& value) { SetName(value); return *this;}
    inline TrainingPlanFilter& WithName(TrainingPlanFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to filter by for the specified field.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TrainingPlanFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TrainingPlanFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TrainingPlanFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    TrainingPlanFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
