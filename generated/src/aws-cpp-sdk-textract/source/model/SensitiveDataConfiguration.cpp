/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/SensitiveDataConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

SensitiveDataConfiguration::SensitiveDataConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SensitiveDataConfiguration& SensitiveDataConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DetectionMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_detectionMode = SensitiveDataDetectionModeMapper::GetSensitiveDataDetectionModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_detectionModeHasBeenSet = true;
              }

              else if (initialKeyStr == "PiiEntitiesConfiguration") {
                m_piiEntitiesConfiguration = PIIEntitiesConfiguration(decoder);
                m_piiEntitiesConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SensitiveDataConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DetectionMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_detectionMode = SensitiveDataDetectionModeMapper::GetSensitiveDataDetectionModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_detectionModeHasBeenSet = true;
            }

            else if (initialKeyStr == "PiiEntitiesConfiguration") {
              m_piiEntitiesConfiguration = PIIEntitiesConfiguration(decoder);
              m_piiEntitiesConfigurationHasBeenSet = true;
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

void SensitiveDataConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_detectionModeHasBeenSet) {
    mapSize++;
  }
  if (m_piiEntitiesConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_detectionModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DetectionMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SensitiveDataDetectionModeMapper::GetNameForSensitiveDataDetectionMode(m_detectionMode).c_str()));
  }

  if (m_piiEntitiesConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PiiEntitiesConfiguration"));
    m_piiEntitiesConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws