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
 * <p>The instance requirement details for a flexible instance group, including the
 * current and desired instance types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceRequirementDetails">AWS
 * API Reference</a></p>
 */
class ClusterInstanceRequirementDetails {
 public:
  AWS_SAGEMAKER_API ClusterInstanceRequirementDetails() = default;
  AWS_SAGEMAKER_API ClusterInstanceRequirementDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterInstanceRequirementDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance types currently in use by the instance group.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetCurrentInstanceTypes() const { return m_currentInstanceTypes; }
  inline bool CurrentInstanceTypesHasBeenSet() const { return m_currentInstanceTypesHasBeenSet; }
  template <typename CurrentInstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetCurrentInstanceTypes(CurrentInstanceTypesT&& value) {
    m_currentInstanceTypesHasBeenSet = true;
    m_currentInstanceTypes = std::forward<CurrentInstanceTypesT>(value);
  }
  template <typename CurrentInstanceTypesT = Aws::Vector<ClusterInstanceType>>
  ClusterInstanceRequirementDetails& WithCurrentInstanceTypes(CurrentInstanceTypesT&& value) {
    SetCurrentInstanceTypes(std::forward<CurrentInstanceTypesT>(value));
    return *this;
  }
  inline ClusterInstanceRequirementDetails& AddCurrentInstanceTypes(ClusterInstanceType value) {
    m_currentInstanceTypesHasBeenSet = true;
    m_currentInstanceTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired instance types for the instance group, as specified in the most
   * recent update request.</p>
   */
  inline const Aws::Vector<ClusterInstanceType>& GetDesiredInstanceTypes() const { return m_desiredInstanceTypes; }
  inline bool DesiredInstanceTypesHasBeenSet() const { return m_desiredInstanceTypesHasBeenSet; }
  template <typename DesiredInstanceTypesT = Aws::Vector<ClusterInstanceType>>
  void SetDesiredInstanceTypes(DesiredInstanceTypesT&& value) {
    m_desiredInstanceTypesHasBeenSet = true;
    m_desiredInstanceTypes = std::forward<DesiredInstanceTypesT>(value);
  }
  template <typename DesiredInstanceTypesT = Aws::Vector<ClusterInstanceType>>
  ClusterInstanceRequirementDetails& WithDesiredInstanceTypes(DesiredInstanceTypesT&& value) {
    SetDesiredInstanceTypes(std::forward<DesiredInstanceTypesT>(value));
    return *this;
  }
  inline ClusterInstanceRequirementDetails& AddDesiredInstanceTypes(ClusterInstanceType value) {
    m_desiredInstanceTypesHasBeenSet = true;
    m_desiredInstanceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClusterInstanceType> m_currentInstanceTypes;

  Aws::Vector<ClusterInstanceType> m_desiredInstanceTypes;
  bool m_currentInstanceTypesHasBeenSet = false;
  bool m_desiredInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
