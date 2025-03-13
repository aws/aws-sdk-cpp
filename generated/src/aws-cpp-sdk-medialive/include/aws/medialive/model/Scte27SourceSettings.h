/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte27OcrLanguage.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Scte27 Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte27SourceSettings">AWS
   * API Reference</a></p>
   */
  class Scte27SourceSettings
  {
  public:
    AWS_MEDIALIVE_API Scte27SourceSettings() = default;
    AWS_MEDIALIVE_API Scte27SourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte27SourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you will configure a WebVTT caption description that references this caption
     * selector, use this field to
provide the language to consider when translating
     * the image-based source to text.
     */
    inline Scte27OcrLanguage GetOcrLanguage() const { return m_ocrLanguage; }
    inline bool OcrLanguageHasBeenSet() const { return m_ocrLanguageHasBeenSet; }
    inline void SetOcrLanguage(Scte27OcrLanguage value) { m_ocrLanguageHasBeenSet = true; m_ocrLanguage = value; }
    inline Scte27SourceSettings& WithOcrLanguage(Scte27OcrLanguage value) { SetOcrLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * The pid field is used in conjunction with the caption selector languageCode
     * field as follows:
  - Specify PID and Language: Extracts captions from that PID;
     * the language is "informational".
  - Specify PID and omit Language: Extracts the
     * specified PID.
  - Omit PID and specify Language: Extracts the specified
     * language, whichever PID that happens to be.
  - Omit PID and omit Language:
     * Valid only if source is DVB-Sub that is being passed through; all languages will
     * be passed through.
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline Scte27SourceSettings& WithPid(int value) { SetPid(value); return *this;}
    ///@}
  private:

    Scte27OcrLanguage m_ocrLanguage{Scte27OcrLanguage::NOT_SET};
    bool m_ocrLanguageHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
