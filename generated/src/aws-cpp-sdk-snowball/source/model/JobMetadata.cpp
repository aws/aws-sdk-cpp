/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/JobMetadata.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

JobMetadata::JobMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

JobMetadata& JobMetadata::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "JobId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_jobId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_jobId = ss.str();
                  }
                }
                m_jobIdHasBeenSet = true;
              }

              else if (initialKeyStr == "JobState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_jobState =
                      JobStateMapper::GetJobStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_jobStateHasBeenSet = true;
              }

              else if (initialKeyStr == "JobType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_jobType =
                      JobTypeMapper::GetJobTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_jobTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "SnowballType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_snowballTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "CreationDate") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_creationDate = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_creationDate = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_creationDateHasBeenSet = true;
              }

              else if (initialKeyStr == "Resources") {
                m_resources = JobResource(decoder);
                m_resourcesHasBeenSet = true;
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

              else if (initialKeyStr == "KmsKeyARN") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_kmsKeyARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_kmsKeyARN = ss.str();
                  }
                }
                m_kmsKeyARNHasBeenSet = true;
              }

              else if (initialKeyStr == "RoleARN") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_roleARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_roleARN = ss.str();
                  }
                }
                m_roleARNHasBeenSet = true;
              }

              else if (initialKeyStr == "AddressId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_addressId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_addressId = ss.str();
                  }
                }
                m_addressIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ShippingDetails") {
                m_shippingDetails = ShippingDetails(decoder);
                m_shippingDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "SnowballCapacityPreference") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_snowballCapacityPreference = SnowballCapacityMapper::GetSnowballCapacityForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_snowballCapacityPreferenceHasBeenSet = true;
              }

              else if (initialKeyStr == "Notification") {
                m_notification = Notification(decoder);
                m_notificationHasBeenSet = true;
              }

              else if (initialKeyStr == "DataTransferProgress") {
                m_dataTransferProgress = DataTransfer(decoder);
                m_dataTransferProgressHasBeenSet = true;
              }

              else if (initialKeyStr == "JobLogInfo") {
                m_jobLogInfo = JobLogs(decoder);
                m_jobLogInfoHasBeenSet = true;
              }

              else if (initialKeyStr == "ClusterId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_clusterId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_clusterId = ss.str();
                  }
                }
                m_clusterIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ForwardingAddressId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_forwardingAddressId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_forwardingAddressId = ss.str();
                  }
                }
                m_forwardingAddressIdHasBeenSet = true;
              }

              else if (initialKeyStr == "TaxDocuments") {
                m_taxDocuments = TaxDocuments(decoder);
                m_taxDocumentsHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceConfiguration") {
                m_deviceConfiguration = DeviceConfiguration(decoder);
                m_deviceConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "RemoteManagement") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_remoteManagement = RemoteManagementMapper::GetRemoteManagementForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_remoteManagementHasBeenSet = true;
              }

              else if (initialKeyStr == "LongTermPricingId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_longTermPricingId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_longTermPricingId = ss.str();
                  }
                }
                m_longTermPricingIdHasBeenSet = true;
              }

              else if (initialKeyStr == "OnDeviceServiceConfiguration") {
                m_onDeviceServiceConfiguration = OnDeviceServiceConfiguration(decoder);
                m_onDeviceServiceConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "ImpactLevel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_impactLevel = ImpactLevelMapper::GetImpactLevelForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_impactLevelHasBeenSet = true;
              }

              else if (initialKeyStr == "PickupDetails") {
                m_pickupDetails = PickupDetails(decoder);
                m_pickupDetailsHasBeenSet = true;
              }

              else if (initialKeyStr == "SnowballId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_snowballId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_snowballId = ss.str();
                  }
                }
                m_snowballIdHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("JobMetadata", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "JobId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_jobId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_jobId = ss.str();
                }
              }
              m_jobIdHasBeenSet = true;
            }

            else if (initialKeyStr == "JobState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_jobState =
                    JobStateMapper::GetJobStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_jobStateHasBeenSet = true;
            }

            else if (initialKeyStr == "JobType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_jobType = JobTypeMapper::GetJobTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_jobTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "SnowballType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_snowballTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "CreationDate") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_creationDate = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_creationDate = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_creationDateHasBeenSet = true;
            }

            else if (initialKeyStr == "Resources") {
              m_resources = JobResource(decoder);
              m_resourcesHasBeenSet = true;
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

            else if (initialKeyStr == "KmsKeyARN") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_kmsKeyARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_kmsKeyARN = ss.str();
                }
              }
              m_kmsKeyARNHasBeenSet = true;
            }

            else if (initialKeyStr == "RoleARN") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_roleARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_roleARN = ss.str();
                }
              }
              m_roleARNHasBeenSet = true;
            }

            else if (initialKeyStr == "AddressId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_addressId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_addressId = ss.str();
                }
              }
              m_addressIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ShippingDetails") {
              m_shippingDetails = ShippingDetails(decoder);
              m_shippingDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "SnowballCapacityPreference") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_snowballCapacityPreference = SnowballCapacityMapper::GetSnowballCapacityForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_snowballCapacityPreferenceHasBeenSet = true;
            }

            else if (initialKeyStr == "Notification") {
              m_notification = Notification(decoder);
              m_notificationHasBeenSet = true;
            }

            else if (initialKeyStr == "DataTransferProgress") {
              m_dataTransferProgress = DataTransfer(decoder);
              m_dataTransferProgressHasBeenSet = true;
            }

            else if (initialKeyStr == "JobLogInfo") {
              m_jobLogInfo = JobLogs(decoder);
              m_jobLogInfoHasBeenSet = true;
            }

            else if (initialKeyStr == "ClusterId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_clusterId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_clusterId = ss.str();
                }
              }
              m_clusterIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ForwardingAddressId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_forwardingAddressId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_forwardingAddressId = ss.str();
                }
              }
              m_forwardingAddressIdHasBeenSet = true;
            }

            else if (initialKeyStr == "TaxDocuments") {
              m_taxDocuments = TaxDocuments(decoder);
              m_taxDocumentsHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceConfiguration") {
              m_deviceConfiguration = DeviceConfiguration(decoder);
              m_deviceConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "RemoteManagement") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_remoteManagement = RemoteManagementMapper::GetRemoteManagementForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_remoteManagementHasBeenSet = true;
            }

            else if (initialKeyStr == "LongTermPricingId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_longTermPricingId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_longTermPricingId = ss.str();
                }
              }
              m_longTermPricingIdHasBeenSet = true;
            }

            else if (initialKeyStr == "OnDeviceServiceConfiguration") {
              m_onDeviceServiceConfiguration = OnDeviceServiceConfiguration(decoder);
              m_onDeviceServiceConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "ImpactLevel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_impactLevel =
                    ImpactLevelMapper::GetImpactLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_impactLevelHasBeenSet = true;
            }

            else if (initialKeyStr == "PickupDetails") {
              m_pickupDetails = PickupDetails(decoder);
              m_pickupDetailsHasBeenSet = true;
            }

            else if (initialKeyStr == "SnowballId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_snowballId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_snowballId = ss.str();
                }
              }
              m_snowballIdHasBeenSet = true;
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

void JobMetadata::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_jobIdHasBeenSet) {
    mapSize++;
  }
  if (m_jobStateHasBeenSet) {
    mapSize++;
  }
  if (m_jobTypeHasBeenSet) {
    mapSize++;
  }
  if (m_snowballTypeHasBeenSet) {
    mapSize++;
  }
  if (m_creationDateHasBeenSet) {
    mapSize++;
  }
  if (m_resourcesHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyARNHasBeenSet) {
    mapSize++;
  }
  if (m_roleARNHasBeenSet) {
    mapSize++;
  }
  if (m_addressIdHasBeenSet) {
    mapSize++;
  }
  if (m_shippingDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_snowballCapacityPreferenceHasBeenSet) {
    mapSize++;
  }
  if (m_notificationHasBeenSet) {
    mapSize++;
  }
  if (m_dataTransferProgressHasBeenSet) {
    mapSize++;
  }
  if (m_jobLogInfoHasBeenSet) {
    mapSize++;
  }
  if (m_clusterIdHasBeenSet) {
    mapSize++;
  }
  if (m_forwardingAddressIdHasBeenSet) {
    mapSize++;
  }
  if (m_taxDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_deviceConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_remoteManagementHasBeenSet) {
    mapSize++;
  }
  if (m_longTermPricingIdHasBeenSet) {
    mapSize++;
  }
  if (m_onDeviceServiceConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_impactLevelHasBeenSet) {
    mapSize++;
  }
  if (m_pickupDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_snowballIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_jobIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_jobId.c_str()));
  }

  if (m_jobStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(JobStateMapper::GetNameForJobState(m_jobState).c_str()));
  }

  if (m_jobTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(JobTypeMapper::GetNameForJobType(m_jobType).c_str()));
  }

  if (m_snowballTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SnowballTypeMapper::GetNameForSnowballType(m_snowballType).c_str()));
  }

  if (m_creationDateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreationDate"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_creationDate.Seconds());
  }

  if (m_resourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Resources"));
    m_resources.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_kmsKeyARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyARN.c_str()));
  }

  if (m_roleARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleARN.c_str()));
  }

  if (m_addressIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AddressId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_addressId.c_str()));
  }

  if (m_shippingDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShippingDetails"));
    m_shippingDetails.CborEncode(encoder);
  }

  if (m_snowballCapacityPreferenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballCapacityPreference"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference).c_str()));
  }

  if (m_notificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Notification"));
    m_notification.CborEncode(encoder);
  }

  if (m_dataTransferProgressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataTransferProgress"));
    m_dataTransferProgress.CborEncode(encoder);
  }

  if (m_jobLogInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobLogInfo"));
    m_jobLogInfo.CborEncode(encoder);
  }

  if (m_clusterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterId.c_str()));
  }

  if (m_forwardingAddressIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ForwardingAddressId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_forwardingAddressId.c_str()));
  }

  if (m_taxDocumentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaxDocuments"));
    m_taxDocuments.CborEncode(encoder);
  }

  if (m_deviceConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceConfiguration"));
    m_deviceConfiguration.CborEncode(encoder);
  }

  if (m_remoteManagementHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoteManagement"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RemoteManagementMapper::GetNameForRemoteManagement(m_remoteManagement).c_str()));
  }

  if (m_longTermPricingIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LongTermPricingId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_longTermPricingId.c_str()));
  }

  if (m_onDeviceServiceConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnDeviceServiceConfiguration"));
    m_onDeviceServiceConfiguration.CborEncode(encoder);
  }

  if (m_impactLevelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImpactLevel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImpactLevelMapper::GetNameForImpactLevel(m_impactLevel).c_str()));
  }

  if (m_pickupDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PickupDetails"));
    m_pickupDetails.CborEncode(encoder);
  }

  if (m_snowballIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snowballId.c_str()));
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws