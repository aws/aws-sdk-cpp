/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/WorkspaceAccessProperties.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

WorkspaceAccessProperties::WorkspaceAccessProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WorkspaceAccessProperties& WorkspaceAccessProperties::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DeviceTypeWindows") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeWindows = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeWindowsHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeOsx") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeOsx = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeOsxHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeWeb") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeWeb = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeWebHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeIos") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeIos = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeIosHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeAndroid") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeAndroid = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeAndroidHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeChromeOs") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeChromeOs = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeChromeOsHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeZeroClient") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeZeroClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeZeroClientHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeLinux") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeLinux = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeLinuxHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceTypeWorkSpacesThinClient") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deviceTypeWorkSpacesThinClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deviceTypeWorkSpacesThinClientHasBeenSet = true;
              }

              else if (initialKeyStr == "AccessEndpointConfig") {
                m_accessEndpointConfig = AccessEndpointConfig(decoder);
                m_accessEndpointConfigHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WorkspaceAccessProperties", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DeviceTypeWindows") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeWindows = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeWindowsHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeOsx") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeOsx = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeOsxHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeWeb") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeWeb = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeWebHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeIos") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeIos = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeIosHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeAndroid") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeAndroid = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeAndroidHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeChromeOs") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeChromeOs = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeChromeOsHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeZeroClient") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeZeroClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeZeroClientHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeLinux") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeLinux = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeLinuxHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceTypeWorkSpacesThinClient") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deviceTypeWorkSpacesThinClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deviceTypeWorkSpacesThinClientHasBeenSet = true;
            }

            else if (initialKeyStr == "AccessEndpointConfig") {
              m_accessEndpointConfig = AccessEndpointConfig(decoder);
              m_accessEndpointConfigHasBeenSet = true;
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

void WorkspaceAccessProperties::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_deviceTypeWindowsHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeOsxHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeWebHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeIosHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeAndroidHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeChromeOsHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeZeroClientHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeLinuxHasBeenSet) {
    mapSize++;
  }
  if (m_deviceTypeWorkSpacesThinClientHasBeenSet) {
    mapSize++;
  }
  if (m_accessEndpointConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deviceTypeWindowsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeWindows"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWindows).c_str()));
  }

  if (m_deviceTypeOsxHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeOsx"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeOsx).c_str()));
  }

  if (m_deviceTypeWebHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeWeb"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWeb).c_str()));
  }

  if (m_deviceTypeIosHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeIos"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeIos).c_str()));
  }

  if (m_deviceTypeAndroidHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeAndroid"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeAndroid).c_str()));
  }

  if (m_deviceTypeChromeOsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeChromeOs"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeChromeOs).c_str()));
  }

  if (m_deviceTypeZeroClientHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeZeroClient"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeZeroClient).c_str()));
  }

  if (m_deviceTypeLinuxHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeLinux"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeLinux).c_str()));
  }

  if (m_deviceTypeWorkSpacesThinClientHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceTypeWorkSpacesThinClient"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWorkSpacesThinClient).c_str()));
  }

  if (m_accessEndpointConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessEndpointConfig"));
    m_accessEndpointConfig.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws