/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/AutoScalingGroupsConfiguration.h>
#include <aws/rtbfabric/model/EksEndpointsConfiguration.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the configuration of a managed endpoint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ManagedEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedEndpointConfiguration
  {
  public:
    AWS_RTBFABRIC_API ManagedEndpointConfiguration() = default;
    AWS_RTBFABRIC_API ManagedEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API ManagedEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the configuration of an auto scaling group.</p>
     */
    inline const AutoScalingGroupsConfiguration& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = AutoScalingGroupsConfiguration>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = AutoScalingGroupsConfiguration>
    ManagedEndpointConfiguration& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of an Amazon Elastic Kubernetes Service
     * endpoint.</p>
     */
    inline const EksEndpointsConfiguration& GetEksEndpoints() const { return m_eksEndpoints; }
    inline bool EksEndpointsHasBeenSet() const { return m_eksEndpointsHasBeenSet; }
    template<typename EksEndpointsT = EksEndpointsConfiguration>
    void SetEksEndpoints(EksEndpointsT&& value) { m_eksEndpointsHasBeenSet = true; m_eksEndpoints = std::forward<EksEndpointsT>(value); }
    template<typename EksEndpointsT = EksEndpointsConfiguration>
    ManagedEndpointConfiguration& WithEksEndpoints(EksEndpointsT&& value) { SetEksEndpoints(std::forward<EksEndpointsT>(value)); return *this;}
    ///@}
  private:

    AutoScalingGroupsConfiguration m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    EksEndpointsConfiguration m_eksEndpoints;
    bool m_eksEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
