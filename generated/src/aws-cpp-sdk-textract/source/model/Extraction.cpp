/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/Extraction.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

Extraction::Extraction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Extraction& Extraction::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "LendingDocument") {
                m_lendingDocument = LendingDocument(decoder);
                m_lendingDocumentHasBeenSet = true;
              }

              else if (initialKeyStr == "ExpenseDocument") {
                m_expenseDocument = ExpenseDocument(decoder);
                m_expenseDocumentHasBeenSet = true;
              }

              else if (initialKeyStr == "IdentityDocument") {
                m_identityDocument = IdentityDocument(decoder);
                m_identityDocumentHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Extraction", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "LendingDocument") {
              m_lendingDocument = LendingDocument(decoder);
              m_lendingDocumentHasBeenSet = true;
            }

            else if (initialKeyStr == "ExpenseDocument") {
              m_expenseDocument = ExpenseDocument(decoder);
              m_expenseDocumentHasBeenSet = true;
            }

            else if (initialKeyStr == "IdentityDocument") {
              m_identityDocument = IdentityDocument(decoder);
              m_identityDocumentHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void Extraction::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_lendingDocumentHasBeenSet) {
    mapSize++;
  }
  if (m_expenseDocumentHasBeenSet) {
    mapSize++;
  }
  if (m_identityDocumentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_lendingDocumentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LendingDocument"));
    m_lendingDocument.CborEncode(encoder);
  }

  if (m_expenseDocumentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpenseDocument"));
    m_expenseDocument.CborEncode(encoder);
  }

  if (m_identityDocumentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentityDocument"));
    m_identityDocument.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws