/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

OnDeviceServiceConfiguration::OnDeviceServiceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

OnDeviceServiceConfiguration& OnDeviceServiceConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "NFSOnDeviceService") {
                m_nFSOnDeviceService = NFSOnDeviceServiceConfiguration(decoder);
                m_nFSOnDeviceServiceHasBeenSet = true;
              }

              else if (initialKeyStr == "TGWOnDeviceService") {
                m_tGWOnDeviceService = TGWOnDeviceServiceConfiguration(decoder);
                m_tGWOnDeviceServiceHasBeenSet = true;
              }

              else if (initialKeyStr == "EKSOnDeviceService") {
                m_eKSOnDeviceService = EKSOnDeviceServiceConfiguration(decoder);
                m_eKSOnDeviceServiceHasBeenSet = true;
              }

              else if (initialKeyStr == "S3OnDeviceService") {
                m_s3OnDeviceService = S3OnDeviceServiceConfiguration(decoder);
                m_s3OnDeviceServiceHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("OnDeviceServiceConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "NFSOnDeviceService") {
              m_nFSOnDeviceService = NFSOnDeviceServiceConfiguration(decoder);
              m_nFSOnDeviceServiceHasBeenSet = true;
            }

            else if (initialKeyStr == "TGWOnDeviceService") {
              m_tGWOnDeviceService = TGWOnDeviceServiceConfiguration(decoder);
              m_tGWOnDeviceServiceHasBeenSet = true;
            }

            else if (initialKeyStr == "EKSOnDeviceService") {
              m_eKSOnDeviceService = EKSOnDeviceServiceConfiguration(decoder);
              m_eKSOnDeviceServiceHasBeenSet = true;
            }

            else if (initialKeyStr == "S3OnDeviceService") {
              m_s3OnDeviceService = S3OnDeviceServiceConfiguration(decoder);
              m_s3OnDeviceServiceHasBeenSet = true;
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

void OnDeviceServiceConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nFSOnDeviceServiceHasBeenSet) {
    mapSize++;
  }
  if (m_tGWOnDeviceServiceHasBeenSet) {
    mapSize++;
  }
  if (m_eKSOnDeviceServiceHasBeenSet) {
    mapSize++;
  }
  if (m_s3OnDeviceServiceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nFSOnDeviceServiceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NFSOnDeviceService"));
    m_nFSOnDeviceService.CborEncode(encoder);
  }

  if (m_tGWOnDeviceServiceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TGWOnDeviceService"));
    m_tGWOnDeviceService.CborEncode(encoder);
  }

  if (m_eKSOnDeviceServiceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EKSOnDeviceService"));
    m_eKSOnDeviceService.CborEncode(encoder);
  }

  if (m_s3OnDeviceServiceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3OnDeviceService"));
    m_s3OnDeviceService.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws