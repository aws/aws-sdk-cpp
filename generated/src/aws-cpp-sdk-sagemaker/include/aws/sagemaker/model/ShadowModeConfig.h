/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ShadowModelVariantConfig.h>
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
   * <p> The configuration of <code>ShadowMode</code> inference experiment type,
   * which specifies a production variant to take all the inference requests, and a
   * shadow variant to which Amazon SageMaker replicates a percentage of the
   * inference requests. For the shadow variant it also specifies the percentage of
   * requests that Amazon SageMaker replicates. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ShadowModeConfig">AWS
   * API Reference</a></p>
   */
  class ShadowModeConfig
  {
  public:
    AWS_SAGEMAKER_API ShadowModeConfig();
    AWS_SAGEMAKER_API ShadowModeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ShadowModeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the production variant, which takes all the inference requests.
     * </p>
     */
    inline const Aws::String& GetSourceModelVariantName() const{ return m_sourceModelVariantName; }
    inline bool SourceModelVariantNameHasBeenSet() const { return m_sourceModelVariantNameHasBeenSet; }
    inline void SetSourceModelVariantName(const Aws::String& value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName = value; }
    inline void SetSourceModelVariantName(Aws::String&& value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName = std::move(value); }
    inline void SetSourceModelVariantName(const char* value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName.assign(value); }
    inline ShadowModeConfig& WithSourceModelVariantName(const Aws::String& value) { SetSourceModelVariantName(value); return *this;}
    inline ShadowModeConfig& WithSourceModelVariantName(Aws::String&& value) { SetSourceModelVariantName(std::move(value)); return *this;}
    inline ShadowModeConfig& WithSourceModelVariantName(const char* value) { SetSourceModelVariantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline const Aws::Vector<ShadowModelVariantConfig>& GetShadowModelVariants() const{ return m_shadowModelVariants; }
    inline bool ShadowModelVariantsHasBeenSet() const { return m_shadowModelVariantsHasBeenSet; }
    inline void SetShadowModelVariants(const Aws::Vector<ShadowModelVariantConfig>& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants = value; }
    inline void SetShadowModelVariants(Aws::Vector<ShadowModelVariantConfig>&& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants = std::move(value); }
    inline ShadowModeConfig& WithShadowModelVariants(const Aws::Vector<ShadowModelVariantConfig>& value) { SetShadowModelVariants(value); return *this;}
    inline ShadowModeConfig& WithShadowModelVariants(Aws::Vector<ShadowModelVariantConfig>&& value) { SetShadowModelVariants(std::move(value)); return *this;}
    inline ShadowModeConfig& AddShadowModelVariants(const ShadowModelVariantConfig& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants.push_back(value); return *this; }
    inline ShadowModeConfig& AddShadowModelVariants(ShadowModelVariantConfig&& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceModelVariantName;
    bool m_sourceModelVariantNameHasBeenSet = false;

    Aws::Vector<ShadowModelVariantConfig> m_shadowModelVariants;
    bool m_shadowModelVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
