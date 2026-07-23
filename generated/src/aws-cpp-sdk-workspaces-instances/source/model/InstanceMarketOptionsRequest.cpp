/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/InstanceMarketOptionsRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

InstanceMarketOptionsRequest::InstanceMarketOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

InstanceMarketOptionsRequest& InstanceMarketOptionsRequest::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MarketType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_marketType = MarketTypeEnumMapper::GetMarketTypeEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_marketTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "SpotOptions") {
                m_spotOptions = SpotMarketOptions(decoder);
                m_spotOptionsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InstanceMarketOptionsRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MarketType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_marketType = MarketTypeEnumMapper::GetMarketTypeEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_marketTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "SpotOptions") {
              m_spotOptions = SpotMarketOptions(decoder);
              m_spotOptionsHasBeenSet = true;
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

void InstanceMarketOptionsRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_marketTypeHasBeenSet) {
    mapSize++;
  }
  if (m_spotOptionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_marketTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MarketType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MarketTypeEnumMapper::GetNameForMarketTypeEnum(m_marketType).c_str()));
  }

  if (m_spotOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SpotOptions"));
    m_spotOptions.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws