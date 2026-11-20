/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/TranscriptResponse.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

TranscriptResponse::TranscriptResponse(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TranscriptResponse& TranscriptResponse::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Metadata") {
                m_metadata = TranscribeAudioMetadata(decoder);
                m_metadataHasBeenSet = true;
              }

              else if (initialKeyStr == "Results") {
                m_results = TranscribeAudioResults(decoder);
                m_resultsHasBeenSet = true;
              }

              else if (initialKeyStr == "RedactedResults") {
                m_redactedResults = TranscribeAudioResults(decoder);
                m_redactedResultsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TranscriptResponse", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Metadata") {
              m_metadata = TranscribeAudioMetadata(decoder);
              m_metadataHasBeenSet = true;
            }

            else if (initialKeyStr == "Results") {
              m_results = TranscribeAudioResults(decoder);
              m_resultsHasBeenSet = true;
            }

            else if (initialKeyStr == "RedactedResults") {
              m_redactedResults = TranscribeAudioResults(decoder);
              m_redactedResultsHasBeenSet = true;
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

void TranscriptResponse::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_metadataHasBeenSet) {
    mapSize++;
  }
  if (m_resultsHasBeenSet) {
    mapSize++;
  }
  if (m_redactedResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Metadata"));
    m_metadata.CborEncode(encoder);
  }

  if (m_resultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Results"));
    m_results.CborEncode(encoder);
  }

  if (m_redactedResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RedactedResults"));
    m_redactedResults.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws