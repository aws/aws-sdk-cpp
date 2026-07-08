/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/RuleStringToEvaluate.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

RuleStringToEvaluate::RuleStringToEvaluate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleStringToEvaluate& RuleStringToEvaluate::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Attribute") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_attribute = RuleStringEmailAttributeMapper::GetRuleStringEmailAttributeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attributeHasBeenSet = true;
              }

              else if (initialKeyStr == "MimeHeaderAttribute") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_mimeHeaderAttribute = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_mimeHeaderAttribute = ss.str();
                  }
                }
                m_mimeHeaderAttributeHasBeenSet = true;
              }

              else if (initialKeyStr == "Analysis") {
                m_analysis = Analysis(decoder);
                m_analysisHasBeenSet = true;
              }

              else if (initialKeyStr == "ClientCertificateAttribute") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_clientCertificateAttribute = RuleClientCertificateAttributeMapper::GetRuleClientCertificateAttributeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_clientCertificateAttributeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleStringToEvaluate", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Attribute") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_attribute = RuleStringEmailAttributeMapper::GetRuleStringEmailAttributeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attributeHasBeenSet = true;
            }

            else if (initialKeyStr == "MimeHeaderAttribute") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_mimeHeaderAttribute = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_mimeHeaderAttribute = ss.str();
                }
              }
              m_mimeHeaderAttributeHasBeenSet = true;
            }

            else if (initialKeyStr == "Analysis") {
              m_analysis = Analysis(decoder);
              m_analysisHasBeenSet = true;
            }

            else if (initialKeyStr == "ClientCertificateAttribute") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_clientCertificateAttribute = RuleClientCertificateAttributeMapper::GetRuleClientCertificateAttributeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_clientCertificateAttributeHasBeenSet = true;
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

void RuleStringToEvaluate::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_attributeHasBeenSet) {
    mapSize++;
  }
  if (m_mimeHeaderAttributeHasBeenSet) {
    mapSize++;
  }
  if (m_analysisHasBeenSet) {
    mapSize++;
  }
  if (m_clientCertificateAttributeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_attributeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Attribute"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(RuleStringEmailAttributeMapper::GetNameForRuleStringEmailAttribute(m_attribute).c_str()));
  }

  if (m_mimeHeaderAttributeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MimeHeaderAttribute"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_mimeHeaderAttribute.c_str()));
  }

  if (m_analysisHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Analysis"));
    m_analysis.CborEncode(encoder);
  }

  if (m_clientCertificateAttributeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientCertificateAttribute"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RuleClientCertificateAttributeMapper::GetNameForRuleClientCertificateAttribute(m_clientCertificateAttribute).c_str()));
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws