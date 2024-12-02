/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailContentFilterConfig.h>
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
   * <p>Contains details about how to handle harmful content.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailContentPolicyConfig">AWS
   * API Reference</a></p>
   */
  class AIGuardrailContentPolicyConfig
  {
  public:
    AWS_QCONNECT_API AIGuardrailContentPolicyConfig();
    AWS_QCONNECT_API AIGuardrailContentPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailContentPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline const Aws::Vector<GuardrailContentFilterConfig>& GetFiltersConfig() const{ return m_filtersConfig; }
    inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }
    inline void SetFiltersConfig(const Aws::Vector<GuardrailContentFilterConfig>& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = value; }
    inline void SetFiltersConfig(Aws::Vector<GuardrailContentFilterConfig>&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = std::move(value); }
    inline AIGuardrailContentPolicyConfig& WithFiltersConfig(const Aws::Vector<GuardrailContentFilterConfig>& value) { SetFiltersConfig(value); return *this;}
    inline AIGuardrailContentPolicyConfig& WithFiltersConfig(Aws::Vector<GuardrailContentFilterConfig>&& value) { SetFiltersConfig(std::move(value)); return *this;}
    inline AIGuardrailContentPolicyConfig& AddFiltersConfig(const GuardrailContentFilterConfig& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(value); return *this; }
    inline AIGuardrailContentPolicyConfig& AddFiltersConfig(GuardrailContentFilterConfig&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContentFilterConfig> m_filtersConfig;
    bool m_filtersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
