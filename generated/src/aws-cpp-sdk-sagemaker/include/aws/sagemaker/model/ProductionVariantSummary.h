/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <aws/sagemaker/model/ProductionVariantManagedInstanceScaling.h>
#include <aws/sagemaker/model/ProductionVariantRoutingConfig.h>
#include <aws/sagemaker/model/ProductionVariantCapacityReservationSummary.h>
#include <aws/sagemaker/model/DeployedImage.h>
#include <aws/sagemaker/model/ProductionVariantStatus.h>
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
   * <p>Describes weight and capacities for a production variant associated with an
   * endpoint. If you sent a request to the
   * <code>UpdateEndpointWeightsAndCapacities</code> API and the endpoint status is
   * <code>Updating</code>, you get different desired and current values.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantSummary">AWS
   * API Reference</a></p>
   */
  class ProductionVariantSummary
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantSummary() = default;
    AWS_SAGEMAKER_API ProductionVariantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    ProductionVariantSummary& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline const Aws::Vector<DeployedImage>& GetDeployedImages() const { return m_deployedImages; }
    inline bool DeployedImagesHasBeenSet() const { return m_deployedImagesHasBeenSet; }
    template<typename DeployedImagesT = Aws::Vector<DeployedImage>>
    void SetDeployedImages(DeployedImagesT&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages = std::forward<DeployedImagesT>(value); }
    template<typename DeployedImagesT = Aws::Vector<DeployedImage>>
    ProductionVariantSummary& WithDeployedImages(DeployedImagesT&& value) { SetDeployedImages(std::forward<DeployedImagesT>(value)); return *this;}
    template<typename DeployedImagesT = DeployedImage>
    ProductionVariantSummary& AddDeployedImages(DeployedImagesT&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.emplace_back(std::forward<DeployedImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The weight associated with the variant.</p>
     */
    inline double GetCurrentWeight() const { return m_currentWeight; }
    inline bool CurrentWeightHasBeenSet() const { return m_currentWeightHasBeenSet; }
    inline void SetCurrentWeight(double value) { m_currentWeightHasBeenSet = true; m_currentWeight = value; }
    inline ProductionVariantSummary& WithCurrentWeight(double value) { SetCurrentWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested weight, as specified in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline double GetDesiredWeight() const { return m_desiredWeight; }
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }
    inline ProductionVariantSummary& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline int GetCurrentInstanceCount() const { return m_currentInstanceCount; }
    inline bool CurrentInstanceCountHasBeenSet() const { return m_currentInstanceCountHasBeenSet; }
    inline void SetCurrentInstanceCount(int value) { m_currentInstanceCountHasBeenSet = true; m_currentInstanceCount = value; }
    inline ProductionVariantSummary& WithCurrentInstanceCount(int value) { SetCurrentInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances requested in the
     * <code>UpdateEndpointWeightsAndCapacities</code> request. </p>
     */
    inline int GetDesiredInstanceCount() const { return m_desiredInstanceCount; }
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }
    inline ProductionVariantSummary& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline const Aws::Vector<ProductionVariantStatus>& GetVariantStatus() const { return m_variantStatus; }
    inline bool VariantStatusHasBeenSet() const { return m_variantStatusHasBeenSet; }
    template<typename VariantStatusT = Aws::Vector<ProductionVariantStatus>>
    void SetVariantStatus(VariantStatusT&& value) { m_variantStatusHasBeenSet = true; m_variantStatus = std::forward<VariantStatusT>(value); }
    template<typename VariantStatusT = Aws::Vector<ProductionVariantStatus>>
    ProductionVariantSummary& WithVariantStatus(VariantStatusT&& value) { SetVariantStatus(std::forward<VariantStatusT>(value)); return *this;}
    template<typename VariantStatusT = ProductionVariantStatus>
    ProductionVariantSummary& AddVariantStatus(VariantStatusT&& value) { m_variantStatusHasBeenSet = true; m_variantStatus.emplace_back(std::forward<VariantStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline const ProductionVariantServerlessConfig& GetCurrentServerlessConfig() const { return m_currentServerlessConfig; }
    inline bool CurrentServerlessConfigHasBeenSet() const { return m_currentServerlessConfigHasBeenSet; }
    template<typename CurrentServerlessConfigT = ProductionVariantServerlessConfig>
    void SetCurrentServerlessConfig(CurrentServerlessConfigT&& value) { m_currentServerlessConfigHasBeenSet = true; m_currentServerlessConfig = std::forward<CurrentServerlessConfigT>(value); }
    template<typename CurrentServerlessConfigT = ProductionVariantServerlessConfig>
    ProductionVariantSummary& WithCurrentServerlessConfig(CurrentServerlessConfigT&& value) { SetCurrentServerlessConfig(std::forward<CurrentServerlessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless configuration requested for the endpoint update.</p>
     */
    inline const ProductionVariantServerlessConfig& GetDesiredServerlessConfig() const { return m_desiredServerlessConfig; }
    inline bool DesiredServerlessConfigHasBeenSet() const { return m_desiredServerlessConfigHasBeenSet; }
    template<typename DesiredServerlessConfigT = ProductionVariantServerlessConfig>
    void SetDesiredServerlessConfig(DesiredServerlessConfigT&& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = std::forward<DesiredServerlessConfigT>(value); }
    template<typename DesiredServerlessConfigT = ProductionVariantServerlessConfig>
    ProductionVariantSummary& WithDesiredServerlessConfig(DesiredServerlessConfigT&& value) { SetDesiredServerlessConfig(std::forward<DesiredServerlessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control the range in the number of instances that the endpoint
     * provisions as it scales up or down to accommodate traffic. </p>
     */
    inline const ProductionVariantManagedInstanceScaling& GetManagedInstanceScaling() const { return m_managedInstanceScaling; }
    inline bool ManagedInstanceScalingHasBeenSet() const { return m_managedInstanceScalingHasBeenSet; }
    template<typename ManagedInstanceScalingT = ProductionVariantManagedInstanceScaling>
    void SetManagedInstanceScaling(ManagedInstanceScalingT&& value) { m_managedInstanceScalingHasBeenSet = true; m_managedInstanceScaling = std::forward<ManagedInstanceScalingT>(value); }
    template<typename ManagedInstanceScalingT = ProductionVariantManagedInstanceScaling>
    ProductionVariantSummary& WithManagedInstanceScaling(ManagedInstanceScalingT&& value) { SetManagedInstanceScaling(std::forward<ManagedInstanceScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that control how the endpoint routes incoming traffic to the
     * instances that the endpoint hosts.</p>
     */
    inline const ProductionVariantRoutingConfig& GetRoutingConfig() const { return m_routingConfig; }
    inline bool RoutingConfigHasBeenSet() const { return m_routingConfigHasBeenSet; }
    template<typename RoutingConfigT = ProductionVariantRoutingConfig>
    void SetRoutingConfig(RoutingConfigT&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::forward<RoutingConfigT>(value); }
    template<typename RoutingConfigT = ProductionVariantRoutingConfig>
    ProductionVariantSummary& WithRoutingConfig(RoutingConfigT&& value) { SetRoutingConfig(std::forward<RoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the capacity reservation for the compute instances that
     * SageMaker AI reserves for an endpoint. </p>
     */
    inline const ProductionVariantCapacityReservationSummary& GetCapacityReservationConfig() const { return m_capacityReservationConfig; }
    inline bool CapacityReservationConfigHasBeenSet() const { return m_capacityReservationConfigHasBeenSet; }
    template<typename CapacityReservationConfigT = ProductionVariantCapacityReservationSummary>
    void SetCapacityReservationConfig(CapacityReservationConfigT&& value) { m_capacityReservationConfigHasBeenSet = true; m_capacityReservationConfig = std::forward<CapacityReservationConfigT>(value); }
    template<typename CapacityReservationConfigT = ProductionVariantCapacityReservationSummary>
    ProductionVariantSummary& WithCapacityReservationConfig(CapacityReservationConfigT&& value) { SetCapacityReservationConfig(std::forward<CapacityReservationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::Vector<DeployedImage> m_deployedImages;
    bool m_deployedImagesHasBeenSet = false;

    double m_currentWeight{0.0};
    bool m_currentWeightHasBeenSet = false;

    double m_desiredWeight{0.0};
    bool m_desiredWeightHasBeenSet = false;

    int m_currentInstanceCount{0};
    bool m_currentInstanceCountHasBeenSet = false;

    int m_desiredInstanceCount{0};
    bool m_desiredInstanceCountHasBeenSet = false;

    Aws::Vector<ProductionVariantStatus> m_variantStatus;
    bool m_variantStatusHasBeenSet = false;

    ProductionVariantServerlessConfig m_currentServerlessConfig;
    bool m_currentServerlessConfigHasBeenSet = false;

    ProductionVariantServerlessConfig m_desiredServerlessConfig;
    bool m_desiredServerlessConfigHasBeenSet = false;

    ProductionVariantManagedInstanceScaling m_managedInstanceScaling;
    bool m_managedInstanceScalingHasBeenSet = false;

    ProductionVariantRoutingConfig m_routingConfig;
    bool m_routingConfigHasBeenSet = false;

    ProductionVariantCapacityReservationSummary m_capacityReservationConfig;
    bool m_capacityReservationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
