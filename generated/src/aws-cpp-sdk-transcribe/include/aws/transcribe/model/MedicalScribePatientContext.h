/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/Pronouns.h>

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
 * <p>Contains patient-specific information used to customize the clinical note
 * generation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribePatientContext">AWS
 * API Reference</a></p>
 */
class MedicalScribePatientContext {
 public:
  AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext() = default;
  AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API MedicalScribePatientContext& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The patient's preferred pronouns that the user wants to provide as a context
   * for clinical note generation.</p>
   */
  inline Pronouns GetPronouns() const { return m_pronouns; }
  inline bool PronounsHasBeenSet() const { return m_pronounsHasBeenSet; }
  inline void SetPronouns(Pronouns value) {
    m_pronounsHasBeenSet = true;
    m_pronouns = value;
  }
  inline MedicalScribePatientContext& WithPronouns(Pronouns value) {
    SetPronouns(value);
    return *this;
  }
  ///@}
 private:
  Pronouns m_pronouns{Pronouns::NOT_SET};
  bool m_pronounsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
