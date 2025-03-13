/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DvbSubOcrLanguage.h>
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
   * Dvb Sub Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbSubSourceSettings">AWS
   * API Reference</a></p>
   */
  class DvbSubSourceSettings
  {
  public:
    AWS_MEDIALIVE_API DvbSubSourceSettings() = default;
    AWS_MEDIALIVE_API DvbSubSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DvbSubSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you will configure a WebVTT caption description that references this caption
     * selector, use this field to
provide the language to consider when translating
     * the image-based source to text.
     */
    inline DvbSubOcrLanguage GetOcrLanguage() const { return m_ocrLanguage; }
    inline bool OcrLanguageHasBeenSet() const { return m_ocrLanguageHasBeenSet; }
    inline void SetOcrLanguage(DvbSubOcrLanguage value) { m_ocrLanguageHasBeenSet = true; m_ocrLanguage = value; }
    inline DvbSubSourceSettings& WithOcrLanguage(DvbSubOcrLanguage value) { SetOcrLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * When using DVB-Sub with Burn-In or SMPTE-TT, use this PID for the source
     * content. Unused for DVB-Sub passthrough. All DVB-Sub content is passed through,
     * regardless of selectors.
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline DvbSubSourceSettings& WithPid(int value) { SetPid(value); return *this;}
    ///@}
  private:

    DvbSubOcrLanguage m_ocrLanguage{DvbSubOcrLanguage::NOT_SET};
    bool m_ocrLanguageHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
