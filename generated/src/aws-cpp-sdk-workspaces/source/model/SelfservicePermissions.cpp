/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/SelfservicePermissions.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

SelfservicePermissions::SelfservicePermissions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SelfservicePermissions& SelfservicePermissions::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RestartWorkspace") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_restartWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_restartWorkspaceHasBeenSet = true;
              }

              else if (initialKeyStr == "IncreaseVolumeSize") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_increaseVolumeSize = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_increaseVolumeSizeHasBeenSet = true;
              }

              else if (initialKeyStr == "ChangeComputeType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_changeComputeType = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_changeComputeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "SwitchRunningMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_switchRunningMode = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_switchRunningModeHasBeenSet = true;
              }

              else if (initialKeyStr == "RebuildWorkspace") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_rebuildWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_rebuildWorkspaceHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SelfservicePermissions", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RestartWorkspace") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_restartWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_restartWorkspaceHasBeenSet = true;
            }

            else if (initialKeyStr == "IncreaseVolumeSize") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_increaseVolumeSize = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_increaseVolumeSizeHasBeenSet = true;
            }

            else if (initialKeyStr == "ChangeComputeType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_changeComputeType = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_changeComputeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "SwitchRunningMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_switchRunningMode = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_switchRunningModeHasBeenSet = true;
            }

            else if (initialKeyStr == "RebuildWorkspace") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_rebuildWorkspace = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_rebuildWorkspaceHasBeenSet = true;
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

void SelfservicePermissions::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_restartWorkspaceHasBeenSet) {
    mapSize++;
  }
  if (m_increaseVolumeSizeHasBeenSet) {
    mapSize++;
  }
  if (m_changeComputeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_switchRunningModeHasBeenSet) {
    mapSize++;
  }
  if (m_rebuildWorkspaceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_restartWorkspaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RestartWorkspace"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_restartWorkspace).c_str()));
  }

  if (m_increaseVolumeSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncreaseVolumeSize"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_increaseVolumeSize).c_str()));
  }

  if (m_changeComputeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChangeComputeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_changeComputeType).c_str()));
  }

  if (m_switchRunningModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SwitchRunningMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_switchRunningMode).c_str()));
  }

  if (m_rebuildWorkspaceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RebuildWorkspace"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_rebuildWorkspace).c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws