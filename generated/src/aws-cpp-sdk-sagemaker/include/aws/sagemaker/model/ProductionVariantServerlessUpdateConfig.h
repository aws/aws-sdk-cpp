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
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig() = default;
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantServerlessUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated maximum number of concurrent invocations your serverless endpoint
     * can process.</p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline ProductionVariantServerlessUpdateConfig& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated amount of provisioned concurrency to allocate for the serverless
     * endpoint. Should be less than or equal to <code>MaxConcurrency</code>.</p>
     */
    inline int GetProvisionedConcurrency() const { return m_provisionedConcurrency; }
    inline bool ProvisionedConcurrencyHasBeenSet() const { return m_provisionedConcurrencyHasBeenSet; }
    inline void SetProvisionedConcurrency(int value) { m_provisionedConcurrencyHasBeenSet = true; m_provisionedConcurrency = value; }
    inline ProductionVariantServerlessUpdateConfig& WithProvisionedConcurrency(int value) { SetProvisionedConcurrency(value); return *this;}
    ///@}
  private:

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;

    int m_provisionedConcurrency{0};
    bool m_provisionedConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
