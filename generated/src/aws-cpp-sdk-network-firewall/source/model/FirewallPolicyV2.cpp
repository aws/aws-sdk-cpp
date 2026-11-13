/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/FirewallPolicyV2.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallPolicyV2::FirewallPolicyV2(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

FirewallPolicyV2& FirewallPolicyV2::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "FirewallRuleGroupEntries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_firewallRuleGroupEntries.push_back(FirewallRuleGroupEntry(decoder));
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
                      m_firewallRuleGroupEntries.push_back(FirewallRuleGroupEntry(decoder));
                    }
                  }
                }
                m_firewallRuleGroupEntriesHasBeenSet = true;
              }

              else if (initialKeyStr == "IpsRuleGroupEntries") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ipsRuleGroupEntries.push_back(IpsRuleGroupEntry(decoder));
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
                      m_ipsRuleGroupEntries.push_back(IpsRuleGroupEntry(decoder));
                    }
                  }
                }
                m_ipsRuleGroupEntriesHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_policyMode =
                      PolicyModeMapper::GetPolicyModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_policyModeHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallDefaultAction") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_firewallDefaultAction = PolicyDefaultActionMapper::GetPolicyDefaultActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_firewallDefaultActionHasBeenSet = true;
              }

              else if (initialKeyStr == "StatefulEngineOptions") {
                m_statefulEngineOptions = StatefulEngineOptionsV2(decoder);
                m_statefulEngineOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "TLSInspectionConfigurationArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_tLSInspectionConfigurationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_tLSInspectionConfigurationArn = ss.str();
                  }
                }
                m_tLSInspectionConfigurationArnHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyVariables") {
                m_policyVariables = PolicyVariables(decoder);
                m_policyVariablesHasBeenSet = true;
              }

              else if (initialKeyStr == "Route53ResolvedIPValidation") {
                m_route53ResolvedIPValidation = Route53ResolvedIPValidation(decoder);
                m_route53ResolvedIPValidationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FirewallPolicyV2", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "FirewallRuleGroupEntries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_firewallRuleGroupEntries.push_back(FirewallRuleGroupEntry(decoder));
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
                    m_firewallRuleGroupEntries.push_back(FirewallRuleGroupEntry(decoder));
                  }
                }
              }
              m_firewallRuleGroupEntriesHasBeenSet = true;
            }

            else if (initialKeyStr == "IpsRuleGroupEntries") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ipsRuleGroupEntries.push_back(IpsRuleGroupEntry(decoder));
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
                    m_ipsRuleGroupEntries.push_back(IpsRuleGroupEntry(decoder));
                  }
                }
              }
              m_ipsRuleGroupEntriesHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_policyMode =
                    PolicyModeMapper::GetPolicyModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_policyModeHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallDefaultAction") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_firewallDefaultAction = PolicyDefaultActionMapper::GetPolicyDefaultActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_firewallDefaultActionHasBeenSet = true;
            }

            else if (initialKeyStr == "StatefulEngineOptions") {
              m_statefulEngineOptions = StatefulEngineOptionsV2(decoder);
              m_statefulEngineOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "TLSInspectionConfigurationArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_tLSInspectionConfigurationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_tLSInspectionConfigurationArn = ss.str();
                }
              }
              m_tLSInspectionConfigurationArnHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyVariables") {
              m_policyVariables = PolicyVariables(decoder);
              m_policyVariablesHasBeenSet = true;
            }

            else if (initialKeyStr == "Route53ResolvedIPValidation") {
              m_route53ResolvedIPValidation = Route53ResolvedIPValidation(decoder);
              m_route53ResolvedIPValidationHasBeenSet = true;
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

void FirewallPolicyV2::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallRuleGroupEntriesHasBeenSet) {
    mapSize++;
  }
  if (m_ipsRuleGroupEntriesHasBeenSet) {
    mapSize++;
  }
  if (m_policyModeHasBeenSet) {
    mapSize++;
  }
  if (m_firewallDefaultActionHasBeenSet) {
    mapSize++;
  }
  if (m_statefulEngineOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_tLSInspectionConfigurationArnHasBeenSet) {
    mapSize++;
  }
  if (m_policyVariablesHasBeenSet) {
    mapSize++;
  }
  if (m_route53ResolvedIPValidationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallRuleGroupEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallRuleGroupEntries"));
    encoder.WriteArrayStart(m_firewallRuleGroupEntries.size());
    for (const auto& item_0 : m_firewallRuleGroupEntries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ipsRuleGroupEntriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpsRuleGroupEntries"));
    encoder.WriteArrayStart(m_ipsRuleGroupEntries.size());
    for (const auto& item_0 : m_ipsRuleGroupEntries) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_policyModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PolicyModeMapper::GetNameForPolicyMode(m_policyMode).c_str()));
  }

  if (m_firewallDefaultActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallDefaultAction"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PolicyDefaultActionMapper::GetNameForPolicyDefaultAction(m_firewallDefaultAction).c_str()));
  }

  if (m_statefulEngineOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatefulEngineOptions"));
    m_statefulEngineOptions.CborEncode(encoder);
  }

  if (m_tLSInspectionConfigurationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tLSInspectionConfigurationArn.c_str()));
  }

  if (m_policyVariablesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyVariables"));
    m_policyVariables.CborEncode(encoder);
  }

  if (m_route53ResolvedIPValidationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Route53ResolvedIPValidation"));
    m_route53ResolvedIPValidation.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws