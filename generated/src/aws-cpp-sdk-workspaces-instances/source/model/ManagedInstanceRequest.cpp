/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/ManagedInstanceRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

ManagedInstanceRequest::ManagedInstanceRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ManagedInstanceRequest& ManagedInstanceRequest::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BlockDeviceMappings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_blockDeviceMappings.push_back(BlockDeviceMappingRequest(decoder));
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
                      m_blockDeviceMappings.push_back(BlockDeviceMappingRequest(decoder));
                    }
                  }
                }
                m_blockDeviceMappingsHasBeenSet = true;
              }

              else if (initialKeyStr == "CapacityReservationSpecification") {
                m_capacityReservationSpecification = CapacityReservationSpecification(decoder);
                m_capacityReservationSpecificationHasBeenSet = true;
              }

              else if (initialKeyStr == "CpuOptions") {
                m_cpuOptions = CpuOptionsRequest(decoder);
                m_cpuOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "CreditSpecification") {
                m_creditSpecification = CreditSpecificationRequest(decoder);
                m_creditSpecificationHasBeenSet = true;
              }

              else if (initialKeyStr == "DisableApiStop") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_disableApiStop = val.value();
                }
                m_disableApiStopHasBeenSet = true;
              }

              else if (initialKeyStr == "EbsOptimized") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_ebsOptimized = val.value();
                }
                m_ebsOptimizedHasBeenSet = true;
              }

              else if (initialKeyStr == "EnablePrimaryIpv6") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enablePrimaryIpv6 = val.value();
                }
                m_enablePrimaryIpv6HasBeenSet = true;
              }

              else if (initialKeyStr == "EnclaveOptions") {
                m_enclaveOptions = EnclaveOptionsRequest(decoder);
                m_enclaveOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "HibernationOptions") {
                m_hibernationOptions = HibernationOptionsRequest(decoder);
                m_hibernationOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "IamInstanceProfile") {
                m_iamInstanceProfile = IamInstanceProfileSpecification(decoder);
                m_iamInstanceProfileHasBeenSet = true;
              }

              else if (initialKeyStr == "ImageId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_imageId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_imageId = ss.str();
                  }
                }
                m_imageIdHasBeenSet = true;
              }

              else if (initialKeyStr == "InstanceMarketOptions") {
                m_instanceMarketOptions = InstanceMarketOptionsRequest(decoder);
                m_instanceMarketOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "InstanceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceType = ss.str();
                  }
                }
                m_instanceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6Addresses") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
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
                      m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                    }
                  }
                }
                m_ipv6AddressesHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6AddressCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_ipv6AddressCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_ipv6AddressCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_ipv6AddressCountHasBeenSet = true;
              }

              else if (initialKeyStr == "KernelId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_kernelId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_kernelId = ss.str();
                  }
                }
                m_kernelIdHasBeenSet = true;
              }

              else if (initialKeyStr == "KeyName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_keyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_keyName = ss.str();
                  }
                }
                m_keyNameHasBeenSet = true;
              }

              else if (initialKeyStr == "LicenseSpecifications") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_licenseSpecifications.push_back(LicenseConfigurationRequest(decoder));
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
                      m_licenseSpecifications.push_back(LicenseConfigurationRequest(decoder));
                    }
                  }
                }
                m_licenseSpecificationsHasBeenSet = true;
              }

              else if (initialKeyStr == "MaintenanceOptions") {
                m_maintenanceOptions = InstanceMaintenanceOptionsRequest(decoder);
                m_maintenanceOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "MetadataOptions") {
                m_metadataOptions = InstanceMetadataOptionsRequest(decoder);
                m_metadataOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "Monitoring") {
                m_monitoring = RunInstancesMonitoringEnabled(decoder);
                m_monitoringHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkInterfaces") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_networkInterfaces.push_back(InstanceNetworkInterfaceSpecification(decoder));
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
                      m_networkInterfaces.push_back(InstanceNetworkInterfaceSpecification(decoder));
                    }
                  }
                }
                m_networkInterfacesHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkPerformanceOptions") {
                m_networkPerformanceOptions = InstanceNetworkPerformanceOptionsRequest(decoder);
                m_networkPerformanceOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "Placement") {
                m_placement = Placement(decoder);
                m_placementHasBeenSet = true;
              }

              else if (initialKeyStr == "PrivateDnsNameOptions") {
                m_privateDnsNameOptions = PrivateDnsNameOptionsRequest(decoder);
                m_privateDnsNameOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "PrivateIpAddress") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_privateIpAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_privateIpAddress = ss.str();
                  }
                }
                m_privateIpAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "RamdiskId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ramdiskId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ramdiskId = ss.str();
                  }
                }
                m_ramdiskIdHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityGroupIds") {
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
                              m_securityGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_securityGroupIds.push_back(ss_1.str());
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
                            m_securityGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_securityGroupIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_securityGroupIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityGroups") {
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
                              m_securityGroups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_securityGroups.push_back(ss_1.str());
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
                            m_securityGroups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_securityGroups.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_securityGroupsHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_subnetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_subnetId = ss.str();
                  }
                }
                m_subnetIdHasBeenSet = true;
              }

              else if (initialKeyStr == "TagSpecifications") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tagSpecifications.push_back(TagSpecification(decoder));
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
                      m_tagSpecifications.push_back(TagSpecification(decoder));
                    }
                  }
                }
                m_tagSpecificationsHasBeenSet = true;
              }

              else if (initialKeyStr == "UserData") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_userData = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_userData = ss.str();
                  }
                }
                m_userDataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ManagedInstanceRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BlockDeviceMappings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_blockDeviceMappings.push_back(BlockDeviceMappingRequest(decoder));
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
                    m_blockDeviceMappings.push_back(BlockDeviceMappingRequest(decoder));
                  }
                }
              }
              m_blockDeviceMappingsHasBeenSet = true;
            }

            else if (initialKeyStr == "CapacityReservationSpecification") {
              m_capacityReservationSpecification = CapacityReservationSpecification(decoder);
              m_capacityReservationSpecificationHasBeenSet = true;
            }

            else if (initialKeyStr == "CpuOptions") {
              m_cpuOptions = CpuOptionsRequest(decoder);
              m_cpuOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "CreditSpecification") {
              m_creditSpecification = CreditSpecificationRequest(decoder);
              m_creditSpecificationHasBeenSet = true;
            }

            else if (initialKeyStr == "DisableApiStop") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_disableApiStop = val.value();
              }
              m_disableApiStopHasBeenSet = true;
            }

            else if (initialKeyStr == "EbsOptimized") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_ebsOptimized = val.value();
              }
              m_ebsOptimizedHasBeenSet = true;
            }

            else if (initialKeyStr == "EnablePrimaryIpv6") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enablePrimaryIpv6 = val.value();
              }
              m_enablePrimaryIpv6HasBeenSet = true;
            }

            else if (initialKeyStr == "EnclaveOptions") {
              m_enclaveOptions = EnclaveOptionsRequest(decoder);
              m_enclaveOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "HibernationOptions") {
              m_hibernationOptions = HibernationOptionsRequest(decoder);
              m_hibernationOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "IamInstanceProfile") {
              m_iamInstanceProfile = IamInstanceProfileSpecification(decoder);
              m_iamInstanceProfileHasBeenSet = true;
            }

            else if (initialKeyStr == "ImageId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_imageId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_imageId = ss.str();
                }
              }
              m_imageIdHasBeenSet = true;
            }

            else if (initialKeyStr == "InstanceMarketOptions") {
              m_instanceMarketOptions = InstanceMarketOptionsRequest(decoder);
              m_instanceMarketOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "InstanceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceType = ss.str();
                }
              }
              m_instanceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6Addresses") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
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
                    m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                  }
                }
              }
              m_ipv6AddressesHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6AddressCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_ipv6AddressCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_ipv6AddressCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_ipv6AddressCountHasBeenSet = true;
            }

            else if (initialKeyStr == "KernelId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_kernelId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_kernelId = ss.str();
                }
              }
              m_kernelIdHasBeenSet = true;
            }

            else if (initialKeyStr == "KeyName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_keyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_keyName = ss.str();
                }
              }
              m_keyNameHasBeenSet = true;
            }

            else if (initialKeyStr == "LicenseSpecifications") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_licenseSpecifications.push_back(LicenseConfigurationRequest(decoder));
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
                    m_licenseSpecifications.push_back(LicenseConfigurationRequest(decoder));
                  }
                }
              }
              m_licenseSpecificationsHasBeenSet = true;
            }

            else if (initialKeyStr == "MaintenanceOptions") {
              m_maintenanceOptions = InstanceMaintenanceOptionsRequest(decoder);
              m_maintenanceOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "MetadataOptions") {
              m_metadataOptions = InstanceMetadataOptionsRequest(decoder);
              m_metadataOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "Monitoring") {
              m_monitoring = RunInstancesMonitoringEnabled(decoder);
              m_monitoringHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkInterfaces") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_networkInterfaces.push_back(InstanceNetworkInterfaceSpecification(decoder));
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
                    m_networkInterfaces.push_back(InstanceNetworkInterfaceSpecification(decoder));
                  }
                }
              }
              m_networkInterfacesHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkPerformanceOptions") {
              m_networkPerformanceOptions = InstanceNetworkPerformanceOptionsRequest(decoder);
              m_networkPerformanceOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "Placement") {
              m_placement = Placement(decoder);
              m_placementHasBeenSet = true;
            }

            else if (initialKeyStr == "PrivateDnsNameOptions") {
              m_privateDnsNameOptions = PrivateDnsNameOptionsRequest(decoder);
              m_privateDnsNameOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "PrivateIpAddress") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_privateIpAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_privateIpAddress = ss.str();
                }
              }
              m_privateIpAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "RamdiskId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ramdiskId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ramdiskId = ss.str();
                }
              }
              m_ramdiskIdHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityGroupIds") {
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
                            m_securityGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_securityGroupIds.push_back(ss_1.str());
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
                          m_securityGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_securityGroupIds.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_securityGroupIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityGroups") {
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
                            m_securityGroups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_securityGroups.push_back(ss_1.str());
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
                          m_securityGroups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_securityGroups.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_securityGroupsHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_subnetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_subnetId = ss.str();
                }
              }
              m_subnetIdHasBeenSet = true;
            }

            else if (initialKeyStr == "TagSpecifications") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tagSpecifications.push_back(TagSpecification(decoder));
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
                    m_tagSpecifications.push_back(TagSpecification(decoder));
                  }
                }
              }
              m_tagSpecificationsHasBeenSet = true;
            }

            else if (initialKeyStr == "UserData") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_userData = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_userData = ss.str();
                }
              }
              m_userDataHasBeenSet = true;
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

void ManagedInstanceRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_blockDeviceMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_capacityReservationSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_cpuOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_creditSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_disableApiStopHasBeenSet) {
    mapSize++;
  }
  if (m_ebsOptimizedHasBeenSet) {
    mapSize++;
  }
  if (m_enablePrimaryIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_enclaveOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_hibernationOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_iamInstanceProfileHasBeenSet) {
    mapSize++;
  }
  if (m_imageIdHasBeenSet) {
    mapSize++;
  }
  if (m_instanceMarketOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6AddressesHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6AddressCountHasBeenSet) {
    mapSize++;
  }
  if (m_kernelIdHasBeenSet) {
    mapSize++;
  }
  if (m_keyNameHasBeenSet) {
    mapSize++;
  }
  if (m_licenseSpecificationsHasBeenSet) {
    mapSize++;
  }
  if (m_maintenanceOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_metadataOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_monitoringHasBeenSet) {
    mapSize++;
  }
  if (m_networkInterfacesHasBeenSet) {
    mapSize++;
  }
  if (m_networkPerformanceOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_placementHasBeenSet) {
    mapSize++;
  }
  if (m_privateDnsNameOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_privateIpAddressHasBeenSet) {
    mapSize++;
  }
  if (m_ramdiskIdHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupIdsHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_subnetIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagSpecificationsHasBeenSet) {
    mapSize++;
  }
  if (m_userDataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_blockDeviceMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BlockDeviceMappings"));
    encoder.WriteArrayStart(m_blockDeviceMappings.size());
    for (const auto& item_0 : m_blockDeviceMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_capacityReservationSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CapacityReservationSpecification"));
    m_capacityReservationSpecification.CborEncode(encoder);
  }

  if (m_cpuOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CpuOptions"));
    m_cpuOptions.CborEncode(encoder);
  }

  if (m_creditSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreditSpecification"));
    m_creditSpecification.CborEncode(encoder);
  }

  if (m_disableApiStopHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisableApiStop"));
    encoder.WriteBool(m_disableApiStop);
  }

  if (m_ebsOptimizedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EbsOptimized"));
    encoder.WriteBool(m_ebsOptimized);
  }

  if (m_enablePrimaryIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnablePrimaryIpv6"));
    encoder.WriteBool(m_enablePrimaryIpv6);
  }

  if (m_enclaveOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnclaveOptions"));
    m_enclaveOptions.CborEncode(encoder);
  }

  if (m_hibernationOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HibernationOptions"));
    m_hibernationOptions.CborEncode(encoder);
  }

  if (m_iamInstanceProfileHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IamInstanceProfile"));
    m_iamInstanceProfile.CborEncode(encoder);
  }

  if (m_imageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageId.c_str()));
  }

  if (m_instanceMarketOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceMarketOptions"));
    m_instanceMarketOptions.CborEncode(encoder);
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }

  if (m_ipv6AddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6Addresses"));
    encoder.WriteArrayStart(m_ipv6Addresses.size());
    for (const auto& item_0 : m_ipv6Addresses) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ipv6AddressCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6AddressCount"));
    (m_ipv6AddressCount >= 0) ? encoder.WriteUInt(m_ipv6AddressCount) : encoder.WriteNegInt(m_ipv6AddressCount);
  }

  if (m_kernelIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KernelId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kernelId.c_str()));
  }

  if (m_keyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_keyName.c_str()));
  }

  if (m_licenseSpecificationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LicenseSpecifications"));
    encoder.WriteArrayStart(m_licenseSpecifications.size());
    for (const auto& item_0 : m_licenseSpecifications) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_maintenanceOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaintenanceOptions"));
    m_maintenanceOptions.CborEncode(encoder);
  }

  if (m_metadataOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetadataOptions"));
    m_metadataOptions.CborEncode(encoder);
  }

  if (m_monitoringHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Monitoring"));
    m_monitoring.CborEncode(encoder);
  }

  if (m_networkInterfacesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkInterfaces"));
    encoder.WriteArrayStart(m_networkInterfaces.size());
    for (const auto& item_0 : m_networkInterfaces) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_networkPerformanceOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkPerformanceOptions"));
    m_networkPerformanceOptions.CborEncode(encoder);
  }

  if (m_placementHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Placement"));
    m_placement.CborEncode(encoder);
  }

  if (m_privateDnsNameOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivateDnsNameOptions"));
    m_privateDnsNameOptions.CborEncode(encoder);
  }

  if (m_privateIpAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivateIpAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_privateIpAddress.c_str()));
  }

  if (m_ramdiskIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RamdiskId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ramdiskId.c_str()));
  }

  if (m_securityGroupIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroupIds"));
    encoder.WriteArrayStart(m_securityGroupIds.size());
    for (const auto& item_0 : m_securityGroupIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_securityGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroups"));
    encoder.WriteArrayStart(m_securityGroups.size());
    for (const auto& item_0 : m_securityGroups) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_subnetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subnetId.c_str()));
  }

  if (m_tagSpecificationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagSpecifications"));
    encoder.WriteArrayStart(m_tagSpecifications.size());
    for (const auto& item_0 : m_tagSpecifications) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_userDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_userData.c_str()));
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws