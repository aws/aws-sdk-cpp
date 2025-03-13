/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantAcceleratorType.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <aws/sagemaker/model/ProductionVariantManagedInstanceScaling.h>
#include <aws/sagemaker/model/ProductionVariantRoutingConfig.h>
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
   * <p>The production variant summary for a deployment when an endpoint is creating
   * or updating with the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
   * or <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpoint.html">UpdateEndpoint</a>
   * operations. Describes the <code>VariantStatus </code>, weight and capacity for a
   * production variant associated with an endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PendingProductionVariantSummary">AWS
   * API Reference</a></p>
   */
  class PendingProductionVariantSummary
  {
  public:
    AWS_SAGEMAKER_API PendingProductionVariantSummary() = default;
    AWS_SAGEMAKER_API PendingProductionVariantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PendingProductionVariantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PendingProductionVariantSummary& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
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
    PendingProductionVariantSummary& WithDeployedImages(DeployedImagesT&& value) { SetDeployedImages(std::forward<DeployedImagesT>(value)); return *this;}
    template<typename DeployedImagesT = DeployedImage>
    PendingProductionVariantSummary& AddDeployedImages(DeployedImagesT&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.emplace_back(std::forward<DeployedImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The weight associated with the variant.</p>
     */
    inline double GetCurrentWeight() const { return m_currentWeight; }
    inline bool CurrentWeightHasBeenSet() const { return m_currentWeightHasBeenSet; }
    inline void SetCurrentWeight(double value) { m_currentWeightHasBeenSet = true; m_currentWeight = value; }
    inline PendingProductionVariantSummary& WithCurrentWeight(double value) { SetCurrentWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested weight for the variant in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
     * operation.</p>
     */
    inline double GetDesiredWeight() const { return m_desiredWeight; }
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }
    inline PendingProductionVariantSummary& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline int GetCurrentInstanceCount() const { return m_currentInstanceCount; }
    inline bool CurrentInstanceCountHasBeenSet() const { return m_currentInstanceCountHasBeenSet; }
    inline void SetCurrentInstanceCount(int value) { m_currentInstanceCountHasBeenSet = true; m_currentInstanceCount = value; }
    inline PendingProductionVariantSummary& WithCurrentInstanceCount(int value) { SetCurrentInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances requested in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
     * operation.</p>
     */
    inline int GetDesiredInstanceCount() const { return m_desiredInstanceCount; }
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }
    inline PendingProductionVariantSummary& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ProductionVariantInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline PendingProductionVariantSummary& WithInstanceType(ProductionVariantInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify the size of the EI instance
     * to use for the production variant.</p>
     */
    inline ProductionVariantAcceleratorType GetAcceleratorType() const { return m_acceleratorType; }
    inline bool AcceleratorTypeHasBeenSet() const { return m_acceleratorTypeHasBeenSet; }
    inline void SetAcceleratorType(ProductionVariantAcceleratorType value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = value; }
    inline PendingProductionVariantSummary& WithAcceleratorType(ProductionVariantAcceleratorType value) { SetAcceleratorType(value); return *this;}
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
    PendingProductionVariantSummary& WithVariantStatus(VariantStatusT&& value) { SetVariantStatus(std::forward<VariantStatusT>(value)); return *this;}
    template<typename VariantStatusT = ProductionVariantStatus>
    PendingProductionVariantSummary& AddVariantStatus(VariantStatusT&& value) { m_variantStatusHasBeenSet = true; m_variantStatus.emplace_back(std::forward<VariantStatusT>(value)); return *this; }
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
    PendingProductionVariantSummary& WithCurrentServerlessConfig(CurrentServerlessConfigT&& value) { SetCurrentServerlessConfig(std::forward<CurrentServerlessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline const ProductionVariantServerlessConfig& GetDesiredServerlessConfig() const { return m_desiredServerlessConfig; }
    inline bool DesiredServerlessConfigHasBeenSet() const { return m_desiredServerlessConfigHasBeenSet; }
    template<typename DesiredServerlessConfigT = ProductionVariantServerlessConfig>
    void SetDesiredServerlessConfig(DesiredServerlessConfigT&& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = std::forward<DesiredServerlessConfigT>(value); }
    template<typename DesiredServerlessConfigT = ProductionVariantServerlessConfig>
    PendingProductionVariantSummary& WithDesiredServerlessConfig(DesiredServerlessConfigT&& value) { SetDesiredServerlessConfig(std::forward<DesiredServerlessConfigT>(value)); return *this;}
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
    PendingProductionVariantSummary& WithManagedInstanceScaling(ManagedInstanceScalingT&& value) { SetManagedInstanceScaling(std::forward<ManagedInstanceScalingT>(value)); return *this;}
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
    PendingProductionVariantSummary& WithRoutingConfig(RoutingConfigT&& value) { SetRoutingConfig(std::forward<RoutingConfigT>(value)); return *this;}
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

    ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    ProductionVariantAcceleratorType m_acceleratorType{ProductionVariantAcceleratorType::NOT_SET};
    bool m_acceleratorTypeHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
