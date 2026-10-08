/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/EndTimeBehavior.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

EndTimeBehavior::EndTimeBehavior(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EndTimeBehavior& EndTimeBehavior::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = EndTimeBehaviorTypeMapper::GetEndTimeBehaviorTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "reasonCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_reasonCode = EndTimeBehaviorReasonCodeMapper::GetEndTimeBehaviorReasonCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_reasonCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "renewalSummary") {
                m_renewalSummary = RenewalSummary(decoder);
                m_renewalSummaryHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EndTimeBehavior", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = EndTimeBehaviorTypeMapper::GetEndTimeBehaviorTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "reasonCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_reasonCode = EndTimeBehaviorReasonCodeMapper::GetEndTimeBehaviorReasonCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_reasonCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "renewalSummary") {
              m_renewalSummary = RenewalSummary(decoder);
              m_renewalSummaryHasBeenSet = true;
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

void EndTimeBehavior::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_reasonCodeHasBeenSet) {
    mapSize++;
  }
  if (m_renewalSummaryHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(EndTimeBehaviorTypeMapper::GetNameForEndTimeBehaviorType(m_type).c_str()));
  }

  if (m_reasonCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("reasonCode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(EndTimeBehaviorReasonCodeMapper::GetNameForEndTimeBehaviorReasonCode(m_reasonCode).c_str()));
  }

  if (m_renewalSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("renewalSummary"));
    m_renewalSummary.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws