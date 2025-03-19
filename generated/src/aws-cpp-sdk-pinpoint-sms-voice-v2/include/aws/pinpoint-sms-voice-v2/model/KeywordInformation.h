/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/KeywordAction.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for all keywords in a pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/KeywordInformation">AWS
   * API Reference</a></p>
   */
  class KeywordInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keyword as a string.</p>
     */
    inline const Aws::String& GetKeyword() const { return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    template<typename KeywordT = Aws::String>
    void SetKeyword(KeywordT&& value) { m_keywordHasBeenSet = true; m_keyword = std::forward<KeywordT>(value); }
    template<typename KeywordT = Aws::String>
    KeywordInformation& WithKeyword(KeywordT&& value) { SetKeyword(std::forward<KeywordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const { return m_keywordMessage; }
    inline bool KeywordMessageHasBeenSet() const { return m_keywordMessageHasBeenSet; }
    template<typename KeywordMessageT = Aws::String>
    void SetKeywordMessage(KeywordMessageT&& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = std::forward<KeywordMessageT>(value); }
    template<typename KeywordMessageT = Aws::String>
    KeywordInformation& WithKeywordMessage(KeywordMessageT&& value) { SetKeywordMessage(std::forward<KeywordMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline KeywordAction GetKeywordAction() const { return m_keywordAction; }
    inline bool KeywordActionHasBeenSet() const { return m_keywordActionHasBeenSet; }
    inline void SetKeywordAction(KeywordAction value) { m_keywordActionHasBeenSet = true; m_keywordAction = value; }
    inline KeywordInformation& WithKeywordAction(KeywordAction value) { SetKeywordAction(value); return *this;}
    ///@}
  private:

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_keywordMessage;
    bool m_keywordMessageHasBeenSet = false;

    KeywordAction m_keywordAction{KeywordAction::NOT_SET};
    bool m_keywordActionHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
