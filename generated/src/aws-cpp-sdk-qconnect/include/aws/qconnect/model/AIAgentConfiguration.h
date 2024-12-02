/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AnswerRecommendationAIAgentConfiguration.h>
#include <aws/qconnect/model/ManualSearchAIAgentConfiguration.h>
#include <aws/qconnect/model/SelfServiceAIAgentConfiguration.h>
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
   * <p>A typed union that specifies the configuration based on the type of AI
   * Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentConfiguration">AWS
   * API Reference</a></p>
   */
  class AIAgentConfiguration
  {
  public:
    AWS_QCONNECT_API AIAgentConfiguration();
    AWS_QCONNECT_API AIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for AI Agents of type
     * <code>ANSWER_RECOMMENDATION</code>.</p>
     */
    inline const AnswerRecommendationAIAgentConfiguration& GetAnswerRecommendationAIAgentConfiguration() const{ return m_answerRecommendationAIAgentConfiguration; }
    inline bool AnswerRecommendationAIAgentConfigurationHasBeenSet() const { return m_answerRecommendationAIAgentConfigurationHasBeenSet; }
    inline void SetAnswerRecommendationAIAgentConfiguration(const AnswerRecommendationAIAgentConfiguration& value) { m_answerRecommendationAIAgentConfigurationHasBeenSet = true; m_answerRecommendationAIAgentConfiguration = value; }
    inline void SetAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfiguration&& value) { m_answerRecommendationAIAgentConfigurationHasBeenSet = true; m_answerRecommendationAIAgentConfiguration = std::move(value); }
    inline AIAgentConfiguration& WithAnswerRecommendationAIAgentConfiguration(const AnswerRecommendationAIAgentConfiguration& value) { SetAnswerRecommendationAIAgentConfiguration(value); return *this;}
    inline AIAgentConfiguration& WithAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfiguration&& value) { SetAnswerRecommendationAIAgentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for AI Agents of type <code>MANUAL_SEARCH</code>.</p>
     */
    inline const ManualSearchAIAgentConfiguration& GetManualSearchAIAgentConfiguration() const{ return m_manualSearchAIAgentConfiguration; }
    inline bool ManualSearchAIAgentConfigurationHasBeenSet() const { return m_manualSearchAIAgentConfigurationHasBeenSet; }
    inline void SetManualSearchAIAgentConfiguration(const ManualSearchAIAgentConfiguration& value) { m_manualSearchAIAgentConfigurationHasBeenSet = true; m_manualSearchAIAgentConfiguration = value; }
    inline void SetManualSearchAIAgentConfiguration(ManualSearchAIAgentConfiguration&& value) { m_manualSearchAIAgentConfigurationHasBeenSet = true; m_manualSearchAIAgentConfiguration = std::move(value); }
    inline AIAgentConfiguration& WithManualSearchAIAgentConfiguration(const ManualSearchAIAgentConfiguration& value) { SetManualSearchAIAgentConfiguration(value); return *this;}
    inline AIAgentConfiguration& WithManualSearchAIAgentConfiguration(ManualSearchAIAgentConfiguration&& value) { SetManualSearchAIAgentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for AI Agents of type SELF_SERVICE.</p>
     */
    inline const SelfServiceAIAgentConfiguration& GetSelfServiceAIAgentConfiguration() const{ return m_selfServiceAIAgentConfiguration; }
    inline bool SelfServiceAIAgentConfigurationHasBeenSet() const { return m_selfServiceAIAgentConfigurationHasBeenSet; }
    inline void SetSelfServiceAIAgentConfiguration(const SelfServiceAIAgentConfiguration& value) { m_selfServiceAIAgentConfigurationHasBeenSet = true; m_selfServiceAIAgentConfiguration = value; }
    inline void SetSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfiguration&& value) { m_selfServiceAIAgentConfigurationHasBeenSet = true; m_selfServiceAIAgentConfiguration = std::move(value); }
    inline AIAgentConfiguration& WithSelfServiceAIAgentConfiguration(const SelfServiceAIAgentConfiguration& value) { SetSelfServiceAIAgentConfiguration(value); return *this;}
    inline AIAgentConfiguration& WithSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfiguration&& value) { SetSelfServiceAIAgentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    AnswerRecommendationAIAgentConfiguration m_answerRecommendationAIAgentConfiguration;
    bool m_answerRecommendationAIAgentConfigurationHasBeenSet = false;

    ManualSearchAIAgentConfiguration m_manualSearchAIAgentConfiguration;
    bool m_manualSearchAIAgentConfigurationHasBeenSet = false;

    SelfServiceAIAgentConfiguration m_selfServiceAIAgentConfiguration;
    bool m_selfServiceAIAgentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
