/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/PrivateDnsNameOptionsRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

PrivateDnsNameOptionsRequest::PrivateDnsNameOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PrivateDnsNameOptionsRequest& PrivateDnsNameOptionsRequest::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "HostnameType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_hostnameType = HostnameTypeEnumMapper::GetHostnameTypeEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_hostnameTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "EnableResourceNameDnsARecord") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enableResourceNameDnsARecord = val.value();
                }
                m_enableResourceNameDnsARecordHasBeenSet = true;
              }

              else if (initialKeyStr == "EnableResourceNameDnsAAAARecord") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enableResourceNameDnsAAAARecord = val.value();
                }
                m_enableResourceNameDnsAAAARecordHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PrivateDnsNameOptionsRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "HostnameType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_hostnameType = HostnameTypeEnumMapper::GetHostnameTypeEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_hostnameTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "EnableResourceNameDnsARecord") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enableResourceNameDnsARecord = val.value();
              }
              m_enableResourceNameDnsARecordHasBeenSet = true;
            }

            else if (initialKeyStr == "EnableResourceNameDnsAAAARecord") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enableResourceNameDnsAAAARecord = val.value();
              }
              m_enableResourceNameDnsAAAARecordHasBeenSet = true;
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

void PrivateDnsNameOptionsRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_hostnameTypeHasBeenSet) {
    mapSize++;
  }
  if (m_enableResourceNameDnsARecordHasBeenSet) {
    mapSize++;
  }
  if (m_enableResourceNameDnsAAAARecordHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_hostnameTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HostnameType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HostnameTypeEnumMapper::GetNameForHostnameTypeEnum(m_hostnameType).c_str()));
  }

  if (m_enableResourceNameDnsARecordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableResourceNameDnsARecord"));
    encoder.WriteBool(m_enableResourceNameDnsARecord);
  }

  if (m_enableResourceNameDnsAAAARecordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableResourceNameDnsAAAARecord"));
    encoder.WriteBool(m_enableResourceNameDnsAAAARecord);
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws