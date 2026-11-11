/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/PortfolioShareDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceCatalog {
namespace Model {

PortfolioShareDetail::PortfolioShareDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PortfolioShareDetail& PortfolioShareDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PrincipalId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_principalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_principalId = ss.str();
                  }
                }
                m_principalIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = DescribePortfolioShareTypeMapper::GetDescribePortfolioShareTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "Accepted") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_accepted = val.value();
                }
                m_acceptedHasBeenSet = true;
              }

              else if (initialKeyStr == "ShareTagOptions") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_shareTagOptions = val.value();
                }
                m_shareTagOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "SharePrincipals") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_sharePrincipals = val.value();
                }
                m_sharePrincipalsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PortfolioShareDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PrincipalId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_principalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_principalId = ss.str();
                }
              }
              m_principalIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = DescribePortfolioShareTypeMapper::GetDescribePortfolioShareTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "Accepted") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_accepted = val.value();
              }
              m_acceptedHasBeenSet = true;
            }

            else if (initialKeyStr == "ShareTagOptions") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_shareTagOptions = val.value();
              }
              m_shareTagOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "SharePrincipals") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_sharePrincipals = val.value();
              }
              m_sharePrincipalsHasBeenSet = true;
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

void PortfolioShareDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_principalIdHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_acceptedHasBeenSet) {
    mapSize++;
  }
  if (m_shareTagOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_sharePrincipalsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_principalIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrincipalId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_principalId.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(DescribePortfolioShareTypeMapper::GetNameForDescribePortfolioShareType(m_type).c_str()));
  }

  if (m_acceptedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Accepted"));
    encoder.WriteBool(m_accepted);
  }

  if (m_shareTagOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShareTagOptions"));
    encoder.WriteBool(m_shareTagOptions);
  }

  if (m_sharePrincipalsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SharePrincipals"));
    encoder.WriteBool(m_sharePrincipals);
  }
}

}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws