/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AdditionalEnis.h>
#include <aws/sagemaker/model/CapacityReservation.h>
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
   * <p>Metadata information about an instance in a HyperPod cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceMetadata">AWS
   * API Reference</a></p>
   */
  class InstanceMetadata
  {
  public:
    AWS_SAGEMAKER_API InstanceMetadata() = default;
    AWS_SAGEMAKER_API InstanceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstanceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the customer-managed Elastic Network Interface (ENI) associated
     * with the instance.</p>
     */
    inline const Aws::String& GetCustomerEni() const { return m_customerEni; }
    inline bool CustomerEniHasBeenSet() const { return m_customerEniHasBeenSet; }
    template<typename CustomerEniT = Aws::String>
    void SetCustomerEni(CustomerEniT&& value) { m_customerEniHasBeenSet = true; m_customerEni = std::forward<CustomerEniT>(value); }
    template<typename CustomerEniT = Aws::String>
    InstanceMetadata& WithCustomerEni(CustomerEniT&& value) { SetCustomerEni(std::forward<CustomerEniT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about additional Elastic Network Interfaces (ENIs) associated
     * with the instance.</p>
     */
    inline const AdditionalEnis& GetAdditionalEnis() const { return m_additionalEnis; }
    inline bool AdditionalEnisHasBeenSet() const { return m_additionalEnisHasBeenSet; }
    template<typename AdditionalEnisT = AdditionalEnis>
    void SetAdditionalEnis(AdditionalEnisT&& value) { m_additionalEnisHasBeenSet = true; m_additionalEnis = std::forward<AdditionalEnisT>(value); }
    template<typename AdditionalEnisT = AdditionalEnis>
    InstanceMetadata& WithAdditionalEnis(AdditionalEnisT&& value) { SetAdditionalEnis(std::forward<AdditionalEnisT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Capacity Reservation used by the instance.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const { return m_capacityReservation; }
    inline bool CapacityReservationHasBeenSet() const { return m_capacityReservationHasBeenSet; }
    template<typename CapacityReservationT = CapacityReservation>
    void SetCapacityReservation(CapacityReservationT&& value) { m_capacityReservationHasBeenSet = true; m_capacityReservation = std::forward<CapacityReservationT>(value); }
    template<typename CapacityReservationT = CapacityReservation>
    InstanceMetadata& WithCapacityReservation(CapacityReservationT&& value) { SetCapacityReservation(std::forward<CapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message describing why the instance creation or update failed, if
     * applicable.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    InstanceMetadata& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution state of the Lifecycle Script (LCS) for the instance.</p>
     */
    inline const Aws::String& GetLcsExecutionState() const { return m_lcsExecutionState; }
    inline bool LcsExecutionStateHasBeenSet() const { return m_lcsExecutionStateHasBeenSet; }
    template<typename LcsExecutionStateT = Aws::String>
    void SetLcsExecutionState(LcsExecutionStateT&& value) { m_lcsExecutionStateHasBeenSet = true; m_lcsExecutionState = std::forward<LcsExecutionStateT>(value); }
    template<typename LcsExecutionStateT = Aws::String>
    InstanceMetadata& WithLcsExecutionState(LcsExecutionStateT&& value) { SetLcsExecutionState(std::forward<LcsExecutionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique logical identifier of the node within the cluster. The ID used
     * here is the same object as in the <code>BatchAddClusterNodes</code> API.</p>
     */
    inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
    inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
    template<typename NodeLogicalIdT = Aws::String>
    void SetNodeLogicalId(NodeLogicalIdT&& value) { m_nodeLogicalIdHasBeenSet = true; m_nodeLogicalId = std::forward<NodeLogicalIdT>(value); }
    template<typename NodeLogicalIdT = Aws::String>
    InstanceMetadata& WithNodeLogicalId(NodeLogicalIdT&& value) { SetNodeLogicalId(std::forward<NodeLogicalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerEni;
    bool m_customerEniHasBeenSet = false;

    AdditionalEnis m_additionalEnis;
    bool m_additionalEnisHasBeenSet = false;

    CapacityReservation m_capacityReservation;
    bool m_capacityReservationHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_lcsExecutionState;
    bool m_lcsExecutionStateHasBeenSet = false;

    Aws::String m_nodeLogicalId;
    bool m_nodeLogicalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
