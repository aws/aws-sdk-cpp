/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/ProvisioningArtifactView.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceCatalog {
namespace Model {

ProvisioningArtifactView::ProvisioningArtifactView(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProvisioningArtifactView& ProvisioningArtifactView::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ProductViewSummary") {
                m_productViewSummary = ProductViewSummary(decoder);
                m_productViewSummaryHasBeenSet = true;
              }

              else if (initialKeyStr == "ProvisioningArtifact") {
                m_provisioningArtifact = ProvisioningArtifact(decoder);
                m_provisioningArtifactHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProvisioningArtifactView", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ProductViewSummary") {
              m_productViewSummary = ProductViewSummary(decoder);
              m_productViewSummaryHasBeenSet = true;
            }

            else if (initialKeyStr == "ProvisioningArtifact") {
              m_provisioningArtifact = ProvisioningArtifact(decoder);
              m_provisioningArtifactHasBeenSet = true;
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

void ProvisioningArtifactView::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_productViewSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_provisioningArtifactHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_productViewSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductViewSummary"));
    m_productViewSummary.CborEncode(encoder);
  }

  if (m_provisioningArtifactHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProvisioningArtifact"));
    m_provisioningArtifact.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws