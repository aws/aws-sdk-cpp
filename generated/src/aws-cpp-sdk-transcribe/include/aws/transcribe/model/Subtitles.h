/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/SubtitleFormat.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Generate subtitles for your media file with your transcription request.</p>
   * <p>You can choose a start index of 0 or 1, and you can specify either WebVTT or
   * SubRip (or both) as your output format.</p> <p>Note that your subtitle files are
   * placed in the same location as your transcription output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Subtitles">AWS
   * API Reference</a></p>
   */
  class Subtitles
  {
  public:
    AWS_TRANSCRIBESERVICE_API Subtitles() = default;
    AWS_TRANSCRIBESERVICE_API Subtitles(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Subtitles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline const Aws::Vector<SubtitleFormat>& GetFormats() const { return m_formats; }
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }
    template<typename FormatsT = Aws::Vector<SubtitleFormat>>
    void SetFormats(FormatsT&& value) { m_formatsHasBeenSet = true; m_formats = std::forward<FormatsT>(value); }
    template<typename FormatsT = Aws::Vector<SubtitleFormat>>
    Subtitles& WithFormats(FormatsT&& value) { SetFormats(std::forward<FormatsT>(value)); return *this;}
    inline Subtitles& AddFormats(SubtitleFormat value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the starting value that is assigned to the first subtitle
     * segment.</p> <p>The default start index for Amazon Transcribe is <code>0</code>,
     * which differs from the more widely used standard of <code>1</code>. If you're
     * uncertain which value to use, we recommend choosing <code>1</code>, as this may
     * improve compatibility with other services.</p>
     */
    inline int GetOutputStartIndex() const { return m_outputStartIndex; }
    inline bool OutputStartIndexHasBeenSet() const { return m_outputStartIndexHasBeenSet; }
    inline void SetOutputStartIndex(int value) { m_outputStartIndexHasBeenSet = true; m_outputStartIndex = value; }
    inline Subtitles& WithOutputStartIndex(int value) { SetOutputStartIndex(value); return *this;}
    ///@}
  private:

    Aws::Vector<SubtitleFormat> m_formats;
    bool m_formatsHasBeenSet = false;

    int m_outputStartIndex{0};
    bool m_outputStartIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
