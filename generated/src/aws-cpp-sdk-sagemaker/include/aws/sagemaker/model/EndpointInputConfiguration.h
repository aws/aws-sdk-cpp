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
    AWS_SAGEMAKER_API EndpointInputConfiguration();
    AWS_SAGEMAKER_API EndpointInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline EndpointInputConfiguration& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}
    inline EndpointInputConfiguration& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProductionVariantServerlessConfig& GetServerlessConfig() const{ return m_serverlessConfig; }
    inline bool ServerlessConfigHasBeenSet() const { return m_serverlessConfigHasBeenSet; }
    inline void SetServerlessConfig(const ProductionVariantServerlessConfig& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = value; }
    inline void SetServerlessConfig(ProductionVariantServerlessConfig&& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = std::move(value); }
    inline EndpointInputConfiguration& WithServerlessConfig(const ProductionVariantServerlessConfig& value) { SetServerlessConfig(value); return *this;}
    inline EndpointInputConfiguration& WithServerlessConfig(ProductionVariantServerlessConfig&& value) { SetServerlessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const{ return m_inferenceSpecificationName; }
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }
    inline void SetInferenceSpecificationName(const Aws::String& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = value; }
    inline void SetInferenceSpecificationName(Aws::String&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::move(value); }
    inline void SetInferenceSpecificationName(const char* value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName.assign(value); }
    inline EndpointInputConfiguration& WithInferenceSpecificationName(const Aws::String& value) { SetInferenceSpecificationName(value); return *this;}
    inline EndpointInputConfiguration& WithInferenceSpecificationName(Aws::String&& value) { SetInferenceSpecificationName(std::move(value)); return *this;}
    inline EndpointInputConfiguration& WithInferenceSpecificationName(const char* value) { SetInferenceSpecificationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline const EnvironmentParameterRanges& GetEnvironmentParameterRanges() const{ return m_environmentParameterRanges; }
    inline bool EnvironmentParameterRangesHasBeenSet() const { return m_environmentParameterRangesHasBeenSet; }
    inline void SetEnvironmentParameterRanges(const EnvironmentParameterRanges& value) { m_environmentParameterRangesHasBeenSet = true; m_environmentParameterRanges = value; }
    inline void SetEnvironmentParameterRanges(EnvironmentParameterRanges&& value) { m_environmentParameterRangesHasBeenSet = true; m_environmentParameterRanges = std::move(value); }
    inline EndpointInputConfiguration& WithEnvironmentParameterRanges(const EnvironmentParameterRanges& value) { SetEnvironmentParameterRanges(value); return *this;}
    inline EndpointInputConfiguration& WithEnvironmentParameterRanges(EnvironmentParameterRanges&& value) { SetEnvironmentParameterRanges(std::move(value)); return *this;}
    ///@}
  private:

    ProductionVariantInstanceType m_instanceType;
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
