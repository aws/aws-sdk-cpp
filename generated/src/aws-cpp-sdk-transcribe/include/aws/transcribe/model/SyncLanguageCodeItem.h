/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/SyncLanguageCode.h>

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
 * <p>A language identified in your audio, and how long it's spoken.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SyncLanguageCodeItem">AWS
 * API Reference</a></p>
 */
class SyncLanguageCodeItem {
 public:
  AWS_TRANSCRIBESERVICE_API SyncLanguageCodeItem() = default;
  AWS_TRANSCRIBESERVICE_API SyncLanguageCodeItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API SyncLanguageCodeItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The identified language, as a locale (for example, <code>en-US</code>).</p>
   */
  inline SyncLanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(SyncLanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline SyncLanguageCodeItem& WithLanguageCode(SyncLanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total time, in seconds, the identified language is spoken in your
   * audio.</p>
   */
  inline double GetDurationInSeconds() const { return m_durationInSeconds; }
  inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
  inline void SetDurationInSeconds(double value) {
    m_durationInSecondsHasBeenSet = true;
    m_durationInSeconds = value;
  }
  inline SyncLanguageCodeItem& WithDurationInSeconds(double value) {
    SetDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  SyncLanguageCode m_languageCode{SyncLanguageCode::NOT_SET};

  double m_durationInSeconds{0.0};
  bool m_languageCodeHasBeenSet = false;
  bool m_durationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
