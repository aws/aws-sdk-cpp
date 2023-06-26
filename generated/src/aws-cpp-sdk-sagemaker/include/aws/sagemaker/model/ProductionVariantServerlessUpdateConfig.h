/**
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
   * <p>Specifies the serverless update concurrency configuration for an endpoint
   * variant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantServerlessUpdateConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantServerlessUpdateConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig();
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated maximum number of concurrent invocations your serverless endpoint
     * can process.</p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The updated maximum number of concurrent invocations your serverless endpoint
     * can process.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The updated maximum number of concurrent invocations your serverless endpoint
     * can process.</p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The updated maximum number of concurrent invocations your serverless endpoint
     * can process.</p>
     */
    inline ProductionVariantServerlessUpdateConfig& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The updated amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     */
    inline int GetProvisionedConcurrency() const{ return m_provisionedConcurrency; }

    /**
     * <p>The updated amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     */
    inline bool ProvisionedConcurrencyHasBeenSet() const { return m_provisionedConcurrencyHasBeenSet; }

    /**
     * <p>The updated amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     */
    inline void SetProvisionedConcurrency(int value) { m_provisionedConcurrencyHasBeenSet = true; m_provisionedConcurrency = value; }

    /**
     * <p>The updated amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     */
    inline ProductionVariantServerlessUpdateConfig& WithProvisionedConcurrency(int value) { SetProvisionedConcurrency(value); return *this;}

  private:

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    int m_provisionedConcurrency;
    bool m_provisionedConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
