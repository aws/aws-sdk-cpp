/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceCatalog {
namespace Model {

ProductViewDetail::ProductViewDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProductViewDetail& ProductViewDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              else if (initialKeyStr == "Status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = StatusMapper::GetStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "ProductARN") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_productARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_productARN = ss.str();
                  }
                }
                m_productARNHasBeenSet = true;
              }

              else if (initialKeyStr == "CreatedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createdTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createdTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "SourceConnection") {
                m_sourceConnection = SourceConnectionDetail(decoder);
                m_sourceConnectionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProductViewDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            else if (initialKeyStr == "Status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = StatusMapper::GetStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "ProductARN") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_productARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_productARN = ss.str();
                }
              }
              m_productARNHasBeenSet = true;
            }

            else if (initialKeyStr == "CreatedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createdTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createdTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "SourceConnection") {
              m_sourceConnection = SourceConnectionDetail(decoder);
              m_sourceConnectionHasBeenSet = true;
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

void ProductViewDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_productViewSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_productARNHasBeenSet) {
    mapSize++;
  }
  if (m_createdTimeHasBeenSet) {
    mapSize++;
  }
  if (m_sourceConnectionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_productViewSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductViewSummary"));
    m_productViewSummary.CborEncode(encoder);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StatusMapper::GetNameForStatus(m_status).c_str()));
  }

  if (m_productARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productARN.c_str()));
  }

  if (m_createdTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdTime.Seconds());
  }

  if (m_sourceConnectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceConnection"));
    m_sourceConnection.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws