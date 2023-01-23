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
   * or updating with the <code> <a>CreateEndpoint</a> </code> or <code>
   * <a>UpdateEndpoint</a> </code> operations. Describes the <code>VariantStatus
   * </code>, weight and capacity for a production variant associated with an
   * endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PendingProductionVariantSummary">AWS
   * API Reference</a></p>
   */
  class PendingProductionVariantSummary
  {
  public:
    AWS_SAGEMAKER_API PendingProductionVariantSummary();
    AWS_SAGEMAKER_API PendingProductionVariantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PendingProductionVariantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the variant.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the variant.</p>
     */
    inline PendingProductionVariantSummary& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline PendingProductionVariantSummary& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the variant.</p>
     */
    inline PendingProductionVariantSummary& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline const Aws::Vector<DeployedImage>& GetDeployedImages() const{ return m_deployedImages; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline bool DeployedImagesHasBeenSet() const { return m_deployedImagesHasBeenSet; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetDeployedImages(const Aws::Vector<DeployedImage>& value) { m_deployedImagesHasBeenSet = true; m_deployedImages = value; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetDeployedImages(Aws::Vector<DeployedImage>&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages = std::move(value); }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline PendingProductionVariantSummary& WithDeployedImages(const Aws::Vector<DeployedImage>& value) { SetDeployedImages(value); return *this;}

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline PendingProductionVariantSummary& WithDeployedImages(Aws::Vector<DeployedImage>&& value) { SetDeployedImages(std::move(value)); return *this;}

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline PendingProductionVariantSummary& AddDeployedImages(const DeployedImage& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.push_back(value); return *this; }

    /**
     * <p>An array of <code>DeployedImage</code> objects that specify the Amazon EC2
     * Container Registry paths of the inference images deployed on instances of this
     * <code>ProductionVariant</code>.</p>
     */
    inline PendingProductionVariantSummary& AddDeployedImages(DeployedImage&& value) { m_deployedImagesHasBeenSet = true; m_deployedImages.push_back(std::move(value)); return *this; }


    /**
     * <p>The weight associated with the variant.</p>
     */
    inline double GetCurrentWeight() const{ return m_currentWeight; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline bool CurrentWeightHasBeenSet() const { return m_currentWeightHasBeenSet; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline void SetCurrentWeight(double value) { m_currentWeightHasBeenSet = true; m_currentWeight = value; }

    /**
     * <p>The weight associated with the variant.</p>
     */
    inline PendingProductionVariantSummary& WithCurrentWeight(double value) { SetCurrentWeight(value); return *this;}


    /**
     * <p>The requested weight for the variant in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline double GetDesiredWeight() const{ return m_desiredWeight; }

    /**
     * <p>The requested weight for the variant in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline bool DesiredWeightHasBeenSet() const { return m_desiredWeightHasBeenSet; }

    /**
     * <p>The requested weight for the variant in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline void SetDesiredWeight(double value) { m_desiredWeightHasBeenSet = true; m_desiredWeight = value; }

    /**
     * <p>The requested weight for the variant in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline PendingProductionVariantSummary& WithDesiredWeight(double value) { SetDesiredWeight(value); return *this;}


    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline int GetCurrentInstanceCount() const{ return m_currentInstanceCount; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline bool CurrentInstanceCountHasBeenSet() const { return m_currentInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline void SetCurrentInstanceCount(int value) { m_currentInstanceCountHasBeenSet = true; m_currentInstanceCount = value; }

    /**
     * <p>The number of instances associated with the variant.</p>
     */
    inline PendingProductionVariantSummary& WithCurrentInstanceCount(int value) { SetCurrentInstanceCount(value); return *this;}


    /**
     * <p>The number of instances requested in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline int GetDesiredInstanceCount() const{ return m_desiredInstanceCount; }

    /**
     * <p>The number of instances requested in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline bool DesiredInstanceCountHasBeenSet() const { return m_desiredInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances requested in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline void SetDesiredInstanceCount(int value) { m_desiredInstanceCountHasBeenSet = true; m_desiredInstanceCount = value; }

    /**
     * <p>The number of instances requested in this deployment, as specified in the
     * endpoint configuration for the endpoint. The value is taken from the request to
     * the <code> <a>CreateEndpointConfig</a> </code> operation.</p>
     */
    inline PendingProductionVariantSummary& WithDesiredInstanceCount(int value) { SetDesiredInstanceCount(value); return *this;}


    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline PendingProductionVariantSummary& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instances associated with the variant.</p>
     */
    inline PendingProductionVariantSummary& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline const ProductionVariantAcceleratorType& GetAcceleratorType() const{ return m_acceleratorType; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline bool AcceleratorTypeHasBeenSet() const { return m_acceleratorTypeHasBeenSet; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorType(const ProductionVariantAcceleratorType& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = value; }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorType(ProductionVariantAcceleratorType&& value) { m_acceleratorTypeHasBeenSet = true; m_acceleratorType = std::move(value); }

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline PendingProductionVariantSummary& WithAcceleratorType(const ProductionVariantAcceleratorType& value) { SetAcceleratorType(value); return *this;}

    /**
     * <p>The size of the Elastic Inference (EI) instance to use for the production
     * variant. EI instances provide on-demand GPU computing for inference. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline PendingProductionVariantSummary& WithAcceleratorType(ProductionVariantAcceleratorType&& value) { SetAcceleratorType(std::move(value)); return *this;}


    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline const Aws::Vector<ProductionVariantStatus>& GetVariantStatus() const{ return m_variantStatus; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline bool VariantStatusHasBeenSet() const { return m_variantStatusHasBeenSet; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline void SetVariantStatus(const Aws::Vector<ProductionVariantStatus>& value) { m_variantStatusHasBeenSet = true; m_variantStatus = value; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline void SetVariantStatus(Aws::Vector<ProductionVariantStatus>&& value) { m_variantStatusHasBeenSet = true; m_variantStatus = std::move(value); }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline PendingProductionVariantSummary& WithVariantStatus(const Aws::Vector<ProductionVariantStatus>& value) { SetVariantStatus(value); return *this;}

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline PendingProductionVariantSummary& WithVariantStatus(Aws::Vector<ProductionVariantStatus>&& value) { SetVariantStatus(std::move(value)); return *this;}

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline PendingProductionVariantSummary& AddVariantStatus(const ProductionVariantStatus& value) { m_variantStatusHasBeenSet = true; m_variantStatus.push_back(value); return *this; }

    /**
     * <p>The endpoint variant status which describes the current deployment stage
     * status or operational status.</p>
     */
    inline PendingProductionVariantSummary& AddVariantStatus(ProductionVariantStatus&& value) { m_variantStatusHasBeenSet = true; m_variantStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline const ProductionVariantServerlessConfig& GetCurrentServerlessConfig() const{ return m_currentServerlessConfig; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline bool CurrentServerlessConfigHasBeenSet() const { return m_currentServerlessConfigHasBeenSet; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline void SetCurrentServerlessConfig(const ProductionVariantServerlessConfig& value) { m_currentServerlessConfigHasBeenSet = true; m_currentServerlessConfig = value; }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline void SetCurrentServerlessConfig(ProductionVariantServerlessConfig&& value) { m_currentServerlessConfigHasBeenSet = true; m_currentServerlessConfig = std::move(value); }

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline PendingProductionVariantSummary& WithCurrentServerlessConfig(const ProductionVariantServerlessConfig& value) { SetCurrentServerlessConfig(value); return *this;}

    /**
     * <p>The serverless configuration for the endpoint.</p>
     */
    inline PendingProductionVariantSummary& WithCurrentServerlessConfig(ProductionVariantServerlessConfig&& value) { SetCurrentServerlessConfig(std::move(value)); return *this;}


    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline const ProductionVariantServerlessConfig& GetDesiredServerlessConfig() const{ return m_desiredServerlessConfig; }

    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline bool DesiredServerlessConfigHasBeenSet() const { return m_desiredServerlessConfigHasBeenSet; }

    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline void SetDesiredServerlessConfig(const ProductionVariantServerlessConfig& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = value; }

    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline void SetDesiredServerlessConfig(ProductionVariantServerlessConfig&& value) { m_desiredServerlessConfigHasBeenSet = true; m_desiredServerlessConfig = std::move(value); }

    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline PendingProductionVariantSummary& WithDesiredServerlessConfig(const ProductionVariantServerlessConfig& value) { SetDesiredServerlessConfig(value); return *this;}

    /**
     * <p>The serverless configuration requested for this deployment, as specified in
     * the endpoint configuration for the endpoint.</p>
     */
    inline PendingProductionVariantSummary& WithDesiredServerlessConfig(ProductionVariantServerlessConfig&& value) { SetDesiredServerlessConfig(std::move(value)); return *this;}

  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::Vector<DeployedImage> m_deployedImages;
    bool m_deployedImagesHasBeenSet = false;

    double m_currentWeight;
    bool m_currentWeightHasBeenSet = false;

    double m_desiredWeight;
    bool m_desiredWeightHasBeenSet = false;

    int m_currentInstanceCount;
    bool m_currentInstanceCountHasBeenSet = false;

    int m_desiredInstanceCount;
    bool m_desiredInstanceCountHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    ProductionVariantAcceleratorType m_acceleratorType;
    bool m_acceleratorTypeHasBeenSet = false;

    Aws::Vector<ProductionVariantStatus> m_variantStatus;
    bool m_variantStatusHasBeenSet = false;

    ProductionVariantServerlessConfig m_currentServerlessConfig;
    bool m_currentServerlessConfigHasBeenSet = false;

    ProductionVariantServerlessConfig m_desiredServerlessConfig;
    bool m_desiredServerlessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
