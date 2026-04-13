/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DeepHealthCheckType.h>

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
 * <p>The configuration of deep health checks for an instance group.</p>
 * <p>Overlapping deep health check configurations will be merged into a single
 * operation.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceGroupHealthCheckConfiguration">AWS
 * API Reference</a></p>
 */
class InstanceGroupHealthCheckConfiguration {
 public:
  AWS_SAGEMAKER_API InstanceGroupHealthCheckConfiguration() = default;
  AWS_SAGEMAKER_API InstanceGroupHealthCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InstanceGroupHealthCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the instance group.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  InstanceGroupHealthCheckConfiguration& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Amazon Elastic Compute Cloud (EC2) instance IDs on which to perform
   * deep health checks.</p>  <p>Leave this field blank to perform deep health
   * checks on the entire instance group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  InstanceGroupHealthCheckConfiguration& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  InstanceGroupHealthCheckConfiguration& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of deep health checks to be performed.</p>
   */
  inline const Aws::Vector<DeepHealthCheckType>& GetDeepHealthChecks() const { return m_deepHealthChecks; }
  inline bool DeepHealthChecksHasBeenSet() const { return m_deepHealthChecksHasBeenSet; }
  template <typename DeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
  void SetDeepHealthChecks(DeepHealthChecksT&& value) {
    m_deepHealthChecksHasBeenSet = true;
    m_deepHealthChecks = std::forward<DeepHealthChecksT>(value);
  }
  template <typename DeepHealthChecksT = Aws::Vector<DeepHealthCheckType>>
  InstanceGroupHealthCheckConfiguration& WithDeepHealthChecks(DeepHealthChecksT&& value) {
    SetDeepHealthChecks(std::forward<DeepHealthChecksT>(value));
    return *this;
  }
  inline InstanceGroupHealthCheckConfiguration& AddDeepHealthChecks(DeepHealthCheckType value) {
    m_deepHealthChecksHasBeenSet = true;
    m_deepHealthChecks.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceGroupName;

  Aws::Vector<Aws::String> m_instanceIds;

  Aws::Vector<DeepHealthCheckType> m_deepHealthChecks;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_instanceIdsHasBeenSet = false;
  bool m_deepHealthChecksHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
