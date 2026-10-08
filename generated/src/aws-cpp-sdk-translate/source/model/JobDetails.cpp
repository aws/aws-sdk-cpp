/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/model/JobDetails.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Translate {
namespace Model {

JobDetails::JobDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

JobDetails& JobDetails::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TranslatedDocumentsCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_translatedDocumentsCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_translatedDocumentsCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_translatedDocumentsCountHasBeenSet = true;
              }

              else if (initialKeyStr == "DocumentsWithErrorsCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_documentsWithErrorsCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_documentsWithErrorsCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_documentsWithErrorsCountHasBeenSet = true;
              }

              else if (initialKeyStr == "InputDocumentsCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_inputDocumentsCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_inputDocumentsCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_inputDocumentsCountHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("JobDetails", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TranslatedDocumentsCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_translatedDocumentsCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_translatedDocumentsCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_translatedDocumentsCountHasBeenSet = true;
            }

            else if (initialKeyStr == "DocumentsWithErrorsCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_documentsWithErrorsCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_documentsWithErrorsCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_documentsWithErrorsCountHasBeenSet = true;
            }

            else if (initialKeyStr == "InputDocumentsCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_inputDocumentsCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_inputDocumentsCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_inputDocumentsCountHasBeenSet = true;
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

void JobDetails::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_translatedDocumentsCountHasBeenSet) {
    mapSize++;
  }
  if (m_documentsWithErrorsCountHasBeenSet) {
    mapSize++;
  }
  if (m_inputDocumentsCountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_translatedDocumentsCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranslatedDocumentsCount"));
    (m_translatedDocumentsCount >= 0) ? encoder.WriteUInt(m_translatedDocumentsCount) : encoder.WriteNegInt(m_translatedDocumentsCount);
  }

  if (m_documentsWithErrorsCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DocumentsWithErrorsCount"));
    (m_documentsWithErrorsCount >= 0) ? encoder.WriteUInt(m_documentsWithErrorsCount) : encoder.WriteNegInt(m_documentsWithErrorsCount);
  }

  if (m_inputDocumentsCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputDocumentsCount"));
    (m_inputDocumentsCount >= 0) ? encoder.WriteUInt(m_inputDocumentsCount) : encoder.WriteNegInt(m_inputDocumentsCount);
  }
}

}  // namespace Model
}  // namespace Translate
}  // namespace Aws