/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/WorkspaceConnectionStatus.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

WorkspaceConnectionStatus::WorkspaceConnectionStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WorkspaceConnectionStatus& WorkspaceConnectionStatus::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "WorkspaceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workspaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workspaceId = ss.str();
                  }
                }
                m_workspaceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectionState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_connectionState = ConnectionStateMapper::GetConnectionStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_connectionStateHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectionStateCheckTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_connectionStateCheckTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_connectionStateCheckTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_connectionStateCheckTimestampHasBeenSet = true;
              }

              else if (initialKeyStr == "LastKnownUserConnectionTimestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastKnownUserConnectionTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastKnownUserConnectionTimestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastKnownUserConnectionTimestampHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WorkspaceConnectionStatus", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "WorkspaceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workspaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workspaceId = ss.str();
                }
              }
              m_workspaceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectionState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_connectionState = ConnectionStateMapper::GetConnectionStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_connectionStateHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectionStateCheckTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_connectionStateCheckTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_connectionStateCheckTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_connectionStateCheckTimestampHasBeenSet = true;
            }

            else if (initialKeyStr == "LastKnownUserConnectionTimestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastKnownUserConnectionTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastKnownUserConnectionTimestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastKnownUserConnectionTimestampHasBeenSet = true;
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

void WorkspaceConnectionStatus::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_workspaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectionStateHasBeenSet) {
    mapSize++;
  }
  if (m_connectionStateCheckTimestampHasBeenSet) {
    mapSize++;
  }
  if (m_lastKnownUserConnectionTimestampHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workspaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceId.c_str()));
  }

  if (m_connectionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ConnectionStateMapper::GetNameForConnectionState(m_connectionState).c_str()));
  }

  if (m_connectionStateCheckTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionStateCheckTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_connectionStateCheckTimestamp.Seconds());
  }

  if (m_lastKnownUserConnectionTimestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastKnownUserConnectionTimestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastKnownUserConnectionTimestamp.Seconds());
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws