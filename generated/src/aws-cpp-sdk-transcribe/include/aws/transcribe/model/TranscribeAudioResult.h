/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/SyncOutputConfiguration.h>
#include <aws/transcribe/model/TranscriptResponse.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {
class TranscribeAudioResult {
 public:
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResult() = default;
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_TRANSCRIBESERVICE_API TranscribeAudioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon S3 location where your transcript was written. Present only if you
   * included <code>OutputConfiguration</code> in your request. In that case,
   * <code>TranscriptResponse</code> isn't returned.</p>
   */
  inline const SyncOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  template <typename OutputConfigurationT = SyncOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = SyncOutputConfiguration>
  TranscribeAudioResult& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your transcript and information about your audio. Present only if you didn't
   * include <code>OutputConfiguration</code> in your request.</p>
   */
  inline const TranscriptResponse& GetTranscriptResponse() const { return m_transcriptResponse; }
  template <typename TranscriptResponseT = TranscriptResponse>
  void SetTranscriptResponse(TranscriptResponseT&& value) {
    m_transcriptResponseHasBeenSet = true;
    m_transcriptResponse = std::forward<TranscriptResponseT>(value);
  }
  template <typename TranscriptResponseT = TranscriptResponse>
  TranscribeAudioResult& WithTranscriptResponse(TranscriptResponseT&& value) {
    SetTranscriptResponse(std::forward<TranscriptResponseT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  TranscribeAudioResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SyncOutputConfiguration m_outputConfiguration;

  TranscriptResponse m_transcriptResponse;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_transcriptResponseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
