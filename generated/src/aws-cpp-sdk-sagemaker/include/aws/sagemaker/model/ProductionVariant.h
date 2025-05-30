/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantAcceleratorType.h>
#include <aws/sagemaker/model/ProductionVariantCoreDumpConfig.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <aws/sagemaker/model/ProductionVariantManagedInstanceScaling.h>
#include <aws/sagemaker/model/ProductionVariantRoutingConfig.h>
#include <aws/sagemaker/model/ProductionVariantInferenceAmiVersion.h>
#include <aws/sagemaker/model/ProductionVariantCapacityReservationConfig.h>
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
   * <p> Identifies a model that you want to host and the resources chosen to deploy
   * for hosting it. If you are deploying multiple models, tell SageMaker how to
   * distribute traffic among the models by specifying variant weights. For more
   * information on production variants, check <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">
   * Production variants</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariant">AWS
   * API Reference</a></p>
   */
  class ProductionVariant
  {
  public:
    AWS_SAGEMAKER_API ProductionVariant() = default;
    AWS_SAGEMAKER_API ProductionVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the production variant.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    ProductionVariant& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model that you want to host. This is the name that you
     * specified when creating the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ProductionVariant& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of instances to launch initially.</p>
     */
    inline int GetInitialInstanceCount() const { return m_initialInstanceCount; }
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }
    inline ProductionVariant& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ML compute instance type.</p>
     */
    inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ProductionVariantInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ProductionVariant& WithInstanceType(ProductionVariantInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines initial traffic distribution among all of the models that you
     * specify in the endpoint configuration. The traffic to a production variant is
     * determined by the ratio of the <code>VariantWeight</code> to the sum of all
     * <code>VariantWeight</code> values across all ProductionVariants. If unspecified,
     * it defaults to 1.0. </p>
     */
    inline double GetInitialVariantWeight() const { return m_initialVariantWeight; }
    inline bool InitialVariantWeightHasBeenSet() const { return m_initialVariantWeightHasBeenSet; }
    inline void SetInitialVariantWeight(double value) { m_initialVariantWeightHasBeenSet = true; m_initialVariantWeight = value; }
    inline ProductionVariant& WithInitialVariantWeight(double value) { SetInitialVariantWeight(value); return *this;}
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
    inline ProductionVariant& WithAcceleratorType(ProductionVariantAcceleratorType value) { SetAcceleratorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configuration for a core dump from the model container when the
     * process crashes.</p>
     */
    inline const ProductionVariantCoreDumpConfig& GetCoreDumpConfig() const { return m_coreDumpConfig; }
    inline bool CoreDumpConfigHasBeenSet() const { return m_coreDumpConfigHasBeenSet; }
    template<typename CoreDumpConfigT = ProductionVariantCoreDumpConfig>
    void SetCoreDumpConfig(CoreDumpConfigT&& value) { m_coreDumpConfigHasBeenSet = true; m_coreDumpConfig = std::forward<CoreDumpConfigT>(value); }
    template<typename CoreDumpConfigT = ProductionVariantCoreDumpConfig>
    ProductionVariant& WithCoreDumpConfig(CoreDumpConfigT&& value) { SetCoreDumpConfig(std::forward<CoreDumpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless configuration for an endpoint. Specifies a serverless endpoint
     * configuration instead of an instance-based endpoint configuration.</p>
     */
    inline const ProductionVariantServerlessConfig& GetServerlessConfig() const { return m_serverlessConfig; }
    inline bool ServerlessConfigHasBeenSet() const { return m_serverlessConfigHasBeenSet; }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    void SetServerlessConfig(ServerlessConfigT&& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = std::forward<ServerlessConfigT>(value); }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    ProductionVariant& WithServerlessConfig(ServerlessConfigT&& value) { SetServerlessConfig(std::forward<ServerlessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume attached to individual inference
     * instance associated with the production variant. Currently only Amazon EBS gp2
     * storage volumes are supported.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ProductionVariant& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout value, in seconds, to download and extract the model that you
     * want to host from Amazon S3 to the individual inference instance associated with
     * this production variant.</p>
     */
    inline int GetModelDataDownloadTimeoutInSeconds() const { return m_modelDataDownloadTimeoutInSeconds; }
    inline bool ModelDataDownloadTimeoutInSecondsHasBeenSet() const { return m_modelDataDownloadTimeoutInSecondsHasBeenSet; }
    inline void SetModelDataDownloadTimeoutInSeconds(int value) { m_modelDataDownloadTimeoutInSecondsHasBeenSet = true; m_modelDataDownloadTimeoutInSeconds = value; }
    inline ProductionVariant& WithModelDataDownloadTimeoutInSeconds(int value) { SetModelDataDownloadTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout value, in seconds, for your inference container to pass health
     * check by SageMaker Hosting. For more information about health check, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-inference-code.html#your-algorithms-inference-algo-ping-requests">How
     * Your Container Should Respond to Health Check (Ping) Requests</a>.</p>
     */
    inline int GetContainerStartupHealthCheckTimeoutInSeconds() const { return m_containerStartupHealthCheckTimeoutInSeconds; }
    inline bool ContainerStartupHealthCheckTimeoutInSecondsHasBeenSet() const { return m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet; }
    inline void SetContainerStartupHealthCheckTimeoutInSeconds(int value) { m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true; m_containerStartupHealthCheckTimeoutInSeconds = value; }
    inline ProductionVariant& WithContainerStartupHealthCheckTimeoutInSeconds(int value) { SetContainerStartupHealthCheckTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> You can use this parameter to turn on native Amazon Web Services Systems
     * Manager (SSM) access for a production variant behind an endpoint. By default,
     * SSM access is disabled for all production variants behind an endpoint. You can
     * turn on or turn off SSM access for a production variant behind an existing
     * endpoint by creating a new endpoint configuration and calling
     * <code>UpdateEndpoint</code>. </p>
     */
    inline bool GetEnableSSMAccess() const { return m_enableSSMAccess; }
    inline bool EnableSSMAccessHasBeenSet() const { return m_enableSSMAccessHasBeenSet; }
    inline void SetEnableSSMAccess(bool value) { m_enableSSMAccessHasBeenSet = true; m_enableSSMAccess = value; }
    inline ProductionVariant& WithEnableSSMAccess(bool value) { SetEnableSSMAccess(value); return *this;}
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
    ProductionVariant& WithManagedInstanceScaling(ManagedInstanceScalingT&& value) { SetManagedInstanceScaling(std::forward<ManagedInstanceScalingT>(value)); return *this;}
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
    ProductionVariant& WithRoutingConfig(RoutingConfigT&& value) { SetRoutingConfig(std::forward<RoutingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an option from a collection of preconfigured Amazon Machine Image
     * (AMI) images. Each image is configured by Amazon Web Services with a set of
     * software and driver versions. Amazon Web Services optimizes these configurations
     * for different machine learning workloads.</p> <p>By selecting an AMI version,
     * you can ensure that your inference environment is compatible with specific
     * software requirements, such as CUDA driver versions, Linux kernel versions, or
     * Amazon Web Services Neuron driver versions.</p> <p>The AMI version names, and
     * their configurations, are the following:</p> <dl>
     * <dt>al2-ami-sagemaker-inference-gpu-2</dt> <dd> <ul> <li> <p>Accelerator:
     * GPU</p> </li> <li> <p>NVIDIA driver version: 535</p> </li> <li> <p>CUDA version:
     * 12.2</p> </li> </ul> </dd> <dt>al2-ami-sagemaker-inference-gpu-2-1</dt> <dd>
     * <ul> <li> <p>Accelerator: GPU</p> </li> <li> <p>NVIDIA driver version: 535</p>
     * </li> <li> <p>CUDA version: 12.2</p> </li> <li> <p>NVIDIA Container Toolkit with
     * disabled CUDA-compat mounting</p> </li> </ul> </dd>
     * <dt>al2-ami-sagemaker-inference-gpu-3-1</dt> <dd> <ul> <li> <p>Accelerator:
     * GPU</p> </li> <li> <p>NVIDIA driver version: 550</p> </li> <li> <p>CUDA version:
     * 12.4</p> </li> <li> <p>NVIDIA Container Toolkit with disabled CUDA-compat
     * mounting</p> </li> </ul> </dd> <dt>al2-ami-sagemaker-inference-neuron-2</dt>
     * <dd> <ul> <li> <p>Accelerator: Inferentia2 and Trainium</p> </li> <li> <p>Neuron
     * driver version: 2.19</p> </li> </ul> </dd> </dl>
     */
    inline ProductionVariantInferenceAmiVersion GetInferenceAmiVersion() const { return m_inferenceAmiVersion; }
    inline bool InferenceAmiVersionHasBeenSet() const { return m_inferenceAmiVersionHasBeenSet; }
    inline void SetInferenceAmiVersion(ProductionVariantInferenceAmiVersion value) { m_inferenceAmiVersionHasBeenSet = true; m_inferenceAmiVersion = value; }
    inline ProductionVariant& WithInferenceAmiVersion(ProductionVariantInferenceAmiVersion value) { SetInferenceAmiVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the capacity reservation for the compute instances that
     * SageMaker AI reserves for an endpoint. </p>
     */
    inline const ProductionVariantCapacityReservationConfig& GetCapacityReservationConfig() const { return m_capacityReservationConfig; }
    inline bool CapacityReservationConfigHasBeenSet() const { return m_capacityReservationConfigHasBeenSet; }
    template<typename CapacityReservationConfigT = ProductionVariantCapacityReservationConfig>
    void SetCapacityReservationConfig(CapacityReservationConfigT&& value) { m_capacityReservationConfigHasBeenSet = true; m_capacityReservationConfig = std::forward<CapacityReservationConfigT>(value); }
    template<typename CapacityReservationConfigT = ProductionVariantCapacityReservationConfig>
    ProductionVariant& WithCapacityReservationConfig(CapacityReservationConfigT&& value) { SetCapacityReservationConfig(std::forward<CapacityReservationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    int m_initialInstanceCount{0};
    bool m_initialInstanceCountHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    double m_initialVariantWeight{0.0};
    bool m_initialVariantWeightHasBeenSet = false;

    ProductionVariantAcceleratorType m_acceleratorType{ProductionVariantAcceleratorType::NOT_SET};
    bool m_acceleratorTypeHasBeenSet = false;

    ProductionVariantCoreDumpConfig m_coreDumpConfig;
    bool m_coreDumpConfigHasBeenSet = false;

    ProductionVariantServerlessConfig m_serverlessConfig;
    bool m_serverlessConfigHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;

    int m_modelDataDownloadTimeoutInSeconds{0};
    bool m_modelDataDownloadTimeoutInSecondsHasBeenSet = false;

    int m_containerStartupHealthCheckTimeoutInSeconds{0};
    bool m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = false;

    bool m_enableSSMAccess{false};
    bool m_enableSSMAccessHasBeenSet = false;

    ProductionVariantManagedInstanceScaling m_managedInstanceScaling;
    bool m_managedInstanceScalingHasBeenSet = false;

    ProductionVariantRoutingConfig m_routingConfig;
    bool m_routingConfigHasBeenSet = false;

    ProductionVariantInferenceAmiVersion m_inferenceAmiVersion{ProductionVariantInferenceAmiVersion::NOT_SET};
    bool m_inferenceAmiVersionHasBeenSet = false;

    ProductionVariantCapacityReservationConfig m_capacityReservationConfig;
    bool m_capacityReservationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
