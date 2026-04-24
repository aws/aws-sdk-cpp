/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/HealthCheckConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the configuration of an auto scaling group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/AutoScalingGroupsConfiguration">AWS
 * API Reference</a></p>
 */
class AutoScalingGroupsConfiguration {
 public:
  AWS_RTBFABRIC_API AutoScalingGroupsConfiguration() = default;
  AWS_RTBFABRIC_API AutoScalingGroupsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API AutoScalingGroupsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of the auto scaling group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const { return m_autoScalingGroupNames; }
  inline bool AutoScalingGroupNamesHasBeenSet() const { return m_autoScalingGroupNamesHasBeenSet; }
  template <typename AutoScalingGroupNamesT = Aws::Vector<Aws::String>>
  void SetAutoScalingGroupNames(AutoScalingGroupNamesT&& value) {
    m_autoScalingGroupNamesHasBeenSet = true;
    m_autoScalingGroupNames = std::forward<AutoScalingGroupNamesT>(value);
  }
  template <typename AutoScalingGroupNamesT = Aws::Vector<Aws::String>>
  AutoScalingGroupsConfiguration& WithAutoScalingGroupNames(AutoScalingGroupNamesT&& value) {
    SetAutoScalingGroupNames(std::forward<AutoScalingGroupNamesT>(value));
    return *this;
  }
  template <typename AutoScalingGroupNamesT = Aws::String>
  AutoScalingGroupsConfiguration& AddAutoScalingGroupNames(AutoScalingGroupNamesT&& value) {
    m_autoScalingGroupNamesHasBeenSet = true;
    m_autoScalingGroupNames.emplace_back(std::forward<AutoScalingGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role ARN of the auto scaling group.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  AutoScalingGroupsConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health check configuration for the Auto Scaling group managed
   * endpoint.</p>
   */
  inline const HealthCheckConfig& GetHealthCheckConfig() const { return m_healthCheckConfig; }
  inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
  template <typename HealthCheckConfigT = HealthCheckConfig>
  void SetHealthCheckConfig(HealthCheckConfigT&& value) {
    m_healthCheckConfigHasBeenSet = true;
    m_healthCheckConfig = std::forward<HealthCheckConfigT>(value);
  }
  template <typename HealthCheckConfigT = HealthCheckConfig>
  AutoScalingGroupsConfiguration& WithHealthCheckConfig(HealthCheckConfigT&& value) {
    SetHealthCheckConfig(std::forward<HealthCheckConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_autoScalingGroupNames;

  Aws::String m_roleArn;

  HealthCheckConfig m_healthCheckConfig;
  bool m_autoScalingGroupNamesHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_healthCheckConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
