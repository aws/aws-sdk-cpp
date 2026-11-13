/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/TLSInspectionConfigurationResponse.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

TLSInspectionConfigurationResponse::TLSInspectionConfigurationResponse(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

TLSInspectionConfigurationResponse& TLSInspectionConfigurationResponse::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TLSInspectionConfigurationArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_tLSInspectionConfigurationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_tLSInspectionConfigurationArn = ss.str();
                  }
                }
                m_tLSInspectionConfigurationArnHasBeenSet = true;
              }

              else if (initialKeyStr == "TLSInspectionConfigurationName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_tLSInspectionConfigurationName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_tLSInspectionConfigurationName = ss.str();
                  }
                }
                m_tLSInspectionConfigurationNameHasBeenSet = true;
              }

              else if (initialKeyStr == "TLSInspectionConfigurationId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_tLSInspectionConfigurationId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_tLSInspectionConfigurationId = ss.str();
                  }
                }
                m_tLSInspectionConfigurationIdHasBeenSet = true;
              }

              else if (initialKeyStr == "TLSInspectionConfigurationStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_tLSInspectionConfigurationStatus = ResourceStatusMapper::GetResourceStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_tLSInspectionConfigurationStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "Tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tags.push_back(Tag(decoder));
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
                      m_tags.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "LastModifiedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastModifiedTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfAssociations") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfAssociations = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfAssociations = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfAssociationsHasBeenSet = true;
              }

              else if (initialKeyStr == "EncryptionConfiguration") {
                m_encryptionConfiguration = EncryptionConfiguration(decoder);
                m_encryptionConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "Certificates") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_certificates.push_back(TlsCertificateData(decoder));
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
                      m_certificates.push_back(TlsCertificateData(decoder));
                    }
                  }
                }
                m_certificatesHasBeenSet = true;
              }

              else if (initialKeyStr == "CertificateAuthority") {
                m_certificateAuthority = TlsCertificateData(decoder);
                m_certificateAuthorityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TLSInspectionConfigurationResponse", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TLSInspectionConfigurationArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_tLSInspectionConfigurationArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_tLSInspectionConfigurationArn = ss.str();
                }
              }
              m_tLSInspectionConfigurationArnHasBeenSet = true;
            }

            else if (initialKeyStr == "TLSInspectionConfigurationName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_tLSInspectionConfigurationName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_tLSInspectionConfigurationName = ss.str();
                }
              }
              m_tLSInspectionConfigurationNameHasBeenSet = true;
            }

            else if (initialKeyStr == "TLSInspectionConfigurationId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_tLSInspectionConfigurationId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_tLSInspectionConfigurationId = ss.str();
                }
              }
              m_tLSInspectionConfigurationIdHasBeenSet = true;
            }

            else if (initialKeyStr == "TLSInspectionConfigurationStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_tLSInspectionConfigurationStatus = ResourceStatusMapper::GetResourceStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_tLSInspectionConfigurationStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "Tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tags.push_back(Tag(decoder));
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
                    m_tags.push_back(Tag(decoder));
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "LastModifiedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastModifiedTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfAssociations") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfAssociations = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfAssociations = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfAssociationsHasBeenSet = true;
            }

            else if (initialKeyStr == "EncryptionConfiguration") {
              m_encryptionConfiguration = EncryptionConfiguration(decoder);
              m_encryptionConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "Certificates") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_certificates.push_back(TlsCertificateData(decoder));
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
                    m_certificates.push_back(TlsCertificateData(decoder));
                  }
                }
              }
              m_certificatesHasBeenSet = true;
            }

            else if (initialKeyStr == "CertificateAuthority") {
              m_certificateAuthority = TlsCertificateData(decoder);
              m_certificateAuthorityHasBeenSet = true;
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

void TLSInspectionConfigurationResponse::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_tLSInspectionConfigurationArnHasBeenSet) {
    mapSize++;
  }
  if (m_tLSInspectionConfigurationNameHasBeenSet) {
    mapSize++;
  }
  if (m_tLSInspectionConfigurationIdHasBeenSet) {
    mapSize++;
  }
  if (m_tLSInspectionConfigurationStatusHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_lastModifiedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfAssociationsHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_certificatesHasBeenSet) {
    mapSize++;
  }
  if (m_certificateAuthorityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_tLSInspectionConfigurationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tLSInspectionConfigurationArn.c_str()));
  }

  if (m_tLSInspectionConfigurationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tLSInspectionConfigurationName.c_str()));
  }

  if (m_tLSInspectionConfigurationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_tLSInspectionConfigurationId.c_str()));
  }

  if (m_tLSInspectionConfigurationStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TLSInspectionConfigurationStatus"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ResourceStatusMapper::GetNameForResourceStatus(m_tLSInspectionConfigurationStatus).c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_lastModifiedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastModifiedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastModifiedTime.Seconds());
  }

  if (m_numberOfAssociationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfAssociations"));
    (m_numberOfAssociations >= 0) ? encoder.WriteUInt(m_numberOfAssociations) : encoder.WriteNegInt(m_numberOfAssociations);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }

  if (m_certificatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Certificates"));
    encoder.WriteArrayStart(m_certificates.size());
    for (const auto& item_0 : m_certificates) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_certificateAuthorityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthority"));
    m_certificateAuthority.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws