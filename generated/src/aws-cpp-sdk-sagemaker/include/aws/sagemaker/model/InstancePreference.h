/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>A candidate instance type preference in an <code>InstancePreferences</code>
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstancePreference">AWS
 * API Reference</a></p>
 */
class InstancePreference {
 public:
  AWS_SAGEMAKER_API InstancePreference() = default;
  AWS_SAGEMAKER_API InstancePreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InstancePreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ML compute instance type. An instance type can appear only once in an
   * <code>InstancePreferences</code> list.</p>
   */
  inline TrainingInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(TrainingInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline InstancePreference& WithInstanceType(TrainingInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances to launch if this instance type is selected. Specify
   * the instance count for the training job in one of the following two ways:</p>
   * <ol> <li> <p> <b>Per preference</b> – Set <code>InstanceCount</code> on every
   * preference in the <code>InstancePreferences</code> list and don't set
   * <code>ResourceConfig$InstanceCount</code>. Use this when each instance type
   * needs a different number of instances to deliver equivalent compute.</p> </li>
   * <li> <p> <b>One count for the job</b> – Set
   * <code>ResourceConfig$InstanceCount</code> and omit it from every preference.
   * SageMaker applies this to all instance types in the list.</p> </li> </ol> <p>For
   * example, in a list of five preferences, either all five specify
   * <code>InstanceCount</code> or none of them do. SageMaker rejects requests that
   * set <code>InstanceCount</code> on only some preferences, that set it both per
   * preference and in <code>ResourceConfig</code>, or that omit it in both
   * places.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline InstancePreference& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a training plan to use if this instance
   * type is selected. The plan's instance type must match <code>InstanceType</code>.
   * A preference with a training plan uses that plan's reserved capacity; a
   * preference without one uses on-demand capacity. Per-preference
   * <code>TrainingPlanArns</code> is mutually exclusive with the job-level
   * <code>TrainingPlanArn</code> in <code>ResourceConfig</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTrainingPlanArns() const { return m_trainingPlanArns; }
  inline bool TrainingPlanArnsHasBeenSet() const { return m_trainingPlanArnsHasBeenSet; }
  template <typename TrainingPlanArnsT = Aws::Vector<Aws::String>>
  void SetTrainingPlanArns(TrainingPlanArnsT&& value) {
    m_trainingPlanArnsHasBeenSet = true;
    m_trainingPlanArns = std::forward<TrainingPlanArnsT>(value);
  }
  template <typename TrainingPlanArnsT = Aws::Vector<Aws::String>>
  InstancePreference& WithTrainingPlanArns(TrainingPlanArnsT&& value) {
    SetTrainingPlanArns(std::forward<TrainingPlanArnsT>(value));
    return *this;
  }
  template <typename TrainingPlanArnsT = Aws::String>
  InstancePreference& AddTrainingPlanArns(TrainingPlanArnsT&& value) {
    m_trainingPlanArnsHasBeenSet = true;
    m_trainingPlanArns.emplace_back(std::forward<TrainingPlanArnsT>(value));
    return *this;
  }
  ///@}
 private:
  TrainingInstanceType m_instanceType{TrainingInstanceType::NOT_SET};

  int m_instanceCount{0};

  Aws::Vector<Aws::String> m_trainingPlanArns;
  bool m_instanceTypeHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_trainingPlanArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
