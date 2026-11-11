/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/CapacityStatus.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

CapacityStatus::CapacityStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CapacityStatus& CapacityStatus::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AvailableUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_availableUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_availableUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_availableUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "DesiredUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_desiredUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_desiredUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_desiredUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "ActualUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_actualUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_actualUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_actualUserSessionsHasBeenSet = true;
              }

              else if (initialKeyStr == "ActiveUserSessions") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_activeUserSessions = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_activeUserSessions = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_activeUserSessionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CapacityStatus", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AvailableUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_availableUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_availableUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_availableUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "DesiredUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_desiredUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_desiredUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_desiredUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "ActualUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_actualUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_actualUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_actualUserSessionsHasBeenSet = true;
            }

            else if (initialKeyStr == "ActiveUserSessions") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_activeUserSessions = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_activeUserSessions = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_activeUserSessionsHasBeenSet = true;
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

void CapacityStatus::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_availableUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_desiredUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_actualUserSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_activeUserSessionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_availableUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailableUserSessions"));
    (m_availableUserSessions >= 0) ? encoder.WriteUInt(m_availableUserSessions) : encoder.WriteNegInt(m_availableUserSessions);
  }

  if (m_desiredUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DesiredUserSessions"));
    (m_desiredUserSessions >= 0) ? encoder.WriteUInt(m_desiredUserSessions) : encoder.WriteNegInt(m_desiredUserSessions);
  }

  if (m_actualUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActualUserSessions"));
    (m_actualUserSessions >= 0) ? encoder.WriteUInt(m_actualUserSessions) : encoder.WriteNegInt(m_actualUserSessions);
  }

  if (m_activeUserSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActiveUserSessions"));
    (m_activeUserSessions >= 0) ? encoder.WriteUInt(m_activeUserSessions) : encoder.WriteNegInt(m_activeUserSessions);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws