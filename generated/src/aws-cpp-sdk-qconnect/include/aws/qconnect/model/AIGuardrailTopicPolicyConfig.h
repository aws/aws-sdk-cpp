/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailTopicConfig.h>
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
   * <p>Contains details about topics that the AI Guardrail should identify and
   * deny.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailTopicPolicyConfig">AWS
   * API Reference</a></p>
   */
  class AIGuardrailTopicPolicyConfig
  {
  public:
    AWS_QCONNECT_API AIGuardrailTopicPolicyConfig();
    AWS_QCONNECT_API AIGuardrailTopicPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailTopicPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of policies related to topics that the AI Guardrail should deny.</p>
     */
    inline const Aws::Vector<GuardrailTopicConfig>& GetTopicsConfig() const{ return m_topicsConfig; }
    inline bool TopicsConfigHasBeenSet() const { return m_topicsConfigHasBeenSet; }
    inline void SetTopicsConfig(const Aws::Vector<GuardrailTopicConfig>& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig = value; }
    inline void SetTopicsConfig(Aws::Vector<GuardrailTopicConfig>&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig = std::move(value); }
    inline AIGuardrailTopicPolicyConfig& WithTopicsConfig(const Aws::Vector<GuardrailTopicConfig>& value) { SetTopicsConfig(value); return *this;}
    inline AIGuardrailTopicPolicyConfig& WithTopicsConfig(Aws::Vector<GuardrailTopicConfig>&& value) { SetTopicsConfig(std::move(value)); return *this;}
    inline AIGuardrailTopicPolicyConfig& AddTopicsConfig(const GuardrailTopicConfig& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig.push_back(value); return *this; }
    inline AIGuardrailTopicPolicyConfig& AddTopicsConfig(GuardrailTopicConfig&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailTopicConfig> m_topicsConfig;
    bool m_topicsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
