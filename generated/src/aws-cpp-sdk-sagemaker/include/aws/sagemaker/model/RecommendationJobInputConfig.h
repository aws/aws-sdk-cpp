/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrafficPattern.h>
#include <aws/sagemaker/model/RecommendationJobResourceLimit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RecommendationJobContainerConfig.h>
#include <aws/sagemaker/model/RecommendationJobVpcConfig.h>
#include <aws/sagemaker/model/EndpointInputConfiguration.h>
#include <aws/sagemaker/model/EndpointInfo.h>
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
   * <p>The input configuration of the recommendation job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobInputConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobInputConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobInputConfig() = default;
    AWS_SAGEMAKER_API RecommendationJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const { return m_modelPackageVersionArn; }
    inline bool ModelPackageVersionArnHasBeenSet() const { return m_modelPackageVersionArnHasBeenSet; }
    template<typename ModelPackageVersionArnT = Aws::String>
    void SetModelPackageVersionArn(ModelPackageVersionArnT&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::forward<ModelPackageVersionArnT>(value); }
    template<typename ModelPackageVersionArnT = Aws::String>
    RecommendationJobInputConfig& WithModelPackageVersionArn(ModelPackageVersionArnT&& value) { SetModelPackageVersionArn(std::forward<ModelPackageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the created model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    RecommendationJobInputConfig& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum duration of the job, in seconds. The maximum value is
     * 18,000 seconds.</p>
     */
    inline int GetJobDurationInSeconds() const { return m_jobDurationInSeconds; }
    inline bool JobDurationInSecondsHasBeenSet() const { return m_jobDurationInSecondsHasBeenSet; }
    inline void SetJobDurationInSeconds(int value) { m_jobDurationInSecondsHasBeenSet = true; m_jobDurationInSeconds = value; }
    inline RecommendationJobInputConfig& WithJobDurationInSeconds(int value) { SetJobDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the traffic pattern of the job.</p>
     */
    inline const TrafficPattern& GetTrafficPattern() const { return m_trafficPattern; }
    inline bool TrafficPatternHasBeenSet() const { return m_trafficPatternHasBeenSet; }
    template<typename TrafficPatternT = TrafficPattern>
    void SetTrafficPattern(TrafficPatternT&& value) { m_trafficPatternHasBeenSet = true; m_trafficPattern = std::forward<TrafficPatternT>(value); }
    template<typename TrafficPatternT = TrafficPattern>
    RecommendationJobInputConfig& WithTrafficPattern(TrafficPatternT&& value) { SetTrafficPattern(std::forward<TrafficPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the resource limit of the job.</p>
     */
    inline const RecommendationJobResourceLimit& GetResourceLimit() const { return m_resourceLimit; }
    inline bool ResourceLimitHasBeenSet() const { return m_resourceLimitHasBeenSet; }
    template<typename ResourceLimitT = RecommendationJobResourceLimit>
    void SetResourceLimit(ResourceLimitT&& value) { m_resourceLimitHasBeenSet = true; m_resourceLimit = std::forward<ResourceLimitT>(value); }
    template<typename ResourceLimitT = RecommendationJobResourceLimit>
    RecommendationJobInputConfig& WithResourceLimit(ResourceLimitT&& value) { SetResourceLimit(std::forward<ResourceLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the endpoint configuration to use for a job.</p>
     */
    inline const Aws::Vector<EndpointInputConfiguration>& GetEndpointConfigurations() const { return m_endpointConfigurations; }
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointInputConfiguration>>
    void SetEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::forward<EndpointConfigurationsT>(value); }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointInputConfiguration>>
    RecommendationJobInputConfig& WithEndpointConfigurations(EndpointConfigurationsT&& value) { SetEndpointConfigurations(std::forward<EndpointConfigurationsT>(value)); return *this;}
    template<typename EndpointConfigurationsT = EndpointInputConfiguration>
    RecommendationJobInputConfig& AddEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.emplace_back(std::forward<EndpointConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service (Amazon Web Services KMS) key that Amazon SageMaker uses to encrypt data
     * on the storage volume attached to the ML compute instance that hosts the
     * endpoint. This key will be passed to SageMaker Hosting for endpoint creation.
     * </p> <p>The SageMaker execution role must have <code>kms:CreateGrant</code>
     * permission in order to encrypt data on the storage volume of the endpoints
     * created for inference recommendation. The inference recommendation job will fail
     * asynchronously during endpoint configuration creation if the role passed does
     * not have <code>kms:CreateGrant</code> permission.</p> <p>The
     * <code>KmsKeyId</code> can be any of the following formats:</p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:alias/&lt;ExampleAlias&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    RecommendationJobInputConfig& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies mandatory fields for running an Inference Recommender job. The
     * fields specified in <code>ContainerConfig</code> override the corresponding
     * fields in the model package.</p>
     */
    inline const RecommendationJobContainerConfig& GetContainerConfig() const { return m_containerConfig; }
    inline bool ContainerConfigHasBeenSet() const { return m_containerConfigHasBeenSet; }
    template<typename ContainerConfigT = RecommendationJobContainerConfig>
    void SetContainerConfig(ContainerConfigT&& value) { m_containerConfigHasBeenSet = true; m_containerConfig = std::forward<ContainerConfigT>(value); }
    template<typename ContainerConfigT = RecommendationJobContainerConfig>
    RecommendationJobInputConfig& WithContainerConfig(ContainerConfigT&& value) { SetContainerConfig(std::forward<ContainerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Existing customer endpoints on which to run an Inference Recommender job.</p>
     */
    inline const Aws::Vector<EndpointInfo>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<EndpointInfo>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<EndpointInfo>>
    RecommendationJobInputConfig& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = EndpointInfo>
    RecommendationJobInputConfig& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Inference Recommender provisions SageMaker endpoints with access to VPC in
     * the inference recommendation job.</p>
     */
    inline const RecommendationJobVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = RecommendationJobVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = RecommendationJobVpcConfig>
    RecommendationJobInputConfig& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageVersionArn;
    bool m_modelPackageVersionArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    int m_jobDurationInSeconds{0};
    bool m_jobDurationInSecondsHasBeenSet = false;

    TrafficPattern m_trafficPattern;
    bool m_trafficPatternHasBeenSet = false;

    RecommendationJobResourceLimit m_resourceLimit;
    bool m_resourceLimitHasBeenSet = false;

    Aws::Vector<EndpointInputConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    RecommendationJobContainerConfig m_containerConfig;
    bool m_containerConfigHasBeenSet = false;

    Aws::Vector<EndpointInfo> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    RecommendationJobVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
