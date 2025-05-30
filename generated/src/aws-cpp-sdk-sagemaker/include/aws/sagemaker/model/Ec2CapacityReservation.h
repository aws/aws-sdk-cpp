/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The EC2 capacity reservations that are shared to an ML capacity
   * reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Ec2CapacityReservation">AWS
   * API Reference</a></p>
   */
  class Ec2CapacityReservation
  {
  public:
    AWS_SAGEMAKER_API Ec2CapacityReservation() = default;
    AWS_SAGEMAKER_API Ec2CapacityReservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Ec2CapacityReservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for an EC2 capacity reservation that's part of the ML
     * capacity reservation.</p>
     */
    inline const Aws::String& GetEc2CapacityReservationId() const { return m_ec2CapacityReservationId; }
    inline bool Ec2CapacityReservationIdHasBeenSet() const { return m_ec2CapacityReservationIdHasBeenSet; }
    template<typename Ec2CapacityReservationIdT = Aws::String>
    void SetEc2CapacityReservationId(Ec2CapacityReservationIdT&& value) { m_ec2CapacityReservationIdHasBeenSet = true; m_ec2CapacityReservationId = std::forward<Ec2CapacityReservationIdT>(value); }
    template<typename Ec2CapacityReservationIdT = Aws::String>
    Ec2CapacityReservation& WithEc2CapacityReservationId(Ec2CapacityReservationIdT&& value) { SetEc2CapacityReservationId(std::forward<Ec2CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that you allocated to the EC2 capacity
     * reservation.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline Ec2CapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are currently available in the EC2 capacity
     * reservation.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline Ec2CapacityReservation& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances from the EC2 capacity reservation that are being used
     * by the endpoint.</p>
     */
    inline int GetUsedByCurrentEndpoint() const { return m_usedByCurrentEndpoint; }
    inline bool UsedByCurrentEndpointHasBeenSet() const { return m_usedByCurrentEndpointHasBeenSet; }
    inline void SetUsedByCurrentEndpoint(int value) { m_usedByCurrentEndpointHasBeenSet = true; m_usedByCurrentEndpoint = value; }
    inline Ec2CapacityReservation& WithUsedByCurrentEndpoint(int value) { SetUsedByCurrentEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_ec2CapacityReservationId;
    bool m_ec2CapacityReservationIdHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    int m_usedByCurrentEndpoint{0};
    bool m_usedByCurrentEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
