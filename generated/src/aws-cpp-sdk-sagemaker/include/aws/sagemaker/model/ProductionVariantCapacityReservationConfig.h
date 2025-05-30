/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationPreference.h>
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
   * <p>Settings for the capacity reservation for the compute instances that
   * SageMaker AI reserves for an endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantCapacityReservationConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantCapacityReservationConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationConfig() = default;
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantCapacityReservationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Options that you can choose for the capacity reservation. SageMaker AI
     * supports the following options:</p> <dl> <dt>capacity-reservations-only</dt>
     * <dd> <p>SageMaker AI launches instances only into an ML capacity reservation. If
     * no capacity is available, the instances fail to launch.</p> </dd> </dl>
     */
    inline CapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(CapacityReservationPreference value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline ProductionVariantCapacityReservationConfig& WithCapacityReservationPreference(CapacityReservationPreference value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

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
    ProductionVariantCapacityReservationConfig& WithMlReservationArn(MlReservationArnT&& value) { SetMlReservationArn(std::forward<MlReservationArnT>(value)); return *this;}
    ///@}
  private:

    CapacityReservationPreference m_capacityReservationPreference{CapacityReservationPreference::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    Aws::String m_mlReservationArn;
    bool m_mlReservationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
