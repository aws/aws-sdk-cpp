/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/EmailTargetDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

EmailTargetDetail::EmailTargetDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EmailTargetDetail& EmailTargetDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ScanStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_scanStatus =
                      ScanStatusMapper::GetScanStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_scanStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "AttachedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_attachedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_attachedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_attachedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "ValidCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_validCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_validCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_validCountHasBeenSet = true;
              }

              else if (initialKeyStr == "RejectedCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_rejectedCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_rejectedCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_rejectedCountHasBeenSet = true;
              }

              else if (initialKeyStr == "DuplicateCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_duplicateCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_duplicateCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_duplicateCountHasBeenSet = true;
              }

              else if (initialKeyStr == "FileName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_fileName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_fileName = ss.str();
                  }
                }
                m_fileNameHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EmailTargetDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ScanStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_scanStatus =
                    ScanStatusMapper::GetScanStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_scanStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "AttachedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_attachedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_attachedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_attachedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "ValidCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_validCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_validCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_validCountHasBeenSet = true;
            }

            else if (initialKeyStr == "RejectedCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_rejectedCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_rejectedCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_rejectedCountHasBeenSet = true;
            }

            else if (initialKeyStr == "DuplicateCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_duplicateCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_duplicateCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_duplicateCountHasBeenSet = true;
            }

            else if (initialKeyStr == "FileName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_fileName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_fileName = ss.str();
                }
              }
              m_fileNameHasBeenSet = true;
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

void EmailTargetDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_scanStatusHasBeenSet) {
    mapSize++;
  }
  if (m_attachedAtHasBeenSet) {
    mapSize++;
  }
  if (m_validCountHasBeenSet) {
    mapSize++;
  }
  if (m_rejectedCountHasBeenSet) {
    mapSize++;
  }
  if (m_duplicateCountHasBeenSet) {
    mapSize++;
  }
  if (m_fileNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_scanStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScanStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ScanStatusMapper::GetNameForScanStatus(m_scanStatus).c_str()));
  }

  if (m_attachedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttachedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_attachedAt.Seconds());
  }

  if (m_validCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ValidCount"));
    (m_validCount >= 0) ? encoder.WriteUInt(m_validCount) : encoder.WriteNegInt(m_validCount);
  }

  if (m_rejectedCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RejectedCount"));
    (m_rejectedCount >= 0) ? encoder.WriteUInt(m_rejectedCount) : encoder.WriteNegInt(m_rejectedCount);
  }

  if (m_duplicateCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DuplicateCount"));
    (m_duplicateCount >= 0) ? encoder.WriteUInt(m_duplicateCount) : encoder.WriteNegInt(m_duplicateCount);
  }

  if (m_fileNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FileName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fileName.c_str()));
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws