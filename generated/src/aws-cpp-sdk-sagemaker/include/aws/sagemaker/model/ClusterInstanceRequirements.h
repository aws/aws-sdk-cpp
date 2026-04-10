/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>

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
 * <p>The instance requirements for a flexible instance group. Use this to specify
 * multiple instance types that the instance group can use. The order of instance
 * types in the list determines the priority for instance
 * provisioning.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceRequirements">AWS
 * API Reference</a></p>
 */
class ClusterInstanceRequirements {
 public:
  AWS_SAGEMAKER_API ClusterInstanceRequirements() = default;
  AWS_SAGEMAKER_API ClusterInstanceRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterInstanceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of instance types that the instance group can use. The order of
   * instance types determines the priority—HyperPod attempts to provision instances
   * using the first instance type in the list and falls back to subsequent types if
   * capacity is unavailable.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<ClusterInstanceType>>
  ClusterInstanceRequirements& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  inline ClusterInstanceRequirements& AddInstanceTypes(ClusterInstanceType value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClusterInstanceType> m_instanceTypes;
  bool m_instanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
