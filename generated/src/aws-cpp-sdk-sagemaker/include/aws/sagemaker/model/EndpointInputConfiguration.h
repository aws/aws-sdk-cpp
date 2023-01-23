/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
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


    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline EndpointInputConfiguration& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance types to use for the load test.</p>
     */
    inline EndpointInputConfiguration& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const{ return m_inferenceSpecificationName; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const Aws::String& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = value; }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(Aws::String&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::move(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline void SetInferenceSpecificationName(const char* value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName.assign(value); }

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline EndpointInputConfiguration& WithInferenceSpecificationName(const Aws::String& value) { SetInferenceSpecificationName(value); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline EndpointInputConfiguration& WithInferenceSpecificationName(Aws::String&& value) { SetInferenceSpecificationName(std::move(value)); return *this;}

    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline EndpointInputConfiguration& WithInferenceSpecificationName(const char* value) { SetInferenceSpecificationName(value); return *this;}


    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline const EnvironmentParameterRanges& GetEnvironmentParameterRanges() const{ return m_environmentParameterRanges; }

    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline bool EnvironmentParameterRangesHasBeenSet() const { return m_environmentParameterRangesHasBeenSet; }

    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline void SetEnvironmentParameterRanges(const EnvironmentParameterRanges& value) { m_environmentParameterRangesHasBeenSet = true; m_environmentParameterRanges = value; }

    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline void SetEnvironmentParameterRanges(EnvironmentParameterRanges&& value) { m_environmentParameterRangesHasBeenSet = true; m_environmentParameterRanges = std::move(value); }

    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline EndpointInputConfiguration& WithEnvironmentParameterRanges(const EnvironmentParameterRanges& value) { SetEnvironmentParameterRanges(value); return *this;}

    /**
     * <p> The parameter you want to benchmark against.</p>
     */
    inline EndpointInputConfiguration& WithEnvironmentParameterRanges(EnvironmentParameterRanges&& value) { SetEnvironmentParameterRanges(std::move(value)); return *this;}

  private:

    ProductionVariantInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    EnvironmentParameterRanges m_environmentParameterRanges;
    bool m_environmentParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
