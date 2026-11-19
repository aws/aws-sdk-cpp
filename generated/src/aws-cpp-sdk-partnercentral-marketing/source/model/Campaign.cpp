/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/Campaign.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

Campaign::Campaign(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Campaign& Campaign::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "CampaignId") {
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

              else if (initialKeyStr == "Arn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_arn = ss.str();
                  }
                }
                m_arnHasBeenSet = true;
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

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = CampaignStateMapper::GetCampaignStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "CampaignTemplateId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_campaignTemplateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_campaignTemplateId = ss.str();
                  }
                }
                m_campaignTemplateIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Language") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_language = AssetLanguageMapper::GetAssetLanguageForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageHasBeenSet = true;
              }

              else if (initialKeyStr == "PartnerProfile") {
                m_partnerProfile = PartnerProfileBranding(decoder);
                m_partnerProfileHasBeenSet = true;
              }

              else if (initialKeyStr == "SenderEmail") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_senderEmail = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_senderEmail = ss.str();
                  }
                }
                m_senderEmailHasBeenSet = true;
              }

              else if (initialKeyStr == "PrivacyPolicyUrl") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_privacyPolicyUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_privacyPolicyUrl = ss.str();
                  }
                }
                m_privacyPolicyUrlHasBeenSet = true;
              }

              else if (initialKeyStr == "PartnerAddress") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_partnerAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_partnerAddress = ss.str();
                  }
                }
                m_partnerAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "PartnerBadge") {
                m_partnerBadge = PartnerBadgeDetail(decoder);
                m_partnerBadgeHasBeenSet = true;
              }

              else if (initialKeyStr == "EmailTarget") {
                m_emailTarget = EmailTargetDetail(decoder);
                m_emailTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "EmailTargetEngagementGroupIds") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_emailTargetEngagementGroupIds.push_back(
                                  Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_emailTargetEngagementGroupIds.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
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
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_emailTargetEngagementGroupIds.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_emailTargetEngagementGroupIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_emailTargetEngagementGroupIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "SocialConnections") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto nestedList_1 = Vector<Aws::String>();
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1.has_value() &&
                              (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                            if (peekType_1.value() == CborType::ArrayStart) {
                              auto listSize_1 = decoder->PopNextArrayStart();
                              if (listSize_1.has_value()) {
                                for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                  auto peekType_2 = decoder->PeekType();
                                  if (peekType_2.has_value()) {
                                    if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        nestedList_1.push_back(
                                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                      }
                                    } else {
                                      decoder->ConsumeNextSingleElement();
                                      Aws::StringStream ss_2;
                                      while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                        auto nextType_2 = decoder->PeekType();
                                        if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                          if (nextType_2.has_value()) {
                                            decoder->ConsumeNextSingleElement();  // consume the Break
                                          }
                                          break;
                                        }
                                        auto val = decoder->PopNextTextVal();
                                        if (val.has_value()) {
                                          ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                        }
                                      }
                                      nestedList_1.push_back(ss_2.str());
                                      ss_2.clear();
                                    }
                                  }
                                }
                              }
                            } else  // IndefArrayStart
                            {
                              decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                              while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                auto nextType_1 = decoder->PeekType();
                                if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                  if (nextType_1.has_value()) {
                                    decoder->ConsumeNextSingleElement();  // consume the Break
                                  }
                                  break;
                                }
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                            m_socialConnections[PlatformMapper::GetPlatformForName(keyStr_1)] = nestedList_1;
                          }
                        }
                      }
                    }
                  } else  // IndefMapStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                          } else  // IndefArrayStart
                          {
                            decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_socialConnections[PlatformMapper::GetPlatformForName(keyStr_1)] = nestedList_1;
                        }
                      }
                    }
                  }
                }
                m_socialConnectionsHasBeenSet = true;
              }

              else if (initialKeyStr == "EstimatedBudget") {
                m_estimatedBudget = MonetaryValue(decoder);
                m_estimatedBudgetHasBeenSet = true;
              }

              else if (initialKeyStr == "TotalBudget") {
                m_totalBudget = MonetaryValue(decoder);
                m_totalBudgetHasBeenSet = true;
              }

              else if (initialKeyStr == "TargetAudience") {
                m_targetAudience = TargetAudience(decoder);
                m_targetAudienceHasBeenSet = true;
              }

              else if (initialKeyStr == "StartOn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_startOn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_startOn = ss.str();
                  }
                }
                m_startOnHasBeenSet = true;
              }

              else if (initialKeyStr == "EndOn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_endOn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_endOn = ss.str();
                  }
                }
                m_endOnHasBeenSet = true;
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
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Campaign", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "CampaignId") {
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

            else if (initialKeyStr == "Arn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_arn = ss.str();
                }
              }
              m_arnHasBeenSet = true;
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

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = CampaignStateMapper::GetCampaignStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "CampaignTemplateId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_campaignTemplateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_campaignTemplateId = ss.str();
                }
              }
              m_campaignTemplateIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Language") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_language = AssetLanguageMapper::GetAssetLanguageForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageHasBeenSet = true;
            }

            else if (initialKeyStr == "PartnerProfile") {
              m_partnerProfile = PartnerProfileBranding(decoder);
              m_partnerProfileHasBeenSet = true;
            }

            else if (initialKeyStr == "SenderEmail") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_senderEmail = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_senderEmail = ss.str();
                }
              }
              m_senderEmailHasBeenSet = true;
            }

            else if (initialKeyStr == "PrivacyPolicyUrl") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_privacyPolicyUrl = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_privacyPolicyUrl = ss.str();
                }
              }
              m_privacyPolicyUrlHasBeenSet = true;
            }

            else if (initialKeyStr == "PartnerAddress") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_partnerAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_partnerAddress = ss.str();
                }
              }
              m_partnerAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "PartnerBadge") {
              m_partnerBadge = PartnerBadgeDetail(decoder);
              m_partnerBadgeHasBeenSet = true;
            }

            else if (initialKeyStr == "EmailTarget") {
              m_emailTarget = EmailTargetDetail(decoder);
              m_emailTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "EmailTargetEngagementGroupIds") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_emailTargetEngagementGroupIds.push_back(
                                Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_emailTargetEngagementGroupIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
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
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_emailTargetEngagementGroupIds.push_back(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_emailTargetEngagementGroupIds.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_emailTargetEngagementGroupIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "SocialConnections") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto nestedList_1 = Vector<Aws::String>();
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value() &&
                            (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                          if (peekType_1.value() == CborType::ArrayStart) {
                            auto listSize_1 = decoder->PopNextArrayStart();
                            if (listSize_1.has_value()) {
                              for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                                auto peekType_2 = decoder->PeekType();
                                if (peekType_2.has_value()) {
                                  if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                    }
                                  } else {
                                    decoder->ConsumeNextSingleElement();
                                    Aws::StringStream ss_2;
                                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                      auto nextType_2 = decoder->PeekType();
                                      if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                        if (nextType_2.has_value()) {
                                          decoder->ConsumeNextSingleElement();  // consume the Break
                                        }
                                        break;
                                      }
                                      auto val = decoder->PopNextTextVal();
                                      if (val.has_value()) {
                                        ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                      }
                                    }
                                    nestedList_1.push_back(ss_2.str());
                                    ss_2.clear();
                                  }
                                }
                              }
                            }
                          } else  // IndefArrayStart
                          {
                            decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                          m_socialConnections[PlatformMapper::GetPlatformForName(keyStr_1)] = nestedList_1;
                        }
                      }
                    }
                  }
                } else  // IndefMapStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto key_1 = decoder->PopNextTextVal();
                    if (key_1.has_value()) {
                      Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                      auto nestedList_1 = Vector<Aws::String>();
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value() &&
                          (peekType_1.value() == CborType::ArrayStart || peekType_1.value() == CborType::IndefArrayStart)) {
                        if (peekType_1.value() == CborType::ArrayStart) {
                          auto listSize_1 = decoder->PopNextArrayStart();
                          if (listSize_1.has_value()) {
                            for (size_t j_1 = 0; j_1 < listSize_1.value(); j_1++) {
                              auto peekType_2 = decoder->PeekType();
                              if (peekType_2.has_value()) {
                                if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                  }
                                } else {
                                  decoder->ConsumeNextSingleElement();
                                  Aws::StringStream ss_2;
                                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                    auto nextType_2 = decoder->PeekType();
                                    if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                      if (nextType_2.has_value()) {
                                        decoder->ConsumeNextSingleElement();  // consume the Break
                                      }
                                      break;
                                    }
                                    auto val = decoder->PopNextTextVal();
                                    if (val.has_value()) {
                                      ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                    }
                                  }
                                  nestedList_1.push_back(ss_2.str());
                                  ss_2.clear();
                                }
                              }
                            }
                          }
                        } else  // IndefArrayStart
                        {
                          decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto peekType_2 = decoder->PeekType();
                            if (peekType_2.has_value()) {
                              if (peekType_2.value() == Aws::Crt::Cbor::CborType::Text) {
                                auto val = decoder->PopNextTextVal();
                                if (val.has_value()) {
                                  nestedList_1.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                                }
                              } else {
                                decoder->ConsumeNextSingleElement();
                                Aws::StringStream ss_2;
                                while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                                  auto nextType_2 = decoder->PeekType();
                                  if (!nextType_2.has_value() || nextType_2.value() == CborType::Break) {
                                    if (nextType_2.has_value()) {
                                      decoder->ConsumeNextSingleElement();  // consume the Break
                                    }
                                    break;
                                  }
                                  auto val = decoder->PopNextTextVal();
                                  if (val.has_value()) {
                                    ss_2 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                                  }
                                }
                                nestedList_1.push_back(ss_2.str());
                                ss_2.clear();
                              }
                            }
                          }
                        }
                        m_socialConnections[PlatformMapper::GetPlatformForName(keyStr_1)] = nestedList_1;
                      }
                    }
                  }
                }
              }
              m_socialConnectionsHasBeenSet = true;
            }

            else if (initialKeyStr == "EstimatedBudget") {
              m_estimatedBudget = MonetaryValue(decoder);
              m_estimatedBudgetHasBeenSet = true;
            }

            else if (initialKeyStr == "TotalBudget") {
              m_totalBudget = MonetaryValue(decoder);
              m_totalBudgetHasBeenSet = true;
            }

            else if (initialKeyStr == "TargetAudience") {
              m_targetAudience = TargetAudience(decoder);
              m_targetAudienceHasBeenSet = true;
            }

            else if (initialKeyStr == "StartOn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_startOn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_startOn = ss.str();
                }
              }
              m_startOnHasBeenSet = true;
            }

            else if (initialKeyStr == "EndOn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_endOn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_endOn = ss.str();
                }
              }
              m_endOnHasBeenSet = true;
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

void Campaign::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_campaignIdHasBeenSet) {
    mapSize++;
  }
  if (m_arnHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_campaignTemplateIdHasBeenSet) {
    mapSize++;
  }
  if (m_languageHasBeenSet) {
    mapSize++;
  }
  if (m_partnerProfileHasBeenSet) {
    mapSize++;
  }
  if (m_senderEmailHasBeenSet) {
    mapSize++;
  }
  if (m_privacyPolicyUrlHasBeenSet) {
    mapSize++;
  }
  if (m_partnerAddressHasBeenSet) {
    mapSize++;
  }
  if (m_partnerBadgeHasBeenSet) {
    mapSize++;
  }
  if (m_emailTargetHasBeenSet) {
    mapSize++;
  }
  if (m_emailTargetEngagementGroupIdsHasBeenSet) {
    mapSize++;
  }
  if (m_socialConnectionsHasBeenSet) {
    mapSize++;
  }
  if (m_estimatedBudgetHasBeenSet) {
    mapSize++;
  }
  if (m_totalBudgetHasBeenSet) {
    mapSize++;
  }
  if (m_targetAudienceHasBeenSet) {
    mapSize++;
  }
  if (m_startOnHasBeenSet) {
    mapSize++;
  }
  if (m_endOnHasBeenSet) {
    mapSize++;
  }
  if (m_createdAtHasBeenSet) {
    mapSize++;
  }
  if (m_updatedAtHasBeenSet) {
    mapSize++;
  }
  if (m_activationIssuesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_campaignIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_campaignId.c_str()));
  }

  if (m_arnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_arn.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CampaignStateMapper::GetNameForCampaignState(m_state).c_str()));
  }

  if (m_campaignTemplateIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignTemplateId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_campaignTemplateId.c_str()));
  }

  if (m_languageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Language"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AssetLanguageMapper::GetNameForAssetLanguage(m_language).c_str()));
  }

  if (m_partnerProfileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerProfile"));
    m_partnerProfile.CborEncode(encoder);
  }

  if (m_senderEmailHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SenderEmail"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_senderEmail.c_str()));
  }

  if (m_privacyPolicyUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyPolicyUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_privacyPolicyUrl.c_str()));
  }

  if (m_partnerAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_partnerAddress.c_str()));
  }

  if (m_partnerBadgeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerBadge"));
    m_partnerBadge.CborEncode(encoder);
  }

  if (m_emailTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EmailTarget"));
    m_emailTarget.CborEncode(encoder);
  }

  if (m_emailTargetEngagementGroupIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EmailTargetEngagementGroupIds"));
    encoder.WriteArrayStart(m_emailTargetEngagementGroupIds.size());
    for (const auto& item_0 : m_emailTargetEngagementGroupIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_socialConnectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SocialConnections"));
    encoder.WriteMapStart(m_socialConnections.size());
    for (const auto& item_0 : m_socialConnections) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformMapper::GetNameForPlatform(item_0.first).c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_estimatedBudgetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EstimatedBudget"));
    m_estimatedBudget.CborEncode(encoder);
  }

  if (m_totalBudgetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalBudget"));
    m_totalBudget.CborEncode(encoder);
  }

  if (m_targetAudienceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetAudience"));
    m_targetAudience.CborEncode(encoder);
  }

  if (m_startOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_startOn.c_str()));
  }

  if (m_endOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_endOn.c_str()));
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

  if (m_activationIssuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActivationIssues"));
    encoder.WriteArrayStart(m_activationIssues.size());
    for (const auto& item_0 : m_activationIssues) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws