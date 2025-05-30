/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CapacityReservationPreference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Ec2CapacityReservation.h>
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
   * <p>Details about an ML capacity reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantCapacityReservationSummary">AWS
   * API Reference</a></p>
   */
  class ProductionVariantCapacityReservationSummary
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationSummary() = default;
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the ML capacity
     * reservation that SageMaker AI applies when it deploys the endpoint.</p>
     */
    inline const Aws::String& GetMlReservationArn() const { return m_mlReservationArn; }
    inline bool MlReservationArnHasBeenSet() const { return m_mlReservationArnHasBeenSet; }
    template<typename MlReservationArnT = Aws::String>
    void SetMlReservationArn(MlReservationArnT&& value) { m_mlReservationArnHasBeenSet = true; m_mlReservationArn = std::forward<MlReservationArnT>(value); }
    template<typename MlReservationArnT = Aws::String>
    ProductionVariantCapacityReservationSummary& WithMlReservationArn(MlReservationArnT&& value) { SetMlReservationArn(std::forward<MlReservationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that you chose for the capacity reservation. SageMaker AI supports
     * the following options:</p> <dl> <dt>capacity-reservations-only</dt> <dd>
     * <p>SageMaker AI launches instances only into an ML capacity reservation. If no
     * capacity is available, the instances fail to launch.</p> </dd> </dl>
     */
    inline CapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(CapacityReservationPreference value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline ProductionVariantCapacityReservationSummary& WithCapacityReservationPreference(CapacityReservationPreference value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that you allocated to the ML capacity
     * reservation.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline ProductionVariantCapacityReservationSummary& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that are currently available in the ML capacity
     * reservation.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline ProductionVariantCapacityReservationSummary& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances from the ML capacity reservation that are being used
     * by the endpoint.</p>
     */
    inline int GetUsedByCurrentEndpoint() const { return m_usedByCurrentEndpoint; }
    inline bool UsedByCurrentEndpointHasBeenSet() const { return m_usedByCurrentEndpointHasBeenSet; }
    inline void SetUsedByCurrentEndpoint(int value) { m_usedByCurrentEndpointHasBeenSet = true; m_usedByCurrentEndpoint = value; }
    inline ProductionVariantCapacityReservationSummary& WithUsedByCurrentEndpoint(int value) { SetUsedByCurrentEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 capacity reservations that are shared to this ML capacity
     * reservation, if any.</p>
     */
    inline const Aws::Vector<Ec2CapacityReservation>& GetEc2CapacityReservations() const { return m_ec2CapacityReservations; }
    inline bool Ec2CapacityReservationsHasBeenSet() const { return m_ec2CapacityReservationsHasBeenSet; }
    template<typename Ec2CapacityReservationsT = Aws::Vector<Ec2CapacityReservation>>
    void SetEc2CapacityReservations(Ec2CapacityReservationsT&& value) { m_ec2CapacityReservationsHasBeenSet = true; m_ec2CapacityReservations = std::forward<Ec2CapacityReservationsT>(value); }
    template<typename Ec2CapacityReservationsT = Aws::Vector<Ec2CapacityReservation>>
    ProductionVariantCapacityReservationSummary& WithEc2CapacityReservations(Ec2CapacityReservationsT&& value) { SetEc2CapacityReservations(std::forward<Ec2CapacityReservationsT>(value)); return *this;}
    template<typename Ec2CapacityReservationsT = Ec2CapacityReservation>
    ProductionVariantCapacityReservationSummary& AddEc2CapacityReservations(Ec2CapacityReservationsT&& value) { m_ec2CapacityReservationsHasBeenSet = true; m_ec2CapacityReservations.emplace_back(std::forward<Ec2CapacityReservationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_mlReservationArn;
    bool m_mlReservationArnHasBeenSet = false;

    CapacityReservationPreference m_capacityReservationPreference{CapacityReservationPreference::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    int m_usedByCurrentEndpoint{0};
    bool m_usedByCurrentEndpointHasBeenSet = false;

    Aws::Vector<Ec2CapacityReservation> m_ec2CapacityReservations;
    bool m_ec2CapacityReservationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
