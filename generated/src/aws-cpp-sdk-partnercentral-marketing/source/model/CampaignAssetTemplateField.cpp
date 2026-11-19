/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/CampaignAssetTemplateField.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

CampaignAssetTemplateField::CampaignAssetTemplateField(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CampaignAssetTemplateField& CampaignAssetTemplateField::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "FieldId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_fieldId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_fieldId = ss.str();
                  }
                }
                m_fieldIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Label") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_label = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_label = ss.str();
                  }
                }
                m_labelHasBeenSet = true;
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

              else if (initialKeyStr == "Section") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_section = TemplateFieldSectionMapper::GetTemplateFieldSectionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_sectionHasBeenSet = true;
              }

              else if (initialKeyStr == "Page") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_page = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_page = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pageHasBeenSet = true;
              }

              else if (initialKeyStr == "Required") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_required = val.value();
                }
                m_requiredHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                m_type = FieldType(decoder);
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "CampaignSetting") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_campaignSetting = CampaignSettingMapper::GetCampaignSettingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_campaignSettingHasBeenSet = true;
              }

              else if (initialKeyStr == "PartnerProfileField") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_partnerProfileField = PartnerProfileFieldMapper::GetPartnerProfileFieldForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_partnerProfileFieldHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CampaignAssetTemplateField", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "FieldId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_fieldId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_fieldId = ss.str();
                }
              }
              m_fieldIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Label") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_label = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_label = ss.str();
                }
              }
              m_labelHasBeenSet = true;
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

            else if (initialKeyStr == "Section") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_section = TemplateFieldSectionMapper::GetTemplateFieldSectionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_sectionHasBeenSet = true;
            }

            else if (initialKeyStr == "Page") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_page = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_page = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pageHasBeenSet = true;
            }

            else if (initialKeyStr == "Required") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_required = val.value();
              }
              m_requiredHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              m_type = FieldType(decoder);
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "CampaignSetting") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_campaignSetting = CampaignSettingMapper::GetCampaignSettingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_campaignSettingHasBeenSet = true;
            }

            else if (initialKeyStr == "PartnerProfileField") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_partnerProfileField = PartnerProfileFieldMapper::GetPartnerProfileFieldForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_partnerProfileFieldHasBeenSet = true;
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

void CampaignAssetTemplateField::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_fieldIdHasBeenSet) {
    mapSize++;
  }
  if (m_labelHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_sectionHasBeenSet) {
    mapSize++;
  }
  if (m_pageHasBeenSet) {
    mapSize++;
  }
  if (m_requiredHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_campaignSettingHasBeenSet) {
    mapSize++;
  }
  if (m_partnerProfileFieldHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fieldIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FieldId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fieldId.c_str()));
  }

  if (m_labelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Label"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_label.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_sectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Section"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TemplateFieldSectionMapper::GetNameForTemplateFieldSection(m_section).c_str()));
  }

  if (m_pageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Page"));
    (m_page >= 0) ? encoder.WriteUInt(m_page) : encoder.WriteNegInt(m_page);
  }

  if (m_requiredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Required"));
    encoder.WriteBool(m_required);
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    m_type.CborEncode(encoder);
  }

  if (m_campaignSettingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignSetting"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CampaignSettingMapper::GetNameForCampaignSetting(m_campaignSetting).c_str()));
  }

  if (m_partnerProfileFieldHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerProfileField"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PartnerProfileFieldMapper::GetNameForPartnerProfileField(m_partnerProfileField).c_str()));
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws