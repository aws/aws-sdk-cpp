/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscribeAudioMetadata.h>
#include <aws/transcribe/model/TranscribeAudioResults.h>

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
 * <p>Your transcript and information about your audio.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptResponse">AWS
 * API Reference</a></p>
 */
class TranscriptResponse {
 public:
  AWS_TRANSCRIBESERVICE_API TranscriptResponse() = default;
  AWS_TRANSCRIBESERVICE_API TranscriptResponse(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API TranscriptResponse& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Information about your audio, such as the detected language, format, and
   * sample rate.</p>
   */
  inline const TranscribeAudioMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = TranscribeAudioMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = TranscribeAudioMetadata>
  TranscriptResponse& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your unredacted transcript.</p> <p>If you set <code>RedactionOutput</code> to
   * <code>redacted</code>, Amazon Transcribe doesn't return this field. Use
   * <code>RedactedResults</code> instead.</p>
   */
  inline const TranscribeAudioResults& GetResults() const { return m_results; }
  inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
  template <typename ResultsT = TranscribeAudioResults>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = TranscribeAudioResults>
  TranscriptResponse& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your transcript with personally identifiable information (PII) redacted.
   * Present only if you included <code>ContentRedaction</code> in your request.</p>
   */
  inline const TranscribeAudioResults& GetRedactedResults() const { return m_redactedResults; }
  inline bool RedactedResultsHasBeenSet() const { return m_redactedResultsHasBeenSet; }
  template <typename RedactedResultsT = TranscribeAudioResults>
  void SetRedactedResults(RedactedResultsT&& value) {
    m_redactedResultsHasBeenSet = true;
    m_redactedResults = std::forward<RedactedResultsT>(value);
  }
  template <typename RedactedResultsT = TranscribeAudioResults>
  TranscriptResponse& WithRedactedResults(RedactedResultsT&& value) {
    SetRedactedResults(std::forward<RedactedResultsT>(value));
    return *this;
  }
  ///@}
 private:
  TranscribeAudioMetadata m_metadata;

  TranscribeAudioResults m_results;

  TranscribeAudioResults m_redactedResults;
  bool m_metadataHasBeenSet = false;
  bool m_resultsHasBeenSet = false;
  bool m_redactedResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
