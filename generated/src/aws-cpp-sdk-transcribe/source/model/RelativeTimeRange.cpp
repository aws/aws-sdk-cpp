/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/RelativeTimeRange.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

RelativeTimeRange::RelativeTimeRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RelativeTimeRange& RelativeTimeRange::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StartPercentage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startPercentage = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_startPercentage = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_startPercentageHasBeenSet = true;
              }

              else if (initialKeyStr == "EndPercentage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_endPercentage = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_endPercentage = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_endPercentageHasBeenSet = true;
              }

              else if (initialKeyStr == "First") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_first = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_first = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_firstHasBeenSet = true;
              }

              else if (initialKeyStr == "Last") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_last = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_last = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_lastHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RelativeTimeRange", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StartPercentage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_startPercentage = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_startPercentage = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_startPercentageHasBeenSet = true;
            }

            else if (initialKeyStr == "EndPercentage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_endPercentage = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_endPercentage = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_endPercentageHasBeenSet = true;
            }

            else if (initialKeyStr == "First") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_first = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_first = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_firstHasBeenSet = true;
            }

            else if (initialKeyStr == "Last") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_last = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_last = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_lastHasBeenSet = true;
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

void RelativeTimeRange::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_startPercentageHasBeenSet) {
    mapSize++;
  }
  if (m_endPercentageHasBeenSet) {
    mapSize++;
  }
  if (m_firstHasBeenSet) {
    mapSize++;
  }
  if (m_lastHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_startPercentageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartPercentage"));
    (m_startPercentage >= 0) ? encoder.WriteUInt(m_startPercentage) : encoder.WriteNegInt(m_startPercentage);
  }

  if (m_endPercentageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndPercentage"));
    (m_endPercentage >= 0) ? encoder.WriteUInt(m_endPercentage) : encoder.WriteNegInt(m_endPercentage);
  }

  if (m_firstHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("First"));
    (m_first >= 0) ? encoder.WriteUInt(m_first) : encoder.WriteNegInt(m_first);
  }

  if (m_lastHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Last"));
    (m_last >= 0) ? encoder.WriteUInt(m_last) : encoder.WriteNegInt(m_last);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws