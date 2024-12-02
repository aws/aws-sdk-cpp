/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailContextualGroundingFilterConfig.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The policy configuration details for the AI Guardrail's contextual grounding
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailContextualGroundingPolicyConfig">AWS
   * API Reference</a></p>
   */
  class AIGuardrailContextualGroundingPolicyConfig
  {
  public:
    AWS_QCONNECT_API AIGuardrailContextualGroundingPolicyConfig();
    AWS_QCONNECT_API AIGuardrailContextualGroundingPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailContextualGroundingPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter configuration details for the AI Guardrails contextual grounding
     * policy.</p>
     */
    inline const Aws::Vector<GuardrailContextualGroundingFilterConfig>& GetFiltersConfig() const{ return m_filtersConfig; }
    inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }
    inline void SetFiltersConfig(const Aws::Vector<GuardrailContextualGroundingFilterConfig>& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = value; }
    inline void SetFiltersConfig(Aws::Vector<GuardrailContextualGroundingFilterConfig>&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = std::move(value); }
    inline AIGuardrailContextualGroundingPolicyConfig& WithFiltersConfig(const Aws::Vector<GuardrailContextualGroundingFilterConfig>& value) { SetFiltersConfig(value); return *this;}
    inline AIGuardrailContextualGroundingPolicyConfig& WithFiltersConfig(Aws::Vector<GuardrailContextualGroundingFilterConfig>&& value) { SetFiltersConfig(std::move(value)); return *this;}
    inline AIGuardrailContextualGroundingPolicyConfig& AddFiltersConfig(const GuardrailContextualGroundingFilterConfig& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(value); return *this; }
    inline AIGuardrailContextualGroundingPolicyConfig& AddFiltersConfig(GuardrailContextualGroundingFilterConfig&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContextualGroundingFilterConfig> m_filtersConfig;
    bool m_filtersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
