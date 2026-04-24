/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/TargetOnDeviceService.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

TargetOnDeviceService::TargetOnDeviceService(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TargetOnDeviceService& TargetOnDeviceService::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ServiceName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_serviceName = DeviceServiceNameMapper::GetDeviceServiceNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_serviceNameHasBeenSet = true;
              }

              else if (initialKeyStr == "TransferOption") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transferOption = TransferOptionMapper::GetTransferOptionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transferOptionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TargetOnDeviceService", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ServiceName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_serviceName = DeviceServiceNameMapper::GetDeviceServiceNameForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_serviceNameHasBeenSet = true;
            }

            else if (initialKeyStr == "TransferOption") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transferOption = TransferOptionMapper::GetTransferOptionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transferOptionHasBeenSet = true;
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

void TargetOnDeviceService::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_serviceNameHasBeenSet) {
    mapSize++;
  }
  if (m_transferOptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serviceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServiceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeviceServiceNameMapper::GetNameForDeviceServiceName(m_serviceName).c_str()));
  }

  if (m_transferOptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransferOption"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TransferOptionMapper::GetNameForTransferOption(m_transferOption).c_str()));
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws