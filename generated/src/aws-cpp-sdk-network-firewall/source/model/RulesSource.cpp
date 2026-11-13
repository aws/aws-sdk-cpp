/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/RulesSource.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

RulesSource::RulesSource(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RulesSource& RulesSource::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RulesString") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_rulesString = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_rulesString = ss.str();
                  }
                }
                m_rulesStringHasBeenSet = true;
              }

              else if (initialKeyStr == "RulesSourceList") {
                m_rulesSourceList = RulesSourceList(decoder);
                m_rulesSourceListHasBeenSet = true;
              }

              else if (initialKeyStr == "StatefulRules") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_statefulRules.push_back(StatefulRule(decoder));
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
                      m_statefulRules.push_back(StatefulRule(decoder));
                    }
                  }
                }
                m_statefulRulesHasBeenSet = true;
              }

              else if (initialKeyStr == "StatelessRulesAndCustomActions") {
                m_statelessRulesAndCustomActions = StatelessRulesAndCustomActions(decoder);
                m_statelessRulesAndCustomActionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RulesSource", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RulesString") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_rulesString = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_rulesString = ss.str();
                }
              }
              m_rulesStringHasBeenSet = true;
            }

            else if (initialKeyStr == "RulesSourceList") {
              m_rulesSourceList = RulesSourceList(decoder);
              m_rulesSourceListHasBeenSet = true;
            }

            else if (initialKeyStr == "StatefulRules") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_statefulRules.push_back(StatefulRule(decoder));
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
                    m_statefulRules.push_back(StatefulRule(decoder));
                  }
                }
              }
              m_statefulRulesHasBeenSet = true;
            }

            else if (initialKeyStr == "StatelessRulesAndCustomActions") {
              m_statelessRulesAndCustomActions = StatelessRulesAndCustomActions(decoder);
              m_statelessRulesAndCustomActionsHasBeenSet = true;
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

void RulesSource::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_rulesStringHasBeenSet) {
    mapSize++;
  }
  if (m_rulesSourceListHasBeenSet) {
    mapSize++;
  }
  if (m_statefulRulesHasBeenSet) {
    mapSize++;
  }
  if (m_statelessRulesAndCustomActionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_rulesStringHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RulesString"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_rulesString.c_str()));
  }

  if (m_rulesSourceListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RulesSourceList"));
    m_rulesSourceList.CborEncode(encoder);
  }

  if (m_statefulRulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatefulRules"));
    encoder.WriteArrayStart(m_statefulRules.size());
    for (const auto& item_0 : m_statefulRules) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_statelessRulesAndCustomActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatelessRulesAndCustomActions"));
    m_statelessRulesAndCustomActions.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws