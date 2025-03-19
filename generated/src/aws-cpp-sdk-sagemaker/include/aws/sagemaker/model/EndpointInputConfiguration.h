/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EnvironmentParameterRanges.h>
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
   * <p>The endpoint configuration for the load test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointInputConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointInputConfiguration
  {
  public:
    AWS_SAGEMAKER_API EndpointInputConfiguration() = default;
    AWS_SAGEMAKER_API EndpointInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ProductionVariantInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline EndpointInputConfiguration& WithInstanceType(ProductionVariantInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    
    inline const ProductionVariantServerlessConfig& GetServerlessConfig() const { return m_serverlessConfig; }
    inline bool ServerlessConfigHasBeenSet() const { return m_serverlessConfigHasBeenSet; }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    void SetServerlessConfig(ServerlessConfigT&& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = std::forward<ServerlessConfigT>(value); }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    EndpointInputConfiguration& WithServerlessConfig(ServerlessConfigT&& value) { SetServerlessConfig(std::forward<ServerlessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const { return m_inferenceSpecificationName; }
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }
    template<typename InferenceSpecificationNameT = Aws::String>
    void SetInferenceSpecificationName(InferenceSpecificationNameT&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::forward<InferenceSpecificationNameT>(value); }
    template<typename InferenceSpecificationNameT = Aws::String>
    EndpointInputConfiguration& WithInferenceSpecificationName(InferenceSpecificationNameT&& value) { SetInferenceSpecificationName(std::forward<InferenceSpecificationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline const EnvironmentParameterRanges& GetEnvironmentParameterRanges() const { return m_environmentParameterRanges; }
    inline bool EnvironmentParameterRangesHasBeenSet() const { return m_environmentParameterRangesHasBeenSet; }
    template<typename EnvironmentParameterRangesT = EnvironmentParameterRanges>
    void SetEnvironmentParameterRanges(EnvironmentParameterRangesT&& value) { m_environmentParameterRangesHasBeenSet = true; m_environmentParameterRanges = std::forward<EnvironmentParameterRangesT>(value); }
    template<typename EnvironmentParameterRangesT = EnvironmentParameterRanges>
    EndpointInputConfiguration& WithEnvironmentParameterRanges(EnvironmentParameterRangesT&& value) { SetEnvironmentParameterRanges(std::forward<EnvironmentParameterRangesT>(value)); return *this;}
    ///@}
  private:

    ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    ProductionVariantServerlessConfig m_serverlessConfig;
    bool m_serverlessConfigHasBeenSet = false;

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    EnvironmentParameterRanges m_environmentParameterRanges;
    bool m_environmentParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
