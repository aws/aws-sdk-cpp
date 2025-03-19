/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/ConversationMessage.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The input options for generating an Q App definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PredictQAppInputOptions">AWS
   * API Reference</a></p>
   */
  class PredictQAppInputOptions
  {
  public:
    AWS_QAPPS_API PredictQAppInputOptions() = default;
    AWS_QAPPS_API PredictQAppInputOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PredictQAppInputOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A conversation to use as input for generating the Q App definition.</p>
     */
    inline const Aws::Vector<ConversationMessage>& GetConversation() const { return m_conversation; }
    inline bool ConversationHasBeenSet() const { return m_conversationHasBeenSet; }
    template<typename ConversationT = Aws::Vector<ConversationMessage>>
    void SetConversation(ConversationT&& value) { m_conversationHasBeenSet = true; m_conversation = std::forward<ConversationT>(value); }
    template<typename ConversationT = Aws::Vector<ConversationMessage>>
    PredictQAppInputOptions& WithConversation(ConversationT&& value) { SetConversation(std::forward<ConversationT>(value)); return *this;}
    template<typename ConversationT = ConversationMessage>
    PredictQAppInputOptions& AddConversation(ConversationT&& value) { m_conversationHasBeenSet = true; m_conversation.emplace_back(std::forward<ConversationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A problem statement to use as input for generating the Q App definition.</p>
     */
    inline const Aws::String& GetProblemStatement() const { return m_problemStatement; }
    inline bool ProblemStatementHasBeenSet() const { return m_problemStatementHasBeenSet; }
    template<typename ProblemStatementT = Aws::String>
    void SetProblemStatement(ProblemStatementT&& value) { m_problemStatementHasBeenSet = true; m_problemStatement = std::forward<ProblemStatementT>(value); }
    template<typename ProblemStatementT = Aws::String>
    PredictQAppInputOptions& WithProblemStatement(ProblemStatementT&& value) { SetProblemStatement(std::forward<ProblemStatementT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConversationMessage> m_conversation;
    bool m_conversationHasBeenSet = false;

    Aws::String m_problemStatement;
    bool m_problemStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
