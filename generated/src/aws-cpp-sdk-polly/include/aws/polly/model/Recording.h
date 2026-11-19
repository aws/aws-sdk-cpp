/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/AudioFormat.h>
#include <aws/polly/model/RecordingData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>A recording of the speaker whose voice you want to create. The recording
 * specifies its audio format and its audio source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Recording">AWS API
 * Reference</a></p>
 */
class Recording {
 public:
  AWS_POLLY_API Recording() = default;
  AWS_POLLY_API Recording(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Recording& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The audio format of the recording: <code>wav</code>, <code>flac</code>,
   * <code>ogg_vorbis</code>, or <code>mp3</code>. The format must match the audio
   * data.</p>
   */
  inline AudioFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(AudioFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline Recording& WithFormat(AudioFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio source of the recording. Specify either an Amazon S3 object or the
   * audio data.</p>
   */
  inline const RecordingData& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = RecordingData>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = RecordingData>
  Recording& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  AudioFormat m_format{AudioFormat::NOT_SET};

  RecordingData m_data;
  bool m_formatHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
