/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/SubscriptionLimits.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Shield {
namespace Model {

SubscriptionLimits::SubscriptionLimits(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SubscriptionLimits& SubscriptionLimits::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ProtectionLimits") {
                m_protectionLimits = ProtectionLimits(decoder);
                m_protectionLimitsHasBeenSet = true;
              }

              else if (initialKeyStr == "ProtectionGroupLimits") {
                m_protectionGroupLimits = ProtectionGroupLimits(decoder);
                m_protectionGroupLimitsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SubscriptionLimits", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ProtectionLimits") {
              m_protectionLimits = ProtectionLimits(decoder);
              m_protectionLimitsHasBeenSet = true;
            }

            else if (initialKeyStr == "ProtectionGroupLimits") {
              m_protectionGroupLimits = ProtectionGroupLimits(decoder);
              m_protectionGroupLimitsHasBeenSet = true;
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

void SubscriptionLimits::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_protectionLimitsHasBeenSet) {
    mapSize++;
  }
  if (m_protectionGroupLimitsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_protectionLimitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionLimits"));
    m_protectionLimits.CborEncode(encoder);
  }

  if (m_protectionGroupLimitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionGroupLimits"));
    m_protectionGroupLimits.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Shield
}  // namespace Aws