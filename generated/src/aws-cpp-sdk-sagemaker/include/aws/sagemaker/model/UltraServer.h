/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/sagemaker/model/UltraServerHealthStatus.h>
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
   * <p>Represents a high-performance compute server used for distributed training in
   * SageMaker AI. An UltraServer consists of multiple instances within a shared
   * NVLink interconnect domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UltraServer">AWS
   * API Reference</a></p>
   */
  class UltraServer
  {
  public:
    AWS_SAGEMAKER_API UltraServer() = default;
    AWS_SAGEMAKER_API UltraServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UltraServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the UltraServer.</p>
     */
    inline const Aws::String& GetUltraServerId() const { return m_ultraServerId; }
    inline bool UltraServerIdHasBeenSet() const { return m_ultraServerIdHasBeenSet; }
    template<typename UltraServerIdT = Aws::String>
    void SetUltraServerId(UltraServerIdT&& value) { m_ultraServerIdHasBeenSet = true; m_ultraServerId = std::forward<UltraServerIdT>(value); }
    template<typename UltraServerIdT = Aws::String>
    UltraServer& WithUltraServerId(UltraServerIdT&& value) { SetUltraServerId(std::forward<UltraServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of UltraServer, such as ml.u-p6e-gb200x72.</p>
     */
    inline const Aws::String& GetUltraServerType() const { return m_ultraServerType; }
    inline bool UltraServerTypeHasBeenSet() const { return m_ultraServerTypeHasBeenSet; }
    template<typename UltraServerTypeT = Aws::String>
    void SetUltraServerType(UltraServerTypeT&& value) { m_ultraServerTypeHasBeenSet = true; m_ultraServerType = std::forward<UltraServerTypeT>(value); }
    template<typename UltraServerTypeT = Aws::String>
    UltraServer& WithUltraServerType(UltraServerTypeT&& value) { SetUltraServerType(std::forward<UltraServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone where the UltraServer is provisioned.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    UltraServer& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type used in the UltraServer.</p>
     */
    inline ReservedCapacityInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ReservedCapacityInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline UltraServer& WithInstanceType(ReservedCapacityInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances in this UltraServer.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline UltraServer& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of spare instances configured for this UltraServer to provide
     * enhanced resiliency.</p>
     */
    inline int GetConfiguredSpareInstanceCount() const { return m_configuredSpareInstanceCount; }
    inline bool ConfiguredSpareInstanceCountHasBeenSet() const { return m_configuredSpareInstanceCountHasBeenSet; }
    inline void SetConfiguredSpareInstanceCount(int value) { m_configuredSpareInstanceCountHasBeenSet = true; m_configuredSpareInstanceCount = value; }
    inline UltraServer& WithConfiguredSpareInstanceCount(int value) { SetConfiguredSpareInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently available for use in this UltraServer.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline UltraServer& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently in use in this UltraServer.</p>
     */
    inline int GetInUseInstanceCount() const { return m_inUseInstanceCount; }
    inline bool InUseInstanceCountHasBeenSet() const { return m_inUseInstanceCountHasBeenSet; }
    inline void SetInUseInstanceCount(int value) { m_inUseInstanceCountHasBeenSet = true; m_inUseInstanceCount = value; }
    inline UltraServer& WithInUseInstanceCount(int value) { SetInUseInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available spare instances in the UltraServer.</p>
     */
    inline int GetAvailableSpareInstanceCount() const { return m_availableSpareInstanceCount; }
    inline bool AvailableSpareInstanceCountHasBeenSet() const { return m_availableSpareInstanceCountHasBeenSet; }
    inline void SetAvailableSpareInstanceCount(int value) { m_availableSpareInstanceCountHasBeenSet = true; m_availableSpareInstanceCount = value; }
    inline UltraServer& WithAvailableSpareInstanceCount(int value) { SetAvailableSpareInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in this UltraServer that are currently in an
     * unhealthy state.</p>
     */
    inline int GetUnhealthyInstanceCount() const { return m_unhealthyInstanceCount; }
    inline bool UnhealthyInstanceCountHasBeenSet() const { return m_unhealthyInstanceCountHasBeenSet; }
    inline void SetUnhealthyInstanceCount(int value) { m_unhealthyInstanceCountHasBeenSet = true; m_unhealthyInstanceCount = value; }
    inline UltraServer& WithUnhealthyInstanceCount(int value) { SetUnhealthyInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall health status of the UltraServer.</p>
     */
    inline UltraServerHealthStatus GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(UltraServerHealthStatus value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline UltraServer& WithHealthStatus(UltraServerHealthStatus value) { SetHealthStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_ultraServerId;
    bool m_ultraServerIdHasBeenSet = false;

    Aws::String m_ultraServerType;
    bool m_ultraServerTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    ReservedCapacityInstanceType m_instanceType{ReservedCapacityInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_configuredSpareInstanceCount{0};
    bool m_configuredSpareInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    int m_inUseInstanceCount{0};
    bool m_inUseInstanceCountHasBeenSet = false;

    int m_availableSpareInstanceCount{0};
    bool m_availableSpareInstanceCountHasBeenSet = false;

    int m_unhealthyInstanceCount{0};
    bool m_unhealthyInstanceCountHasBeenSet = false;

    UltraServerHealthStatus m_healthStatus{UltraServerHealthStatus::NOT_SET};
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
