/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The name and sampling percentage of a shadow variant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ShadowModelVariantConfig">AWS
   * API Reference</a></p>
   */
  class ShadowModelVariantConfig
  {
  public:
    AWS_SAGEMAKER_API ShadowModelVariantConfig() = default;
    AWS_SAGEMAKER_API ShadowModelVariantConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ShadowModelVariantConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the shadow variant.</p>
     */
    inline const Aws::String& GetShadowModelVariantName() const { return m_shadowModelVariantName; }
    inline bool ShadowModelVariantNameHasBeenSet() const { return m_shadowModelVariantNameHasBeenSet; }
    template<typename ShadowModelVariantNameT = Aws::String>
    void SetShadowModelVariantName(ShadowModelVariantNameT&& value) { m_shadowModelVariantNameHasBeenSet = true; m_shadowModelVariantName = std::forward<ShadowModelVariantNameT>(value); }
    template<typename ShadowModelVariantNameT = Aws::String>
    ShadowModelVariantConfig& WithShadowModelVariantName(ShadowModelVariantNameT&& value) { SetShadowModelVariantName(std::forward<ShadowModelVariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of inference requests that Amazon SageMaker replicates from
     * the production variant to the shadow variant. </p>
     */
    inline int GetSamplingPercentage() const { return m_samplingPercentage; }
    inline bool SamplingPercentageHasBeenSet() const { return m_samplingPercentageHasBeenSet; }
    inline void SetSamplingPercentage(int value) { m_samplingPercentageHasBeenSet = true; m_samplingPercentage = value; }
    inline ShadowModelVariantConfig& WithSamplingPercentage(int value) { SetSamplingPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_shadowModelVariantName;
    bool m_shadowModelVariantNameHasBeenSet = false;

    int m_samplingPercentage{0};
    bool m_samplingPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
