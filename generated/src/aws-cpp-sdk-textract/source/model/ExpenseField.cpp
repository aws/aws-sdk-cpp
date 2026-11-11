/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/ExpenseField.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

ExpenseField::ExpenseField(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ExpenseField& ExpenseField::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Type") {
                m_type = ExpenseType(decoder);
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "LabelDetection") {
                m_labelDetection = ExpenseDetection(decoder);
                m_labelDetectionHasBeenSet = true;
              }

              else if (initialKeyStr == "ValueDetection") {
                m_valueDetection = ExpenseDetection(decoder);
                m_valueDetectionHasBeenSet = true;
              }

              else if (initialKeyStr == "PageNumber") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pageNumber = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pageNumber = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pageNumberHasBeenSet = true;
              }

              else if (initialKeyStr == "Currency") {
                m_currency = ExpenseCurrency(decoder);
                m_currencyHasBeenSet = true;
              }

              else if (initialKeyStr == "GroupProperties") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_groupProperties.push_back(ExpenseGroupProperty(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_groupProperties.push_back(ExpenseGroupProperty(decoder));
                    }
                  }
                }
                m_groupPropertiesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ExpenseField", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Type") {
              m_type = ExpenseType(decoder);
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "LabelDetection") {
              m_labelDetection = ExpenseDetection(decoder);
              m_labelDetectionHasBeenSet = true;
            }

            else if (initialKeyStr == "ValueDetection") {
              m_valueDetection = ExpenseDetection(decoder);
              m_valueDetectionHasBeenSet = true;
            }

            else if (initialKeyStr == "PageNumber") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pageNumber = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pageNumber = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pageNumberHasBeenSet = true;
            }

            else if (initialKeyStr == "Currency") {
              m_currency = ExpenseCurrency(decoder);
              m_currencyHasBeenSet = true;
            }

            else if (initialKeyStr == "GroupProperties") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_groupProperties.push_back(ExpenseGroupProperty(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_groupProperties.push_back(ExpenseGroupProperty(decoder));
                  }
                }
              }
              m_groupPropertiesHasBeenSet = true;
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

void ExpenseField::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_labelDetectionHasBeenSet) {
    mapSize++;
  }
  if (m_valueDetectionHasBeenSet) {
    mapSize++;
  }
  if (m_pageNumberHasBeenSet) {
    mapSize++;
  }
  if (m_currencyHasBeenSet) {
    mapSize++;
  }
  if (m_groupPropertiesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    m_type.CborEncode(encoder);
  }

  if (m_labelDetectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LabelDetection"));
    m_labelDetection.CborEncode(encoder);
  }

  if (m_valueDetectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ValueDetection"));
    m_valueDetection.CborEncode(encoder);
  }

  if (m_pageNumberHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PageNumber"));
    (m_pageNumber >= 0) ? encoder.WriteUInt(m_pageNumber) : encoder.WriteNegInt(m_pageNumber);
  }

  if (m_currencyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Currency"));
    m_currency.CborEncode(encoder);
  }

  if (m_groupPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupProperties"));
    encoder.WriteArrayStart(m_groupProperties.size());
    for (const auto& item_0 : m_groupProperties) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws