/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/AttackProperty.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Shield {
namespace Model {

AttackProperty::AttackProperty(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AttackProperty& AttackProperty::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AttackLayer") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_attackLayer = AttackLayerMapper::GetAttackLayerForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attackLayerHasBeenSet = true;
              }

              else if (initialKeyStr == "AttackPropertyIdentifier") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_attackPropertyIdentifier = AttackPropertyIdentifierMapper::GetAttackPropertyIdentifierForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attackPropertyIdentifierHasBeenSet = true;
              }

              else if (initialKeyStr == "TopContributors") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_topContributors.push_back(Contributor(decoder));
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
                      m_topContributors.push_back(Contributor(decoder));
                    }
                  }
                }
                m_topContributorsHasBeenSet = true;
              }

              else if (initialKeyStr == "Unit") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_unit = UnitMapper::GetUnitForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_unitHasBeenSet = true;
              }

              else if (initialKeyStr == "Total") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_total = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_total = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_totalHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AttackProperty", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AttackLayer") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_attackLayer =
                    AttackLayerMapper::GetAttackLayerForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attackLayerHasBeenSet = true;
            }

            else if (initialKeyStr == "AttackPropertyIdentifier") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_attackPropertyIdentifier = AttackPropertyIdentifierMapper::GetAttackPropertyIdentifierForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attackPropertyIdentifierHasBeenSet = true;
            }

            else if (initialKeyStr == "TopContributors") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_topContributors.push_back(Contributor(decoder));
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
                    m_topContributors.push_back(Contributor(decoder));
                  }
                }
              }
              m_topContributorsHasBeenSet = true;
            }

            else if (initialKeyStr == "Unit") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_unit = UnitMapper::GetUnitForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_unitHasBeenSet = true;
            }

            else if (initialKeyStr == "Total") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_total = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_total = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_totalHasBeenSet = true;
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

void AttackProperty::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_attackLayerHasBeenSet) {
    mapSize++;
  }
  if (m_attackPropertyIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_topContributorsHasBeenSet) {
    mapSize++;
  }
  if (m_unitHasBeenSet) {
    mapSize++;
  }
  if (m_totalHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_attackLayerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttackLayer"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AttackLayerMapper::GetNameForAttackLayer(m_attackLayer).c_str()));
  }

  if (m_attackPropertyIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttackPropertyIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        AttackPropertyIdentifierMapper::GetNameForAttackPropertyIdentifier(m_attackPropertyIdentifier).c_str()));
  }

  if (m_topContributorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TopContributors"));
    encoder.WriteArrayStart(m_topContributors.size());
    for (const auto& item_0 : m_topContributors) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_unitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Unit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UnitMapper::GetNameForUnit(m_unit).c_str()));
  }

  if (m_totalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Total"));
    (m_total >= 0) ? encoder.WriteUInt(m_total) : encoder.WriteNegInt(m_total);
  }
}

}  // namespace Model
}  // namespace Shield
}  // namespace Aws