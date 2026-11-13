/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/AttackVolume.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Shield {
namespace Model {

AttackVolume::AttackVolume(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AttackVolume& AttackVolume::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BitsPerSecond") {
                m_bitsPerSecond = AttackVolumeStatistics(decoder);
                m_bitsPerSecondHasBeenSet = true;
              }

              else if (initialKeyStr == "PacketsPerSecond") {
                m_packetsPerSecond = AttackVolumeStatistics(decoder);
                m_packetsPerSecondHasBeenSet = true;
              }

              else if (initialKeyStr == "RequestsPerSecond") {
                m_requestsPerSecond = AttackVolumeStatistics(decoder);
                m_requestsPerSecondHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AttackVolume", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BitsPerSecond") {
              m_bitsPerSecond = AttackVolumeStatistics(decoder);
              m_bitsPerSecondHasBeenSet = true;
            }

            else if (initialKeyStr == "PacketsPerSecond") {
              m_packetsPerSecond = AttackVolumeStatistics(decoder);
              m_packetsPerSecondHasBeenSet = true;
            }

            else if (initialKeyStr == "RequestsPerSecond") {
              m_requestsPerSecond = AttackVolumeStatistics(decoder);
              m_requestsPerSecondHasBeenSet = true;
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

void AttackVolume::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_bitsPerSecondHasBeenSet) {
    mapSize++;
  }
  if (m_packetsPerSecondHasBeenSet) {
    mapSize++;
  }
  if (m_requestsPerSecondHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_bitsPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BitsPerSecond"));
    m_bitsPerSecond.CborEncode(encoder);
  }

  if (m_packetsPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PacketsPerSecond"));
    m_packetsPerSecond.CborEncode(encoder);
  }

  if (m_requestsPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RequestsPerSecond"));
    m_requestsPerSecond.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Shield
}  // namespace Aws