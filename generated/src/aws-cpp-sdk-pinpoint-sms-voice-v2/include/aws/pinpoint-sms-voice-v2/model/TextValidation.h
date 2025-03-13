/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Validation rules for a text field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TextValidation">AWS
   * API Reference</a></p>
   */
  class TextValidation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API TextValidation() = default;
    AWS_PINPOINTSMSVOICEV2_API TextValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API TextValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of characters for the text field.</p>
     */
    inline int GetMinLength() const { return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    inline void SetMinLength(int value) { m_minLengthHasBeenSet = true; m_minLength = value; }
    inline TextValidation& WithMinLength(int value) { SetMinLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of characters for the text field.</p>
     */
    inline int GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline TextValidation& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression used to validate the text field.</p>
     */
    inline const Aws::String& GetPattern() const { return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    template<typename PatternT = Aws::String>
    void SetPattern(PatternT&& value) { m_patternHasBeenSet = true; m_pattern = std::forward<PatternT>(value); }
    template<typename PatternT = Aws::String>
    TextValidation& WithPattern(PatternT&& value) { SetPattern(std::forward<PatternT>(value)); return *this;}
    ///@}
  private:

    int m_minLength{0};
    bool m_minLengthHasBeenSet = false;

    int m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
