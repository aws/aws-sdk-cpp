/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/Route53ResolvedIPValidation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

Route53ResolvedIPValidation::Route53ResolvedIPValidation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Route53ResolvedIPValidation& Route53ResolvedIPValidation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Action") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_action = Route53ResolvedIPValidationActionMapper::GetRoute53ResolvedIPValidationActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_actionHasBeenSet = true;
              }

              else if (initialKeyStr == "DNSFirewallRuleGroupId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_dNSFirewallRuleGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_dNSFirewallRuleGroupId = ss.str();
                  }
                }
                m_dNSFirewallRuleGroupIdHasBeenSet = true;
              }

              else if (initialKeyStr == "DNSExpiryExceptionPolicy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_dNSExpiryExceptionPolicy = DNSExpiryExceptionPolicyMapper::GetDNSExpiryExceptionPolicyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_dNSExpiryExceptionPolicyHasBeenSet = true;
              }

              else if (initialKeyStr == "BypassDestinationValidationIPRanges") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_bypassDestinationValidationIPRanges.push_back(Address(decoder));
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
                      m_bypassDestinationValidationIPRanges.push_back(Address(decoder));
                    }
                  }
                }
                m_bypassDestinationValidationIPRangesHasBeenSet = true;
              }

              else if (initialKeyStr == "SourceIPRanges") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_sourceIPRanges.push_back(Address(decoder));
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
                      m_sourceIPRanges.push_back(Address(decoder));
                    }
                  }
                }
                m_sourceIPRangesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Route53ResolvedIPValidation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Action") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_action = Route53ResolvedIPValidationActionMapper::GetRoute53ResolvedIPValidationActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_actionHasBeenSet = true;
            }

            else if (initialKeyStr == "DNSFirewallRuleGroupId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_dNSFirewallRuleGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_dNSFirewallRuleGroupId = ss.str();
                }
              }
              m_dNSFirewallRuleGroupIdHasBeenSet = true;
            }

            else if (initialKeyStr == "DNSExpiryExceptionPolicy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_dNSExpiryExceptionPolicy = DNSExpiryExceptionPolicyMapper::GetDNSExpiryExceptionPolicyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_dNSExpiryExceptionPolicyHasBeenSet = true;
            }

            else if (initialKeyStr == "BypassDestinationValidationIPRanges") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_bypassDestinationValidationIPRanges.push_back(Address(decoder));
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
                    m_bypassDestinationValidationIPRanges.push_back(Address(decoder));
                  }
                }
              }
              m_bypassDestinationValidationIPRangesHasBeenSet = true;
            }

            else if (initialKeyStr == "SourceIPRanges") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_sourceIPRanges.push_back(Address(decoder));
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
                    m_sourceIPRanges.push_back(Address(decoder));
                  }
                }
              }
              m_sourceIPRangesHasBeenSet = true;
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

void Route53ResolvedIPValidation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_actionHasBeenSet) {
    mapSize++;
  }
  if (m_dNSFirewallRuleGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_dNSExpiryExceptionPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_bypassDestinationValidationIPRangesHasBeenSet) {
    mapSize++;
  }
  if (m_sourceIPRangesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_actionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Action"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        Route53ResolvedIPValidationActionMapper::GetNameForRoute53ResolvedIPValidationAction(m_action).c_str()));
  }

  if (m_dNSFirewallRuleGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DNSFirewallRuleGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dNSFirewallRuleGroupId.c_str()));
  }

  if (m_dNSExpiryExceptionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DNSExpiryExceptionPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DNSExpiryExceptionPolicyMapper::GetNameForDNSExpiryExceptionPolicy(m_dNSExpiryExceptionPolicy).c_str()));
  }

  if (m_bypassDestinationValidationIPRangesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BypassDestinationValidationIPRanges"));
    encoder.WriteArrayStart(m_bypassDestinationValidationIPRanges.size());
    for (const auto& item_0 : m_bypassDestinationValidationIPRanges) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceIPRangesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceIPRanges"));
    encoder.WriteArrayStart(m_sourceIPRanges.size());
    for (const auto& item_0 : m_sourceIPRanges) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws