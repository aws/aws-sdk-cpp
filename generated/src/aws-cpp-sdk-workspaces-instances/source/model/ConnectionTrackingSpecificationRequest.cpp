/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/ConnectionTrackingSpecificationRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

ConnectionTrackingSpecificationRequest::ConnectionTrackingSpecificationRequest(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

ConnectionTrackingSpecificationRequest& ConnectionTrackingSpecificationRequest::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TcpEstablishedTimeout") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_tcpEstablishedTimeout = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_tcpEstablishedTimeout = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_tcpEstablishedTimeoutHasBeenSet = true;
              }

              else if (initialKeyStr == "UdpStreamTimeout") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_udpStreamTimeout = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_udpStreamTimeout = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_udpStreamTimeoutHasBeenSet = true;
              }

              else if (initialKeyStr == "UdpTimeout") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_udpTimeout = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_udpTimeout = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_udpTimeoutHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ConnectionTrackingSpecificationRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TcpEstablishedTimeout") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_tcpEstablishedTimeout = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_tcpEstablishedTimeout = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_tcpEstablishedTimeoutHasBeenSet = true;
            }

            else if (initialKeyStr == "UdpStreamTimeout") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_udpStreamTimeout = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_udpStreamTimeout = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_udpStreamTimeoutHasBeenSet = true;
            }

            else if (initialKeyStr == "UdpTimeout") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_udpTimeout = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_udpTimeout = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_udpTimeoutHasBeenSet = true;
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

void ConnectionTrackingSpecificationRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_tcpEstablishedTimeoutHasBeenSet) {
    mapSize++;
  }
  if (m_udpStreamTimeoutHasBeenSet) {
    mapSize++;
  }
  if (m_udpTimeoutHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_tcpEstablishedTimeoutHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TcpEstablishedTimeout"));
    (m_tcpEstablishedTimeout >= 0) ? encoder.WriteUInt(m_tcpEstablishedTimeout) : encoder.WriteNegInt(m_tcpEstablishedTimeout);
  }

  if (m_udpStreamTimeoutHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UdpStreamTimeout"));
    (m_udpStreamTimeout >= 0) ? encoder.WriteUInt(m_udpStreamTimeout) : encoder.WriteNegInt(m_udpStreamTimeout);
  }

  if (m_udpTimeoutHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UdpTimeout"));
    (m_udpTimeout >= 0) ? encoder.WriteUInt(m_udpTimeout) : encoder.WriteNegInt(m_udpTimeout);
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws