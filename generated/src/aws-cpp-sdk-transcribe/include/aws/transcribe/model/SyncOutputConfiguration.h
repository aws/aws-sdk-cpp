/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

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
 * <p>The Amazon S3 location where your transcript is written.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SyncOutputConfiguration">AWS
 * API Reference</a></p>
 */
class SyncOutputConfiguration {
 public:
  AWS_TRANSCRIBESERVICE_API SyncOutputConfiguration() = default;
  AWS_TRANSCRIBESERVICE_API SyncOutputConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API SyncOutputConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon S3 location where you want your transcript written. For
   * example:</p> <ul> <li> <p>
   * <code>s3://amzn-s3-demo-bucket/my-transcript.json</code> </p> </li> <li> <p>
   * <code>s3://amzn-s3-demo-bucket/transcripts/</code> </p> </li> </ul> <p>If the
   * location ends with an object key, Amazon Transcribe writes the transcript to
   * that key. If it is a bucket or ends with a forward slash (<code>/</code>), it's
   * treated as a prefix, and Amazon Transcribe writes the transcript under it to a
   * file named with the request ID of your call and a <code>.json</code>
   * extension.</p> <p>If you use <code>ContentRedaction</code>, Amazon Transcribe
   * writes the redacted transcript to the same location and adds
   * <code>redacted-</code> before the file name (for example,
   * <code>redacted-my-transcript.json</code>). With
   * <code>redacted_and_unredacted</code>, Amazon Transcribe writes both files.</p>
   * <p>If an object already exists at that key, Amazon Transcribe overwrites it.</p>
   * <p>In a response, this is the location where Amazon Transcribe wrote your
   * transcript. If you requested <code>redacted_and_unredacted</code> output, this
   * is the location of the unredacted transcript.</p>
   */
  inline const Aws::String& GetOutputMediaFileUri() const { return m_outputMediaFileUri; }
  inline bool OutputMediaFileUriHasBeenSet() const { return m_outputMediaFileUriHasBeenSet; }
  template <typename OutputMediaFileUriT = Aws::String>
  void SetOutputMediaFileUri(OutputMediaFileUriT&& value) {
    m_outputMediaFileUriHasBeenSet = true;
    m_outputMediaFileUri = std::forward<OutputMediaFileUriT>(value);
  }
  template <typename OutputMediaFileUriT = Aws::String>
  SyncOutputConfiguration& WithOutputMediaFileUri(OutputMediaFileUriT&& value) {
    SetOutputMediaFileUri(std::forward<OutputMediaFileUriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputMediaFileUri;
  bool m_outputMediaFileUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
