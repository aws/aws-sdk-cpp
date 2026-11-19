/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/CampaignAsset.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

CampaignAsset::CampaignAsset(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CampaignAsset& CampaignAsset::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Id") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_id = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_id = ss.str();
                  }
                }
                m_idHasBeenSet = true;
              }

              else if (initialKeyStr == "CampaignId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_campaignId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_campaignId = ss.str();
                  }
                }
                m_campaignIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Category") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_category = CampaignAssetCategoryMapper::GetCampaignAssetCategoryForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_categoryHasBeenSet = true;
              }

              else if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "LinkLabel") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_linkLabel = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_linkLabel = ss.str();
                  }
                }
                m_linkLabelHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = CampaignAssetStateMapper::GetCampaignAssetStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "LastActivationStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_lastActivationStatus = AttemptStatusMapper::GetAttemptStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_lastActivationStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "DeliveryStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deliveryStatus = DeliveryStatusMapper::GetDeliveryStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deliveryStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "DeliveryStatusReason") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deliveryStatusReason = CampaignAssetStateReasonMapper::GetCampaignAssetStateReasonForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deliveryStatusReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "SourceAssetTemplateId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourceAssetTemplateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourceAssetTemplateId = ss.str();
                  }
                }
                m_sourceAssetTemplateIdHasBeenSet = true;
              }

              else if (initialKeyStr == "SocialPlatform") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_socialPlatform =
                      PlatformMapper::GetPlatformForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_socialPlatformHasBeenSet = true;
              }

              else if (initialKeyStr == "FileFormat") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_fileFormat =
                      FileFormatMapper::GetFileFormatForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_fileFormatHasBeenSet = true;
              }

              else if (initialKeyStr == "SendMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_sendMode =
                      SendModeMapper::GetSendModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_sendModeHasBeenSet = true;
              }

              else if (initialKeyStr == "ScheduledSendAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_scheduledSendAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_scheduledSendAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_scheduledSendAtHasBeenSet = true;
              }

              else if (initialKeyStr == "FieldValues") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_fieldValues.push_back(CampaignAssetFieldValue(decoder));
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
                      m_fieldValues.push_back(CampaignAssetFieldValue(decoder));
                    }
                  }
                }
                m_fieldValuesHasBeenSet = true;
              }

              else if (initialKeyStr == "LayoutPreviews") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_layoutPreviews.push_back(LayoutPreview(decoder));
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
                      m_layoutPreviews.push_back(LayoutPreview(decoder));
                    }
                  }
                }
                m_layoutPreviewsHasBeenSet = true;
              }

              else if (initialKeyStr == "Layout") {
                m_layout = CampaignAssetLayout(decoder);
                m_layoutHasBeenSet = true;
              }

              else if (initialKeyStr == "ActivationIssues") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_activationIssues.push_back(ActivationIssue(decoder));
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
                      m_activationIssues.push_back(ActivationIssue(decoder));
                    }
                  }
                }
                m_activationIssuesHasBeenSet = true;
              }

              else if (initialKeyStr == "PublicUrl") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_publicUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_publicUrl = ss.str();
                  }
                }
                m_publicUrlHasBeenSet = true;
              }

              else if (initialKeyStr == "CreatedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createdAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createdAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdAtHasBeenSet = true;
              }

              else if (initialKeyStr == "UpdatedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_updatedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_updatedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_updatedAtHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CampaignAsset", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Id") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_id = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_id = ss.str();
                }
              }
              m_idHasBeenSet = true;
            }

            else if (initialKeyStr == "CampaignId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_campaignId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_campaignId = ss.str();
                }
              }
              m_campaignIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Category") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_category = CampaignAssetCategoryMapper::GetCampaignAssetCategoryForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_categoryHasBeenSet = true;
            }

            else if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "LinkLabel") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_linkLabel = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_linkLabel = ss.str();
                }
              }
              m_linkLabelHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = CampaignAssetStateMapper::GetCampaignAssetStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "LastActivationStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_lastActivationStatus = AttemptStatusMapper::GetAttemptStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_lastActivationStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "DeliveryStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deliveryStatus = DeliveryStatusMapper::GetDeliveryStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deliveryStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "DeliveryStatusReason") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deliveryStatusReason = CampaignAssetStateReasonMapper::GetCampaignAssetStateReasonForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deliveryStatusReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "SourceAssetTemplateId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourceAssetTemplateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourceAssetTemplateId = ss.str();
                }
              }
              m_sourceAssetTemplateIdHasBeenSet = true;
            }

            else if (initialKeyStr == "SocialPlatform") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_socialPlatform =
                    PlatformMapper::GetPlatformForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_socialPlatformHasBeenSet = true;
            }

            else if (initialKeyStr == "FileFormat") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_fileFormat =
                    FileFormatMapper::GetFileFormatForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_fileFormatHasBeenSet = true;
            }

            else if (initialKeyStr == "SendMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_sendMode =
                    SendModeMapper::GetSendModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_sendModeHasBeenSet = true;
            }

            else if (initialKeyStr == "ScheduledSendAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_scheduledSendAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_scheduledSendAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_scheduledSendAtHasBeenSet = true;
            }

            else if (initialKeyStr == "FieldValues") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_fieldValues.push_back(CampaignAssetFieldValue(decoder));
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
                    m_fieldValues.push_back(CampaignAssetFieldValue(decoder));
                  }
                }
              }
              m_fieldValuesHasBeenSet = true;
            }

            else if (initialKeyStr == "LayoutPreviews") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_layoutPreviews.push_back(LayoutPreview(decoder));
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
                    m_layoutPreviews.push_back(LayoutPreview(decoder));
                  }
                }
              }
              m_layoutPreviewsHasBeenSet = true;
            }

            else if (initialKeyStr == "Layout") {
              m_layout = CampaignAssetLayout(decoder);
              m_layoutHasBeenSet = true;
            }

            else if (initialKeyStr == "ActivationIssues") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_activationIssues.push_back(ActivationIssue(decoder));
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
                    m_activationIssues.push_back(ActivationIssue(decoder));
                  }
                }
              }
              m_activationIssuesHasBeenSet = true;
            }

            else if (initialKeyStr == "PublicUrl") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_publicUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_publicUrl = ss.str();
                }
              }
              m_publicUrlHasBeenSet = true;
            }

            else if (initialKeyStr == "CreatedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createdAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createdAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdAtHasBeenSet = true;
            }

            else if (initialKeyStr == "UpdatedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_updatedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_updatedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_updatedAtHasBeenSet = true;
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

void CampaignAsset::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_campaignIdHasBeenSet) {
    mapSize++;
  }
  if (m_categoryHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_linkLabelHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_lastActivationStatusHasBeenSet) {
    mapSize++;
  }
  if (m_deliveryStatusHasBeenSet) {
    mapSize++;
  }
  if (m_deliveryStatusReasonHasBeenSet) {
    mapSize++;
  }
  if (m_sourceAssetTemplateIdHasBeenSet) {
    mapSize++;
  }
  if (m_socialPlatformHasBeenSet) {
    mapSize++;
  }
  if (m_fileFormatHasBeenSet) {
    mapSize++;
  }
  if (m_sendModeHasBeenSet) {
    mapSize++;
  }
  if (m_scheduledSendAtHasBeenSet) {
    mapSize++;
  }
  if (m_fieldValuesHasBeenSet) {
    mapSize++;
  }
  if (m_layoutPreviewsHasBeenSet) {
    mapSize++;
  }
  if (m_layoutHasBeenSet) {
    mapSize++;
  }
  if (m_activationIssuesHasBeenSet) {
    mapSize++;
  }
  if (m_publicUrlHasBeenSet) {
    mapSize++;
  }
  if (m_createdAtHasBeenSet) {
    mapSize++;
  }
  if (m_updatedAtHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Id"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_id.c_str()));
  }

  if (m_campaignIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_campaignId.c_str()));
  }

  if (m_categoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Category"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CampaignAssetCategoryMapper::GetNameForCampaignAssetCategory(m_category).c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_linkLabelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LinkLabel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_linkLabel.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CampaignAssetStateMapper::GetNameForCampaignAssetState(m_state).c_str()));
  }

  if (m_lastActivationStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastActivationStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AttemptStatusMapper::GetNameForAttemptStatus(m_lastActivationStatus).c_str()));
  }

  if (m_deliveryStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeliveryStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeliveryStatusMapper::GetNameForDeliveryStatus(m_deliveryStatus).c_str()));
  }

  if (m_deliveryStatusReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeliveryStatusReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        CampaignAssetStateReasonMapper::GetNameForCampaignAssetStateReason(m_deliveryStatusReason).c_str()));
  }

  if (m_sourceAssetTemplateIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceAssetTemplateId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceAssetTemplateId.c_str()));
  }

  if (m_socialPlatformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SocialPlatform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformMapper::GetNameForPlatform(m_socialPlatform).c_str()));
  }

  if (m_fileFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FileFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FileFormatMapper::GetNameForFileFormat(m_fileFormat).c_str()));
  }

  if (m_sendModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SendMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SendModeMapper::GetNameForSendMode(m_sendMode).c_str()));
  }

  if (m_scheduledSendAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScheduledSendAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_scheduledSendAt.Seconds());
  }

  if (m_fieldValuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FieldValues"));
    encoder.WriteArrayStart(m_fieldValues.size());
    for (const auto& item_0 : m_fieldValues) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_layoutPreviewsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LayoutPreviews"));
    encoder.WriteArrayStart(m_layoutPreviews.size());
    for (const auto& item_0 : m_layoutPreviews) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_layoutHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Layout"));
    m_layout.CborEncode(encoder);
  }

  if (m_activationIssuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActivationIssues"));
    encoder.WriteArrayStart(m_activationIssues.size());
    for (const auto& item_0 : m_activationIssues) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_publicUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublicUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_publicUrl.c_str()));
  }

  if (m_createdAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdAt.Seconds());
  }

  if (m_updatedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdatedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_updatedAt.Seconds());
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws