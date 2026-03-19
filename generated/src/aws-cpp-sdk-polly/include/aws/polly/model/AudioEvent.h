/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/polly/Polly_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Polly {
namespace Model {
/**
 * <p>Contains a chunk of synthesized audio data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/AudioEvent">AWS
 * API Reference</a></p>
 */
class AudioEvent {
 public:
  AWS_POLLY_API AudioEvent() = default;
  AWS_POLLY_API AudioEvent(Aws::Vector<unsigned char>&& value) { m_audioChunk = std::move(value); }

  ///@{
  /**
   * <p>A chunk of synthesized audio data encoded in the format specified by the
   * <code>OutputFormat</code> parameter.</p>
   */
  inline const Aws::Vector<unsigned char>& GetAudioChunk() const { return m_audioChunk; }
  inline Aws::Vector<unsigned char>&& GetAudioChunkWithOwnership() { return std::move(m_audioChunk); }
  inline void SetAudioChunk(const Aws::Vector<unsigned char>& value) {
    m_audioChunkHasBeenSet = true;
    m_audioChunk = value;
  }
  inline void SetAudioChunk(Aws::Vector<unsigned char>&& value) {
    m_audioChunkHasBeenSet = true;
    m_audioChunk = std::move(value);
  }
  inline AudioEvent& WithAudioChunk(const Aws::Vector<unsigned char>& value) {
    SetAudioChunk(value);
    return *this;
  }
  inline AudioEvent& WithAudioChunk(Aws::Vector<unsigned char>&& value) {
    SetAudioChunk(std::move(value));
    return *this;
  }
  ///@}

 private:
  Aws::Vector<unsigned char> m_audioChunk;
  bool m_audioChunkHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
