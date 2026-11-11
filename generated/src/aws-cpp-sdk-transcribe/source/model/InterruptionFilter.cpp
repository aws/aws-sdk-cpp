/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/InterruptionFilter.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

InterruptionFilter::InterruptionFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

InterruptionFilter& InterruptionFilter::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Threshold") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_threshold = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_threshold = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_thresholdHasBeenSet = true;
              }

              else if (initialKeyStr == "ParticipantRole") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_participantRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "AbsoluteTimeRange") {
                m_absoluteTimeRange = AbsoluteTimeRange(decoder);
                m_absoluteTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "RelativeTimeRange") {
                m_relativeTimeRange = RelativeTimeRange(decoder);
                m_relativeTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "Negate") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_negate = val.value();
                }
                m_negateHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InterruptionFilter", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Threshold") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_threshold = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_threshold = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_thresholdHasBeenSet = true;
            }

            else if (initialKeyStr == "ParticipantRole") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_participantRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "AbsoluteTimeRange") {
              m_absoluteTimeRange = AbsoluteTimeRange(decoder);
              m_absoluteTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "RelativeTimeRange") {
              m_relativeTimeRange = RelativeTimeRange(decoder);
              m_relativeTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "Negate") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_negate = val.value();
              }
              m_negateHasBeenSet = true;
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

void InterruptionFilter::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_thresholdHasBeenSet) {
    mapSize++;
  }
  if (m_participantRoleHasBeenSet) {
    mapSize++;
  }
  if (m_absoluteTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_relativeTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_negateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_thresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Threshold"));
    (m_threshold >= 0) ? encoder.WriteUInt(m_threshold) : encoder.WriteNegInt(m_threshold);
  }

  if (m_participantRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParticipantRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole).c_str()));
  }

  if (m_absoluteTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AbsoluteTimeRange"));
    m_absoluteTimeRange.CborEncode(encoder);
  }

  if (m_relativeTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RelativeTimeRange"));
    m_relativeTimeRange.CborEncode(encoder);
  }

  if (m_negateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Negate"));
    encoder.WriteBool(m_negate);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws