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
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation();
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API KeywordInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The keyword as a string.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>The keyword as a string.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>The keyword as a string.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>The keyword as a string.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>The keyword as a string.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>The keyword as a string.</p>
     */
    inline KeywordInformation& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>The keyword as a string.</p>
     */
    inline KeywordInformation& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>The keyword as a string.</p>
     */
    inline KeywordInformation& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline const Aws::String& GetKeywordMessage() const{ return m_keywordMessage; }

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline bool KeywordMessageHasBeenSet() const { return m_keywordMessageHasBeenSet; }

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline void SetKeywordMessage(const Aws::String& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = value; }

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline void SetKeywordMessage(Aws::String&& value) { m_keywordMessageHasBeenSet = true; m_keywordMessage = std::move(value); }

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline void SetKeywordMessage(const char* value) { m_keywordMessageHasBeenSet = true; m_keywordMessage.assign(value); }

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline KeywordInformation& WithKeywordMessage(const Aws::String& value) { SetKeywordMessage(value); return *this;}

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline KeywordInformation& WithKeywordMessage(Aws::String&& value) { SetKeywordMessage(std::move(value)); return *this;}

    /**
     * <p>A custom message that can be used with the keyword.</p>
     */
    inline KeywordInformation& WithKeywordMessage(const char* value) { SetKeywordMessage(value); return *this;}


    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline const KeywordAction& GetKeywordAction() const{ return m_keywordAction; }

    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline bool KeywordActionHasBeenSet() const { return m_keywordActionHasBeenSet; }

    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline void SetKeywordAction(const KeywordAction& value) { m_keywordActionHasBeenSet = true; m_keywordAction = value; }

    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline void SetKeywordAction(KeywordAction&& value) { m_keywordActionHasBeenSet = true; m_keywordAction = std::move(value); }

    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline KeywordInformation& WithKeywordAction(const KeywordAction& value) { SetKeywordAction(value); return *this;}

    /**
     * <p>The action to perform for the keyword.</p>
     */
    inline KeywordInformation& WithKeywordAction(KeywordAction&& value) { SetKeywordAction(std::move(value)); return *this;}

  private:

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_keywordMessage;
    bool m_keywordMessageHasBeenSet = false;

    KeywordAction m_keywordAction;
    bool m_keywordActionHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
