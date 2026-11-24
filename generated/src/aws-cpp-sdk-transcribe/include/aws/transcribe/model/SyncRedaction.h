/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/PiiEntityType.h>

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
 * <p>A type of personally identifiable information (PII) redacted from an
 * item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SyncRedaction">AWS
 * API Reference</a></p>
 */
class SyncRedaction {
 public:
  AWS_TRANSCRIBESERVICE_API SyncRedaction() = default;
  AWS_TRANSCRIBESERVICE_API SyncRedaction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API SyncRedaction& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of PII that was redacted, for example <code>NAME</code> or
   * <code>SSN</code>.</p>
   */
  inline PiiEntityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PiiEntityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SyncRedaction& WithType(PiiEntityType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  PiiEntityType m_type{PiiEntityType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
