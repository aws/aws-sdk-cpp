/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/RuleBooleanToEvaluate.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

RuleBooleanToEvaluate::RuleBooleanToEvaluate(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleBooleanToEvaluate& RuleBooleanToEvaluate::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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
                  m_attribute = RuleBooleanEmailAttributeMapper::GetRuleBooleanEmailAttributeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attributeHasBeenSet = true;
              }

              else if (initialKeyStr == "Analysis") {
                m_analysis = Analysis(decoder);
                m_analysisHasBeenSet = true;
              }

              else if (initialKeyStr == "IsInAddressList") {
                m_isInAddressList = RuleIsInAddressList(decoder);
                m_isInAddressListHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleBooleanToEvaluate", "Invalid data received for %s", initialKeyStr.c_str());
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
                m_attribute = RuleBooleanEmailAttributeMapper::GetRuleBooleanEmailAttributeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attributeHasBeenSet = true;
            }

            else if (initialKeyStr == "Analysis") {
              m_analysis = Analysis(decoder);
              m_analysisHasBeenSet = true;
            }

            else if (initialKeyStr == "IsInAddressList") {
              m_isInAddressList = RuleIsInAddressList(decoder);
              m_isInAddressListHasBeenSet = true;
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

void RuleBooleanToEvaluate::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_attributeHasBeenSet) {
    mapSize++;
  }
  if (m_analysisHasBeenSet) {
    mapSize++;
  }
  if (m_isInAddressListHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_attributeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Attribute"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(RuleBooleanEmailAttributeMapper::GetNameForRuleBooleanEmailAttribute(m_attribute).c_str()));
  }

  if (m_analysisHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Analysis"));
    m_analysis.CborEncode(encoder);
  }

  if (m_isInAddressListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IsInAddressList"));
    m_isInAddressList.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws