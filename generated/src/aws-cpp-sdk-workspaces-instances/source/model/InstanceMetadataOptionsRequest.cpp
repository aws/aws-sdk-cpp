/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/InstanceMetadataOptionsRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

InstanceMetadataOptionsRequest::InstanceMetadataOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

InstanceMetadataOptionsRequest& InstanceMetadataOptionsRequest::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "HttpEndpoint") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_httpEndpoint = HttpEndpointEnumMapper::GetHttpEndpointEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_httpEndpointHasBeenSet = true;
              }

              else if (initialKeyStr == "HttpProtocolIpv6") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_httpProtocolIpv6 = HttpProtocolIpv6EnumMapper::GetHttpProtocolIpv6EnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_httpProtocolIpv6HasBeenSet = true;
              }

              else if (initialKeyStr == "HttpPutResponseHopLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_httpPutResponseHopLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_httpPutResponseHopLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_httpPutResponseHopLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "HttpTokens") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_httpTokens = HttpTokensEnumMapper::GetHttpTokensEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_httpTokensHasBeenSet = true;
              }

              else if (initialKeyStr == "InstanceMetadataTags") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_instanceMetadataTags = InstanceMetadataTagsEnumMapper::GetInstanceMetadataTagsEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_instanceMetadataTagsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InstanceMetadataOptionsRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "HttpEndpoint") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_httpEndpoint = HttpEndpointEnumMapper::GetHttpEndpointEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_httpEndpointHasBeenSet = true;
            }

            else if (initialKeyStr == "HttpProtocolIpv6") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_httpProtocolIpv6 = HttpProtocolIpv6EnumMapper::GetHttpProtocolIpv6EnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_httpProtocolIpv6HasBeenSet = true;
            }

            else if (initialKeyStr == "HttpPutResponseHopLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_httpPutResponseHopLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_httpPutResponseHopLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_httpPutResponseHopLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "HttpTokens") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_httpTokens = HttpTokensEnumMapper::GetHttpTokensEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_httpTokensHasBeenSet = true;
            }

            else if (initialKeyStr == "InstanceMetadataTags") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_instanceMetadataTags = InstanceMetadataTagsEnumMapper::GetInstanceMetadataTagsEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_instanceMetadataTagsHasBeenSet = true;
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

void InstanceMetadataOptionsRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_httpEndpointHasBeenSet) {
    mapSize++;
  }
  if (m_httpProtocolIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_httpPutResponseHopLimitHasBeenSet) {
    mapSize++;
  }
  if (m_httpTokensHasBeenSet) {
    mapSize++;
  }
  if (m_instanceMetadataTagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_httpEndpointHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HttpEndpoint"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HttpEndpointEnumMapper::GetNameForHttpEndpointEnum(m_httpEndpoint).c_str()));
  }

  if (m_httpProtocolIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HttpProtocolIpv6"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(HttpProtocolIpv6EnumMapper::GetNameForHttpProtocolIpv6Enum(m_httpProtocolIpv6).c_str()));
  }

  if (m_httpPutResponseHopLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HttpPutResponseHopLimit"));
    (m_httpPutResponseHopLimit >= 0) ? encoder.WriteUInt(m_httpPutResponseHopLimit) : encoder.WriteNegInt(m_httpPutResponseHopLimit);
  }

  if (m_httpTokensHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HttpTokens"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HttpTokensEnumMapper::GetNameForHttpTokensEnum(m_httpTokens).c_str()));
  }

  if (m_instanceMetadataTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceMetadataTags"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        InstanceMetadataTagsEnumMapper::GetNameForInstanceMetadataTagsEnum(m_instanceMetadataTags).c_str()));
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws