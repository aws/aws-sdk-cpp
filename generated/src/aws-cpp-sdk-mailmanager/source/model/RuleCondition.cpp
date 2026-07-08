/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/RuleCondition.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

RuleCondition::RuleCondition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleCondition& RuleCondition::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BooleanExpression") {
                m_booleanExpression = RuleBooleanExpression(decoder);
                m_booleanExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "StringExpression") {
                m_stringExpression = RuleStringExpression(decoder);
                m_stringExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberExpression") {
                m_numberExpression = RuleNumberExpression(decoder);
                m_numberExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "IpExpression") {
                m_ipExpression = RuleIpExpression(decoder);
                m_ipExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "VerdictExpression") {
                m_verdictExpression = RuleVerdictExpression(decoder);
                m_verdictExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "DmarcExpression") {
                m_dmarcExpression = RuleDmarcExpression(decoder);
                m_dmarcExpressionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleCondition", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BooleanExpression") {
              m_booleanExpression = RuleBooleanExpression(decoder);
              m_booleanExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "StringExpression") {
              m_stringExpression = RuleStringExpression(decoder);
              m_stringExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberExpression") {
              m_numberExpression = RuleNumberExpression(decoder);
              m_numberExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "IpExpression") {
              m_ipExpression = RuleIpExpression(decoder);
              m_ipExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "VerdictExpression") {
              m_verdictExpression = RuleVerdictExpression(decoder);
              m_verdictExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "DmarcExpression") {
              m_dmarcExpression = RuleDmarcExpression(decoder);
              m_dmarcExpressionHasBeenSet = true;
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

void RuleCondition::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_booleanExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_stringExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_numberExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_ipExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_verdictExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_dmarcExpressionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_booleanExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BooleanExpression"));
    m_booleanExpression.CborEncode(encoder);
  }

  if (m_stringExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StringExpression"));
    m_stringExpression.CborEncode(encoder);
  }

  if (m_numberExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberExpression"));
    m_numberExpression.CborEncode(encoder);
  }

  if (m_ipExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpExpression"));
    m_ipExpression.CborEncode(encoder);
  }

  if (m_verdictExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VerdictExpression"));
    m_verdictExpression.CborEncode(encoder);
  }

  if (m_dmarcExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DmarcExpression"));
    m_dmarcExpression.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws