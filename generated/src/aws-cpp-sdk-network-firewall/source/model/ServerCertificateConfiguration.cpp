/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/ServerCertificateConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ServerCertificateConfiguration::ServerCertificateConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

ServerCertificateConfiguration& ServerCertificateConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ServerCertificates") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_serverCertificates.push_back(ServerCertificate(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_serverCertificates.push_back(ServerCertificate(decoder));
                    }
                  }
                }
                m_serverCertificatesHasBeenSet = true;
              }

              else if (initialKeyStr == "Scopes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_scopes.push_back(ServerCertificateScope(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_scopes.push_back(ServerCertificateScope(decoder));
                    }
                  }
                }
                m_scopesHasBeenSet = true;
              }

              else if (initialKeyStr == "CertificateAuthorityArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_certificateAuthorityArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_certificateAuthorityArn = ss.str();
                  }
                }
                m_certificateAuthorityArnHasBeenSet = true;
              }

              else if (initialKeyStr == "CheckCertificateRevocationStatus") {
                m_checkCertificateRevocationStatus = CheckCertificateRevocationStatusActions(decoder);
                m_checkCertificateRevocationStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "DefaultDecryptionBehavior") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_defaultDecryptionBehavior = DecryptionActionMapper::GetDecryptionActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_defaultDecryptionBehaviorHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ServerCertificateConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ServerCertificates") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_serverCertificates.push_back(ServerCertificate(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_serverCertificates.push_back(ServerCertificate(decoder));
                  }
                }
              }
              m_serverCertificatesHasBeenSet = true;
            }

            else if (initialKeyStr == "Scopes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_scopes.push_back(ServerCertificateScope(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_scopes.push_back(ServerCertificateScope(decoder));
                  }
                }
              }
              m_scopesHasBeenSet = true;
            }

            else if (initialKeyStr == "CertificateAuthorityArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_certificateAuthorityArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_certificateAuthorityArn = ss.str();
                }
              }
              m_certificateAuthorityArnHasBeenSet = true;
            }

            else if (initialKeyStr == "CheckCertificateRevocationStatus") {
              m_checkCertificateRevocationStatus = CheckCertificateRevocationStatusActions(decoder);
              m_checkCertificateRevocationStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "DefaultDecryptionBehavior") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_defaultDecryptionBehavior = DecryptionActionMapper::GetDecryptionActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_defaultDecryptionBehaviorHasBeenSet = true;
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

void ServerCertificateConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_serverCertificatesHasBeenSet) {
    mapSize++;
  }
  if (m_scopesHasBeenSet) {
    mapSize++;
  }
  if (m_certificateAuthorityArnHasBeenSet) {
    mapSize++;
  }
  if (m_checkCertificateRevocationStatusHasBeenSet) {
    mapSize++;
  }
  if (m_defaultDecryptionBehaviorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serverCertificatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerCertificates"));
    encoder.WriteArrayStart(m_serverCertificates.size());
    for (const auto& item_0 : m_serverCertificates) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_scopesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Scopes"));
    encoder.WriteArrayStart(m_scopes.size());
    for (const auto& item_0 : m_scopes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_certificateAuthorityArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificateAuthorityArn.c_str()));
  }

  if (m_checkCertificateRevocationStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CheckCertificateRevocationStatus"));
    m_checkCertificateRevocationStatus.CborEncode(encoder);
  }

  if (m_defaultDecryptionBehaviorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefaultDecryptionBehavior"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(DecryptionActionMapper::GetNameForDecryptionAction(m_defaultDecryptionBehavior).c_str()));
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws