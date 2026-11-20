/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/SyncItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * <p>A transcript of your audio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscribeAudioResults">AWS
 * API Reference</a></p>
 */
class TranscribeAudioResults {
 public:
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResults() = default;
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResults(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResults& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The full text of your transcript.</p> <p>If you enabled
   * <code>ChannelIdentification</code>, the text of channel <code>ch_0</code> is
   * followed by the text of channel <code>ch_1</code>.</p>
   */
  inline const Aws::String& GetTranscript() const { return m_transcript; }
  inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }
  template <typename TranscriptT = Aws::String>
  void SetTranscript(TranscriptT&& value) {
    m_transcriptHasBeenSet = true;
    m_transcript = std::forward<TranscriptT>(value);
  }
  template <typename TranscriptT = Aws::String>
  TranscribeAudioResults& WithTranscript(TranscriptT&& value) {
    SetTranscript(std::forward<TranscriptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The words and punctuation in your transcript, with timing and any labels you
   * requested.</p>
   */
  inline const Aws::Vector<SyncItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<SyncItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<SyncItem>>
  TranscribeAudioResults& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = SyncItem>
  TranscribeAudioResults& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transcript;

  Aws::Vector<SyncItem> m_items;
  bool m_transcriptHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
