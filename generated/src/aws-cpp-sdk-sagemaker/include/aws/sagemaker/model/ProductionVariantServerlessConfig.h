﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Specifies the serverless configuration for an endpoint variant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantServerlessConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantServerlessConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig() = default;
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantServerlessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The memory size of your serverless endpoint. Valid values are in 1 GB
     * increments: 1024 MB, 2048 MB, 3072 MB, 4096 MB, 5120 MB, or 6144 MB.</p>
     */
    inline int GetMemorySizeInMB() const { return m_memorySizeInMB; }
    inline bool MemorySizeInMBHasBeenSet() const { return m_memorySizeInMBHasBeenSet; }
    inline void SetMemorySizeInMB(int value) { m_memorySizeInMBHasBeenSet = true; m_memorySizeInMB = value; }
    inline ProductionVariantServerlessConfig& WithMemorySizeInMB(int value) { SetMemorySizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent invocations your serverless endpoint can
     * process.</p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline ProductionVariantServerlessConfig& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     *  <p>This field is not supported for serverless endpoint recommendations
     * for Inference Recommender jobs. For more information about creating an Inference
     * Recommender job, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateInferenceRecommendationsJob.html">CreateInferenceRecommendationsJobs</a>.</p>
     * 
     */
    inline int GetProvisionedConcurrency() const { return m_provisionedConcurrency; }
    inline bool ProvisionedConcurrencyHasBeenSet() const { return m_provisionedConcurrencyHasBeenSet; }
    inline void SetProvisionedConcurrency(int value) { m_provisionedConcurrencyHasBeenSet = true; m_provisionedConcurrency = value; }
    inline ProductionVariantServerlessConfig& WithProvisionedConcurrency(int value) { SetProvisionedConcurrency(value); return *this;}
    ///@}
  private:

    int m_memorySizeInMB{0};
    bool m_memorySizeInMBHasBeenSet = false;

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;

    int m_provisionedConcurrency{0};
    bool m_provisionedConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
