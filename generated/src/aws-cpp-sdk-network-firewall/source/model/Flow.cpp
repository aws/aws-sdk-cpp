/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/Flow.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

Flow::Flow(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Flow& Flow::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "SourceAddress") {
                m_sourceAddress = Address(decoder);
                m_sourceAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "DestinationAddress") {
                m_destinationAddress = Address(decoder);
                m_destinationAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "SourcePort") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourcePort = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourcePort = ss.str();
                  }
                }
                m_sourcePortHasBeenSet = true;
              }

              else if (initialKeyStr == "DestinationPort") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_destinationPort = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_destinationPort = ss.str();
                  }
                }
                m_destinationPortHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocol") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_protocol = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_protocol = ss.str();
                  }
                }
                m_protocolHasBeenSet = true;
              }

              else if (initialKeyStr == "Age") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_age = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_age = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_ageHasBeenSet = true;
              }

              else if (initialKeyStr == "PacketCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_packetCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_packetCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_packetCountHasBeenSet = true;
              }

              else if (initialKeyStr == "ByteCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_byteCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_byteCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_byteCountHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Flow", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "SourceAddress") {
              m_sourceAddress = Address(decoder);
              m_sourceAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "DestinationAddress") {
              m_destinationAddress = Address(decoder);
              m_destinationAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "SourcePort") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourcePort = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourcePort = ss.str();
                }
              }
              m_sourcePortHasBeenSet = true;
            }

            else if (initialKeyStr == "DestinationPort") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_destinationPort = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_destinationPort = ss.str();
                }
              }
              m_destinationPortHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocol") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_protocol = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_protocol = ss.str();
                }
              }
              m_protocolHasBeenSet = true;
            }

            else if (initialKeyStr == "Age") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_age = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_age = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_ageHasBeenSet = true;
            }

            else if (initialKeyStr == "PacketCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_packetCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_packetCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_packetCountHasBeenSet = true;
            }

            else if (initialKeyStr == "ByteCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_byteCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_byteCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_byteCountHasBeenSet = true;
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

void Flow::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceAddressHasBeenSet) {
    mapSize++;
  }
  if (m_destinationAddressHasBeenSet) {
    mapSize++;
  }
  if (m_sourcePortHasBeenSet) {
    mapSize++;
  }
  if (m_destinationPortHasBeenSet) {
    mapSize++;
  }
  if (m_protocolHasBeenSet) {
    mapSize++;
  }
  if (m_ageHasBeenSet) {
    mapSize++;
  }
  if (m_packetCountHasBeenSet) {
    mapSize++;
  }
  if (m_byteCountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceAddress"));
    m_sourceAddress.CborEncode(encoder);
  }

  if (m_destinationAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationAddress"));
    m_destinationAddress.CborEncode(encoder);
  }

  if (m_sourcePortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourcePort"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourcePort.c_str()));
  }

  if (m_destinationPortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationPort"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destinationPort.c_str()));
  }

  if (m_protocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_protocol.c_str()));
  }

  if (m_ageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Age"));
    (m_age >= 0) ? encoder.WriteUInt(m_age) : encoder.WriteNegInt(m_age);
  }

  if (m_packetCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PacketCount"));
    (m_packetCount >= 0) ? encoder.WriteUInt(m_packetCount) : encoder.WriteNegInt(m_packetCount);
  }

  if (m_byteCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ByteCount"));
    (m_byteCount >= 0) ? encoder.WriteUInt(m_byteCount) : encoder.WriteNegInt(m_byteCount);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws