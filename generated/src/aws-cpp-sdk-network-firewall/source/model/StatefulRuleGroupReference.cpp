/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/StatefulRuleGroupReference.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

StatefulRuleGroupReference::StatefulRuleGroupReference(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

StatefulRuleGroupReference& StatefulRuleGroupReference::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ResourceArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceArn = ss.str();
                  }
                }
                m_resourceArnHasBeenSet = true;
              }

              else if (initialKeyStr == "Priority") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_priority = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_priority = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_priorityHasBeenSet = true;
              }

              else if (initialKeyStr == "Override") {
                m_override = StatefulRuleGroupOverride(decoder);
                m_overrideHasBeenSet = true;
              }

              else if (initialKeyStr == "DeepThreatInspection") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_deepThreatInspection = val.value();
                }
                m_deepThreatInspectionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("StatefulRuleGroupReference", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ResourceArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceArn = ss.str();
                }
              }
              m_resourceArnHasBeenSet = true;
            }

            else if (initialKeyStr == "Priority") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_priority = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_priority = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_priorityHasBeenSet = true;
            }

            else if (initialKeyStr == "Override") {
              m_override = StatefulRuleGroupOverride(decoder);
              m_overrideHasBeenSet = true;
            }

            else if (initialKeyStr == "DeepThreatInspection") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_deepThreatInspection = val.value();
              }
              m_deepThreatInspectionHasBeenSet = true;
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

void StatefulRuleGroupReference::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnHasBeenSet) {
    mapSize++;
  }
  if (m_priorityHasBeenSet) {
    mapSize++;
  }
  if (m_overrideHasBeenSet) {
    mapSize++;
  }
  if (m_deepThreatInspectionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceArn.c_str()));
  }

  if (m_priorityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Priority"));
    (m_priority >= 0) ? encoder.WriteUInt(m_priority) : encoder.WriteNegInt(m_priority);
  }

  if (m_overrideHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Override"));
    m_override.CborEncode(encoder);
  }

  if (m_deepThreatInspectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeepThreatInspection"));
    encoder.WriteBool(m_deepThreatInspection);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws