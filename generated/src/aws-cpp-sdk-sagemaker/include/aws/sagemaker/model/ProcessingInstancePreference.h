/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProcessingInstanceType.h>

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
 * <p>A candidate instance type preference in a processing
 * <code>InstancePreferences</code> list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingInstancePreference">AWS
 * API Reference</a></p>
 */
class ProcessingInstancePreference {
 public:
  AWS_SAGEMAKER_API ProcessingInstancePreference() = default;
  AWS_SAGEMAKER_API ProcessingInstancePreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ProcessingInstancePreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ML compute instance type. An instance type can appear only once in an
   * <code>InstancePreferences</code> list.</p>
   */
  inline ProcessingInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(ProcessingInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline ProcessingInstancePreference& WithInstanceType(ProcessingInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances to launch if this instance type is selected. Specify
   * the instance count for the processing job in one of the following two ways:</p>
   * <ol> <li> <p> <b>Per preference</b> – Set <code>InstanceCount</code> on every
   * preference in the <code>InstancePreferences</code> list and don't set
   * <code>ProcessingClusterConfig$InstanceCount</code>. Use this when each instance
   * type needs a different number of instances to deliver equivalent compute.</p>
   * </li> <li> <p> <b>One count for the job</b> – Set
   * <code>ProcessingClusterConfig$InstanceCount</code> and omit it from every
   * preference. Amazon SageMaker applies this to all instance types in the list.</p>
   * </li> </ol> <p>For example, in a list of five preferences, either all five
   * specify <code>InstanceCount</code> or none of them do. Amazon SageMaker rejects
   * requests that set <code>InstanceCount</code> on only some preferences, that set
   * it both per preference and in <code>ProcessingClusterConfig</code>, or that omit
   * it in both places.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline ProcessingInstancePreference& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  ProcessingInstanceType m_instanceType{ProcessingInstanceType::NOT_SET};

  int m_instanceCount{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
