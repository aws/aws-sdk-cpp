/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/RuleNumberExpression.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

RuleNumberExpression::RuleNumberExpression(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleNumberExpression& RuleNumberExpression::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Evaluate") {
                m_evaluate = RuleNumberToEvaluate(decoder);
                m_evaluateHasBeenSet = true;
              }

              else if (initialKeyStr == "Operator") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_operator = RuleNumberOperatorMapper::GetRuleNumberOperatorForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_operatorHasBeenSet = true;
              }

              else if (initialKeyStr == "Value") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_value = val.value();
                }
                m_valueHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleNumberExpression", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Evaluate") {
              m_evaluate = RuleNumberToEvaluate(decoder);
              m_evaluateHasBeenSet = true;
            }

            else if (initialKeyStr == "Operator") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_operator = RuleNumberOperatorMapper::GetRuleNumberOperatorForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_operatorHasBeenSet = true;
            }

            else if (initialKeyStr == "Value") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_value = val.value();
              }
              m_valueHasBeenSet = true;
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

void RuleNumberExpression::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_evaluateHasBeenSet) {
    mapSize++;
  }
  if (m_operatorHasBeenSet) {
    mapSize++;
  }
  if (m_valueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_evaluateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Evaluate"));
    m_evaluate.CborEncode(encoder);
  }

  if (m_operatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Operator"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleNumberOperatorMapper::GetNameForRuleNumberOperator(m_operator).c_str()));
  }

  if (m_valueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Value"));
    encoder.WriteFloat(m_value);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws