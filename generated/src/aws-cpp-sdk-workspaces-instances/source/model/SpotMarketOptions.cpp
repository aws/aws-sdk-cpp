/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/SpotMarketOptions.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

SpotMarketOptions::SpotMarketOptions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SpotMarketOptions& SpotMarketOptions::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BlockDurationMinutes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_blockDurationMinutes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_blockDurationMinutes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_blockDurationMinutesHasBeenSet = true;
              }

              else if (initialKeyStr == "InstanceInterruptionBehavior") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_instanceInterruptionBehavior = InstanceInterruptionBehaviorEnumMapper::GetInstanceInterruptionBehaviorEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_instanceInterruptionBehaviorHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxPrice") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_maxPrice = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_maxPrice = ss.str();
                  }
                }
                m_maxPriceHasBeenSet = true;
              }

              else if (initialKeyStr == "SpotInstanceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_spotInstanceType = SpotInstanceTypeEnumMapper::GetSpotInstanceTypeEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_spotInstanceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "ValidUntilUtc") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_validUntilUtc = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_validUntilUtc = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_validUntilUtcHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SpotMarketOptions", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BlockDurationMinutes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_blockDurationMinutes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_blockDurationMinutes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_blockDurationMinutesHasBeenSet = true;
            }

            else if (initialKeyStr == "InstanceInterruptionBehavior") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_instanceInterruptionBehavior = InstanceInterruptionBehaviorEnumMapper::GetInstanceInterruptionBehaviorEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_instanceInterruptionBehaviorHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxPrice") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_maxPrice = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_maxPrice = ss.str();
                }
              }
              m_maxPriceHasBeenSet = true;
            }

            else if (initialKeyStr == "SpotInstanceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_spotInstanceType = SpotInstanceTypeEnumMapper::GetSpotInstanceTypeEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_spotInstanceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "ValidUntilUtc") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_validUntilUtc = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_validUntilUtc = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_validUntilUtcHasBeenSet = true;
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

void SpotMarketOptions::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_blockDurationMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_instanceInterruptionBehaviorHasBeenSet) {
    mapSize++;
  }
  if (m_maxPriceHasBeenSet) {
    mapSize++;
  }
  if (m_spotInstanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_validUntilUtcHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_blockDurationMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BlockDurationMinutes"));
    (m_blockDurationMinutes >= 0) ? encoder.WriteUInt(m_blockDurationMinutes) : encoder.WriteNegInt(m_blockDurationMinutes);
  }

  if (m_instanceInterruptionBehaviorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceInterruptionBehavior"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        InstanceInterruptionBehaviorEnumMapper::GetNameForInstanceInterruptionBehaviorEnum(m_instanceInterruptionBehavior).c_str()));
  }

  if (m_maxPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxPrice"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_maxPrice.c_str()));
  }

  if (m_spotInstanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SpotInstanceType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SpotInstanceTypeEnumMapper::GetNameForSpotInstanceTypeEnum(m_spotInstanceType).c_str()));
  }

  if (m_validUntilUtcHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ValidUntilUtc"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_validUntilUtc.Seconds());
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws