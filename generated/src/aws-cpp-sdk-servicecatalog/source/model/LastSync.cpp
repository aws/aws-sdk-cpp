/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/LastSync.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceCatalog {
namespace Model {

LastSync::LastSync(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

LastSync& LastSync::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "LastSyncTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastSyncTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastSyncTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastSyncTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "LastSyncStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_lastSyncStatus = LastSyncStatusMapper::GetLastSyncStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_lastSyncStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "LastSyncStatusMessage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_lastSyncStatusMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_lastSyncStatusMessage = ss.str();
                  }
                }
                m_lastSyncStatusMessageHasBeenSet = true;
              }

              else if (initialKeyStr == "LastSuccessfulSyncTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastSuccessfulSyncTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastSuccessfulSyncTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastSuccessfulSyncTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "LastSuccessfulSyncProvisioningArtifactId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_lastSuccessfulSyncProvisioningArtifactId =
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_lastSuccessfulSyncProvisioningArtifactId = ss.str();
                  }
                }
                m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("LastSync", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "LastSyncTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastSyncTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastSyncTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastSyncTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "LastSyncStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_lastSyncStatus = LastSyncStatusMapper::GetLastSyncStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_lastSyncStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "LastSyncStatusMessage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_lastSyncStatusMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_lastSyncStatusMessage = ss.str();
                }
              }
              m_lastSyncStatusMessageHasBeenSet = true;
            }

            else if (initialKeyStr == "LastSuccessfulSyncTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastSuccessfulSyncTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastSuccessfulSyncTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastSuccessfulSyncTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "LastSuccessfulSyncProvisioningArtifactId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_lastSuccessfulSyncProvisioningArtifactId =
                        Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_lastSuccessfulSyncProvisioningArtifactId = ss.str();
                }
              }
              m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true;
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

void LastSync::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_lastSyncTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lastSyncStatusHasBeenSet) {
    mapSize++;
  }
  if (m_lastSyncStatusMessageHasBeenSet) {
    mapSize++;
  }
  if (m_lastSuccessfulSyncTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_lastSyncTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastSyncTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastSyncTime.Seconds());
  }

  if (m_lastSyncStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastSyncStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LastSyncStatusMapper::GetNameForLastSyncStatus(m_lastSyncStatus).c_str()));
  }

  if (m_lastSyncStatusMessageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastSyncStatusMessage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lastSyncStatusMessage.c_str()));
  }

  if (m_lastSuccessfulSyncTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastSuccessfulSyncTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastSuccessfulSyncTime.Seconds());
  }

  if (m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastSuccessfulSyncProvisioningArtifactId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lastSuccessfulSyncProvisioningArtifactId.c_str()));
  }
}

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws