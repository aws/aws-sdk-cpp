/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The conversation history data to included in conversation context data before
   * the the Amazon Q in Connect session..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SelfServiceConversationHistory">AWS
   * API Reference</a></p>
   */
  class SelfServiceConversationHistory
  {
  public:
    AWS_QCONNECT_API SelfServiceConversationHistory();
    AWS_QCONNECT_API SelfServiceConversationHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SelfServiceConversationHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot response of the conversation history data.</p>
     */
    inline const Aws::String& GetBotResponse() const{ return m_botResponse; }
    inline bool BotResponseHasBeenSet() const { return m_botResponseHasBeenSet; }
    inline void SetBotResponse(const Aws::String& value) { m_botResponseHasBeenSet = true; m_botResponse = value; }
    inline void SetBotResponse(Aws::String&& value) { m_botResponseHasBeenSet = true; m_botResponse = std::move(value); }
    inline void SetBotResponse(const char* value) { m_botResponseHasBeenSet = true; m_botResponse.assign(value); }
    inline SelfServiceConversationHistory& WithBotResponse(const Aws::String& value) { SetBotResponse(value); return *this;}
    inline SelfServiceConversationHistory& WithBotResponse(Aws::String&& value) { SetBotResponse(std::move(value)); return *this;}
    inline SelfServiceConversationHistory& WithBotResponse(const char* value) { SetBotResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input transcript of the conversation history data.</p>
     */
    inline const Aws::String& GetInputTranscript() const{ return m_inputTranscript; }
    inline bool InputTranscriptHasBeenSet() const { return m_inputTranscriptHasBeenSet; }
    inline void SetInputTranscript(const Aws::String& value) { m_inputTranscriptHasBeenSet = true; m_inputTranscript = value; }
    inline void SetInputTranscript(Aws::String&& value) { m_inputTranscriptHasBeenSet = true; m_inputTranscript = std::move(value); }
    inline void SetInputTranscript(const char* value) { m_inputTranscriptHasBeenSet = true; m_inputTranscript.assign(value); }
    inline SelfServiceConversationHistory& WithInputTranscript(const Aws::String& value) { SetInputTranscript(value); return *this;}
    inline SelfServiceConversationHistory& WithInputTranscript(Aws::String&& value) { SetInputTranscript(std::move(value)); return *this;}
    inline SelfServiceConversationHistory& WithInputTranscript(const char* value) { SetInputTranscript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of turn of the conversation history data.</p>
     */
    inline int GetTurnNumber() const{ return m_turnNumber; }
    inline bool TurnNumberHasBeenSet() const { return m_turnNumberHasBeenSet; }
    inline void SetTurnNumber(int value) { m_turnNumberHasBeenSet = true; m_turnNumber = value; }
    inline SelfServiceConversationHistory& WithTurnNumber(int value) { SetTurnNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_botResponse;
    bool m_botResponseHasBeenSet = false;

    Aws::String m_inputTranscript;
    bool m_inputTranscriptHasBeenSet = false;

    int m_turnNumber;
    bool m_turnNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
