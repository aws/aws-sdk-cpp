/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/WorkspaceProperties.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

WorkspaceProperties::WorkspaceProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WorkspaceProperties& WorkspaceProperties::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RunningMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_runningMode = RunningModeMapper::GetRunningModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_runningModeHasBeenSet = true;
              }

              else if (initialKeyStr == "RunningModeAutoStopTimeoutInMinutes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_runningModeAutoStopTimeoutInMinutes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_runningModeAutoStopTimeoutInMinutes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true;
              }

              else if (initialKeyStr == "RootVolumeSizeGib") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_rootVolumeSizeGib = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_rootVolumeSizeGib = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_rootVolumeSizeGibHasBeenSet = true;
              }

              else if (initialKeyStr == "UserVolumeSizeGib") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_userVolumeSizeGib = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_userVolumeSizeGib = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_userVolumeSizeGibHasBeenSet = true;
              }

              else if (initialKeyStr == "ComputeTypeName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_computeTypeName =
                      ComputeMapper::GetComputeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_computeTypeNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocols") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_protocols.push_back(ProtocolMapper::GetProtocolForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                        }
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_protocols.push_back(ProtocolMapper::GetProtocolForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_protocolsHasBeenSet = true;
              }

              else if (initialKeyStr == "OperatingSystemName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_operatingSystemName = OperatingSystemNameMapper::GetOperatingSystemNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_operatingSystemNameHasBeenSet = true;
              }

              else if (initialKeyStr == "GlobalAccelerator") {
                m_globalAccelerator = GlobalAcceleratorForWorkSpace(decoder);
                m_globalAcceleratorHasBeenSet = true;
              }

              else if (initialKeyStr == "NestedVirtualizationEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_nestedVirtualizationEnabled = val.value();
                }
                m_nestedVirtualizationEnabledHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WorkspaceProperties", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RunningMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_runningMode =
                    RunningModeMapper::GetRunningModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_runningModeHasBeenSet = true;
            }

            else if (initialKeyStr == "RunningModeAutoStopTimeoutInMinutes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_runningModeAutoStopTimeoutInMinutes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_runningModeAutoStopTimeoutInMinutes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true;
            }

            else if (initialKeyStr == "RootVolumeSizeGib") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_rootVolumeSizeGib = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_rootVolumeSizeGib = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_rootVolumeSizeGibHasBeenSet = true;
            }

            else if (initialKeyStr == "UserVolumeSizeGib") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_userVolumeSizeGib = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_userVolumeSizeGib = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_userVolumeSizeGibHasBeenSet = true;
            }

            else if (initialKeyStr == "ComputeTypeName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_computeTypeName =
                    ComputeMapper::GetComputeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_computeTypeNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocols") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_protocols.push_back(ProtocolMapper::GetProtocolForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_protocols.push_back(
                          ProtocolMapper::GetProtocolForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_protocolsHasBeenSet = true;
            }

            else if (initialKeyStr == "OperatingSystemName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_operatingSystemName = OperatingSystemNameMapper::GetOperatingSystemNameForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_operatingSystemNameHasBeenSet = true;
            }

            else if (initialKeyStr == "GlobalAccelerator") {
              m_globalAccelerator = GlobalAcceleratorForWorkSpace(decoder);
              m_globalAcceleratorHasBeenSet = true;
            }

            else if (initialKeyStr == "NestedVirtualizationEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_nestedVirtualizationEnabled = val.value();
              }
              m_nestedVirtualizationEnabledHasBeenSet = true;
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

void WorkspaceProperties::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_runningModeHasBeenSet) {
    mapSize++;
  }
  if (m_runningModeAutoStopTimeoutInMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_rootVolumeSizeGibHasBeenSet) {
    mapSize++;
  }
  if (m_userVolumeSizeGibHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeNameHasBeenSet) {
    mapSize++;
  }
  if (m_protocolsHasBeenSet) {
    mapSize++;
  }
  if (m_operatingSystemNameHasBeenSet) {
    mapSize++;
  }
  if (m_globalAcceleratorHasBeenSet) {
    mapSize++;
  }
  if (m_nestedVirtualizationEnabledHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_runningModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RunningMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RunningModeMapper::GetNameForRunningMode(m_runningMode).c_str()));
  }

  if (m_runningModeAutoStopTimeoutInMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RunningModeAutoStopTimeoutInMinutes"));
    (m_runningModeAutoStopTimeoutInMinutes >= 0) ? encoder.WriteUInt(m_runningModeAutoStopTimeoutInMinutes)
                                                 : encoder.WriteNegInt(m_runningModeAutoStopTimeoutInMinutes);
  }

  if (m_rootVolumeSizeGibHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RootVolumeSizeGib"));
    (m_rootVolumeSizeGib >= 0) ? encoder.WriteUInt(m_rootVolumeSizeGib) : encoder.WriteNegInt(m_rootVolumeSizeGib);
  }

  if (m_userVolumeSizeGibHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserVolumeSizeGib"));
    (m_userVolumeSizeGib >= 0) ? encoder.WriteUInt(m_userVolumeSizeGib) : encoder.WriteNegInt(m_userVolumeSizeGib);
  }

  if (m_computeTypeNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeTypeName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeMapper::GetNameForCompute(m_computeTypeName).c_str()));
  }

  if (m_protocolsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocols"));
    encoder.WriteArrayStart(m_protocols.size());
    for (const auto& item_0 : m_protocols) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProtocolMapper::GetNameForProtocol(item_0).c_str()));
    }
  }

  if (m_operatingSystemNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OperatingSystemName"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(OperatingSystemNameMapper::GetNameForOperatingSystemName(m_operatingSystemName).c_str()));
  }

  if (m_globalAcceleratorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GlobalAccelerator"));
    m_globalAccelerator.CborEncode(encoder);
  }

  if (m_nestedVirtualizationEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NestedVirtualizationEnabled"));
    encoder.WriteBool(m_nestedVirtualizationEnabled);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws