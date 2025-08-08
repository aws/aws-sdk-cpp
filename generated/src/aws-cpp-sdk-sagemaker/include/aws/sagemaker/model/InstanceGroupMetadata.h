/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CapacityReservation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Metadata information about an instance group in a HyperPod
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceGroupMetadata">AWS
   * API Reference</a></p>
   */
  class InstanceGroupMetadata
  {
  public:
    AWS_SAGEMAKER_API InstanceGroupMetadata() = default;
    AWS_SAGEMAKER_API InstanceGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstanceGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An error message describing why the instance group level operation (such as
     * creating, scaling, or deleting) failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    InstanceGroupMetadata& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the instance group is located.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    InstanceGroupMetadata& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation used by the instance group.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const { return m_capacityReservation; }
    inline bool CapacityReservationHasBeenSet() const { return m_capacityReservationHasBeenSet; }
    template<typename CapacityReservationT = CapacityReservation>
    void SetCapacityReservation(CapacityReservationT&& value) { m_capacityReservationHasBeenSet = true; m_capacityReservation = std::forward<CapacityReservationT>(value); }
    template<typename CapacityReservationT = CapacityReservation>
    InstanceGroupMetadata& WithCapacityReservation(CapacityReservationT&& value) { SetCapacityReservation(std::forward<CapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet where the instance group is located.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    InstanceGroupMetadata& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group IDs associated with the instance group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    InstanceGroupMetadata& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    InstanceGroupMetadata& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you use a custom Amazon Machine Image (AMI) for the instance group, this
     * field shows the ID of the custom AMI.</p>
     */
    inline const Aws::String& GetAmiOverride() const { return m_amiOverride; }
    inline bool AmiOverrideHasBeenSet() const { return m_amiOverrideHasBeenSet; }
    template<typename AmiOverrideT = Aws::String>
    void SetAmiOverride(AmiOverrideT&& value) { m_amiOverrideHasBeenSet = true; m_amiOverride = std::forward<AmiOverrideT>(value); }
    template<typename AmiOverrideT = Aws::String>
    InstanceGroupMetadata& WithAmiOverride(AmiOverrideT&& value) { SetAmiOverride(std::forward<AmiOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    CapacityReservation m_capacityReservation;
    bool m_capacityReservationHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_amiOverride;
    bool m_amiOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
