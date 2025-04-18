/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ManualSearchAIAgentConfiguration.h>
#include <aws/qconnect/model/AnswerRecommendationAIAgentConfiguration.h>
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
    AWS_QCONNECT_API AIAgentConfiguration() = default;
    AWS_QCONNECT_API AIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for AI Agents of type <code>MANUAL_SEARCH</code>.</p>
     */
    inline const ManualSearchAIAgentConfiguration& GetManualSearchAIAgentConfiguration() const { return m_manualSearchAIAgentConfiguration; }
    inline bool ManualSearchAIAgentConfigurationHasBeenSet() const { return m_manualSearchAIAgentConfigurationHasBeenSet; }
    template<typename ManualSearchAIAgentConfigurationT = ManualSearchAIAgentConfiguration>
    void SetManualSearchAIAgentConfiguration(ManualSearchAIAgentConfigurationT&& value) { m_manualSearchAIAgentConfigurationHasBeenSet = true; m_manualSearchAIAgentConfiguration = std::forward<ManualSearchAIAgentConfigurationT>(value); }
    template<typename ManualSearchAIAgentConfigurationT = ManualSearchAIAgentConfiguration>
    AIAgentConfiguration& WithManualSearchAIAgentConfiguration(ManualSearchAIAgentConfigurationT&& value) { SetManualSearchAIAgentConfiguration(std::forward<ManualSearchAIAgentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for AI Agents of type
     * <code>ANSWER_RECOMMENDATION</code>.</p>
     */
    inline const AnswerRecommendationAIAgentConfiguration& GetAnswerRecommendationAIAgentConfiguration() const { return m_answerRecommendationAIAgentConfiguration; }
    inline bool AnswerRecommendationAIAgentConfigurationHasBeenSet() const { return m_answerRecommendationAIAgentConfigurationHasBeenSet; }
    template<typename AnswerRecommendationAIAgentConfigurationT = AnswerRecommendationAIAgentConfiguration>
    void SetAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfigurationT&& value) { m_answerRecommendationAIAgentConfigurationHasBeenSet = true; m_answerRecommendationAIAgentConfiguration = std::forward<AnswerRecommendationAIAgentConfigurationT>(value); }
    template<typename AnswerRecommendationAIAgentConfigurationT = AnswerRecommendationAIAgentConfiguration>
    AIAgentConfiguration& WithAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfigurationT&& value) { SetAnswerRecommendationAIAgentConfiguration(std::forward<AnswerRecommendationAIAgentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for AI Agents of type SELF_SERVICE.</p>
     */
    inline const SelfServiceAIAgentConfiguration& GetSelfServiceAIAgentConfiguration() const { return m_selfServiceAIAgentConfiguration; }
    inline bool SelfServiceAIAgentConfigurationHasBeenSet() const { return m_selfServiceAIAgentConfigurationHasBeenSet; }
    template<typename SelfServiceAIAgentConfigurationT = SelfServiceAIAgentConfiguration>
    void SetSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfigurationT&& value) { m_selfServiceAIAgentConfigurationHasBeenSet = true; m_selfServiceAIAgentConfiguration = std::forward<SelfServiceAIAgentConfigurationT>(value); }
    template<typename SelfServiceAIAgentConfigurationT = SelfServiceAIAgentConfiguration>
    AIAgentConfiguration& WithSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfigurationT&& value) { SetSelfServiceAIAgentConfiguration(std::forward<SelfServiceAIAgentConfigurationT>(value)); return *this;}
    ///@}
  private:

    ManualSearchAIAgentConfiguration m_manualSearchAIAgentConfiguration;
    bool m_manualSearchAIAgentConfigurationHasBeenSet = false;

    AnswerRecommendationAIAgentConfiguration m_answerRecommendationAIAgentConfiguration;
    bool m_answerRecommendationAIAgentConfigurationHasBeenSet = false;

    SelfServiceAIAgentConfiguration m_selfServiceAIAgentConfiguration;
    bool m_selfServiceAIAgentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
