/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/FirewallRule.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallRule::FirewallRule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

FirewallRule& FirewallRule::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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
                  m_action = FirewallRuleActionMapper::GetFirewallRuleActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_actionHasBeenSet = true;
              }

              else if (initialKeyStr == "ActionScope") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_actionScope = ActionScopeMapper::GetActionScopeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_actionScopeHasBeenSet = true;
              }

              else if (initialKeyStr == "Hook") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_hook = HookKeyMapper::GetHookKeyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_hookHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocol") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_protocol = FirewallRuleProtocolMapper::GetFirewallRuleProtocolForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_protocolHasBeenSet = true;
              }

              else if (initialKeyStr == "SourceIPs") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourceIPs = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourceIPs = ss.str();
                  }
                }
                m_sourceIPsHasBeenSet = true;
              }

              else if (initialKeyStr == "DestIPs") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_destIPs = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_destIPs = ss.str();
                  }
                }
                m_destIPsHasBeenSet = true;
              }

              else if (initialKeyStr == "SourcePorts") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourcePorts = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourcePorts = ss.str();
                  }
                }
                m_sourcePortsHasBeenSet = true;
              }

              else if (initialKeyStr == "DestPorts") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_destPorts = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_destPorts = ss.str();
                  }
                }
                m_destPortsHasBeenSet = true;
              }

              else if (initialKeyStr == "RuleOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ruleOptions.push_back(RuleOption(decoder));
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
                      m_ruleOptions.push_back(RuleOption(decoder));
                    }
                  }
                }
                m_ruleOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "AcceptPriorHooks") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_acceptPriorHooks = val.value();
                }
                m_acceptPriorHooksHasBeenSet = true;
              }

              else if (initialKeyStr == "AlertEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_alertEnabled = val.value();
                }
                m_alertEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "BypassIPSEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_bypassIPSEnabled = val.value();
                }
                m_bypassIPSEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "RuleMetadata") {
                m_ruleMetadata = RuleMetadata(decoder);
                m_ruleMetadataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FirewallRule", "Invalid data received for %s", initialKeyStr.c_str());
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
                m_action = FirewallRuleActionMapper::GetFirewallRuleActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_actionHasBeenSet = true;
            }

            else if (initialKeyStr == "ActionScope") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_actionScope =
                    ActionScopeMapper::GetActionScopeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_actionScopeHasBeenSet = true;
            }

            else if (initialKeyStr == "Hook") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_hook = HookKeyMapper::GetHookKeyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_hookHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocol") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_protocol = FirewallRuleProtocolMapper::GetFirewallRuleProtocolForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_protocolHasBeenSet = true;
            }

            else if (initialKeyStr == "SourceIPs") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourceIPs = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourceIPs = ss.str();
                }
              }
              m_sourceIPsHasBeenSet = true;
            }

            else if (initialKeyStr == "DestIPs") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_destIPs = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_destIPs = ss.str();
                }
              }
              m_destIPsHasBeenSet = true;
            }

            else if (initialKeyStr == "SourcePorts") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourcePorts = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourcePorts = ss.str();
                }
              }
              m_sourcePortsHasBeenSet = true;
            }

            else if (initialKeyStr == "DestPorts") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_destPorts = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_destPorts = ss.str();
                }
              }
              m_destPortsHasBeenSet = true;
            }

            else if (initialKeyStr == "RuleOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ruleOptions.push_back(RuleOption(decoder));
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
                    m_ruleOptions.push_back(RuleOption(decoder));
                  }
                }
              }
              m_ruleOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "AcceptPriorHooks") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_acceptPriorHooks = val.value();
              }
              m_acceptPriorHooksHasBeenSet = true;
            }

            else if (initialKeyStr == "AlertEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_alertEnabled = val.value();
              }
              m_alertEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "BypassIPSEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_bypassIPSEnabled = val.value();
              }
              m_bypassIPSEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "RuleMetadata") {
              m_ruleMetadata = RuleMetadata(decoder);
              m_ruleMetadataHasBeenSet = true;
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

void FirewallRule::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_actionHasBeenSet) {
    mapSize++;
  }
  if (m_actionScopeHasBeenSet) {
    mapSize++;
  }
  if (m_hookHasBeenSet) {
    mapSize++;
  }
  if (m_protocolHasBeenSet) {
    mapSize++;
  }
  if (m_sourceIPsHasBeenSet) {
    mapSize++;
  }
  if (m_destIPsHasBeenSet) {
    mapSize++;
  }
  if (m_sourcePortsHasBeenSet) {
    mapSize++;
  }
  if (m_destPortsHasBeenSet) {
    mapSize++;
  }
  if (m_ruleOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_acceptPriorHooksHasBeenSet) {
    mapSize++;
  }
  if (m_alertEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_bypassIPSEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_ruleMetadataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_actionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Action"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FirewallRuleActionMapper::GetNameForFirewallRuleAction(m_action).c_str()));
  }

  if (m_actionScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActionScope"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ActionScopeMapper::GetNameForActionScope(m_actionScope).c_str()));
  }

  if (m_hookHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Hook"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HookKeyMapper::GetNameForHookKey(m_hook).c_str()));
  }

  if (m_protocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FirewallRuleProtocolMapper::GetNameForFirewallRuleProtocol(m_protocol).c_str()));
  }

  if (m_sourceIPsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceIPs"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceIPs.c_str()));
  }

  if (m_destIPsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestIPs"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destIPs.c_str()));
  }

  if (m_sourcePortsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourcePorts"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourcePorts.c_str()));
  }

  if (m_destPortsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestPorts"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destPorts.c_str()));
  }

  if (m_ruleOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleOptions"));
    encoder.WriteArrayStart(m_ruleOptions.size());
    for (const auto& item_0 : m_ruleOptions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_acceptPriorHooksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptPriorHooks"));
    encoder.WriteBool(m_acceptPriorHooks);
  }

  if (m_alertEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AlertEnabled"));
    encoder.WriteBool(m_alertEnabled);
  }

  if (m_bypassIPSEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BypassIPSEnabled"));
    encoder.WriteBool(m_bypassIPSEnabled);
  }

  if (m_ruleMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleMetadata"));
    m_ruleMetadata.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws