/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The recommended configuration to use for Real-Time Inference.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RealTimeInferenceRecommendation">AWS
   * API Reference</a></p>
   */
  class RealTimeInferenceRecommendation
  {
  public:
    AWS_SAGEMAKER_API RealTimeInferenceRecommendation();
    AWS_SAGEMAKER_API RealTimeInferenceRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RealTimeInferenceRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommendation ID which uniquely identifies each recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline RealTimeInferenceRecommendation& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline RealTimeInferenceRecommendation& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline RealTimeInferenceRecommendation& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended instance type for Real-Time Inference.</p>
     */
    inline const ProductionVariantInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ProductionVariantInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ProductionVariantInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline RealTimeInferenceRecommendation& WithInstanceType(const ProductionVariantInstanceType& value) { SetInstanceType(value); return *this;}
    inline RealTimeInferenceRecommendation& WithInstanceType(ProductionVariantInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended environment variables to set in the model container for
     * Real-Time Inference.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline RealTimeInferenceRecommendation& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline RealTimeInferenceRecommendation& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline RealTimeInferenceRecommendation& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline RealTimeInferenceRecommendation& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
