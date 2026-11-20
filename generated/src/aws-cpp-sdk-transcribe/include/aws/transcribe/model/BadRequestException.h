/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/BadRequestExceptionReason.h>

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
 * <p>Your request didn't pass one or more validation tests. This can occur when a
 * parameter has an invalid value, when you combine parameters in a way that isn't
 * supported, when the entity you're trying to delete doesn't exist, or if it's in
 * a non-terminal state (such as <code>IN PROGRESS</code>). See the exception
 * message field for more information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/BadRequestException">AWS
 * API Reference</a></p>
 */
class BadRequestException {
 public:
  AWS_TRANSCRIBESERVICE_API BadRequestException() = default;
  AWS_TRANSCRIBESERVICE_API BadRequestException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API BadRequestException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BadRequestException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that identifies why the audio in your request was rejected. Currently,
   * <code>TranscribeAudio</code> returns this field, and only for problems with your
   * audio. It isn't returned for other validation errors.</p> <p>Possible
   * values:</p> <ul> <li> <p> <code>audioTooLong</code>: The audio is longer than
   * the maximum duration of 1 hour.</p> </li> <li> <p> <code>audioTooShort</code>:
   * The audio is shorter than 0.5 seconds.</p> </li> <li> <p>
   * <code>audioFileTooLarge</code>: The audio is larger than the maximum size.</p>
   * </li> <li> <p> <code>unsupportedAudioFormat</code>: The media format isn't
   * supported.</p> </li> <li> <p> <code>unsupportedChannelCount</code>: You enabled
   * <code>ChannelIdentification</code> and the audio has more than two channels.</p>
   * </li> <li> <p> <code>invalidAudio</code>: Amazon Transcribe couldn't decode the
   * audio.</p> </li> <li> <p> <code>mediaDownloadFailed</code>: Amazon Transcribe
   * couldn't download the audio at your <code>MediaFileUri</code>.</p> </li> </ul>
   */
  inline BadRequestExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(BadRequestExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline BadRequestException& WithReason(BadRequestExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  BadRequestExceptionReason m_reason{BadRequestExceptionReason::NOT_SET};
  bool m_messageHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
