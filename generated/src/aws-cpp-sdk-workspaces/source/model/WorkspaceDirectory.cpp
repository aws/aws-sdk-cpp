/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/WorkspaceDirectory.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

WorkspaceDirectory::WorkspaceDirectory(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WorkspaceDirectory& WorkspaceDirectory::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DirectoryId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directoryId = ss.str();
                  }
                }
                m_directoryIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Alias") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_alias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_alias = ss.str();
                  }
                }
                m_aliasHasBeenSet = true;
              }

              else if (initialKeyStr == "DirectoryName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directoryName = ss.str();
                  }
                }
                m_directoryNameHasBeenSet = true;
              }

              else if (initialKeyStr == "RegistrationCode") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_registrationCode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_registrationCode = ss.str();
                  }
                }
                m_registrationCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetIds") {
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
                              m_subnetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_subnetIds.push_back(ss_1.str());
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
                            m_subnetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_subnetIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_subnetIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsIpAddresses") {
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
                              m_dnsIpAddresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_dnsIpAddresses.push_back(ss_1.str());
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
                            m_dnsIpAddresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_dnsIpAddresses.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_dnsIpAddressesHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsIpv6Addresses") {
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
                              m_dnsIpv6Addresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_dnsIpv6Addresses.push_back(ss_1.str());
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
                            m_dnsIpv6Addresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_dnsIpv6Addresses.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_dnsIpv6AddressesHasBeenSet = true;
              }

              else if (initialKeyStr == "CustomerUserName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_customerUserName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_customerUserName = ss.str();
                  }
                }
                m_customerUserNameHasBeenSet = true;
              }

              else if (initialKeyStr == "IamRoleId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_iamRoleId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_iamRoleId = ss.str();
                  }
                }
                m_iamRoleIdHasBeenSet = true;
              }

              else if (initialKeyStr == "DirectoryType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_directoryType = WorkspaceDirectoryTypeMapper::GetWorkspaceDirectoryTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_directoryTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceSecurityGroupId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workspaceSecurityGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workspaceSecurityGroupId = ss.str();
                  }
                }
                m_workspaceSecurityGroupIdHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = WorkspaceDirectoryStateMapper::GetWorkspaceDirectoryStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceCreationProperties") {
                m_workspaceCreationProperties = DefaultWorkspaceCreationProperties(decoder);
                m_workspaceCreationPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "ipGroupIds") {
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
                              m_ipGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_ipGroupIds.push_back(ss_1.str());
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
                            m_ipGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_ipGroupIds.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_ipGroupIdsHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceAccessProperties") {
                m_workspaceAccessProperties = WorkspaceAccessProperties(decoder);
                m_workspaceAccessPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "Tenancy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_tenancy =
                      TenancyMapper::GetTenancyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_tenancyHasBeenSet = true;
              }

              else if (initialKeyStr == "SelfservicePermissions") {
                m_selfservicePermissions = SelfservicePermissions(decoder);
                m_selfservicePermissionsHasBeenSet = true;
              }

              else if (initialKeyStr == "SamlProperties") {
                m_samlProperties = SamlProperties(decoder);
                m_samlPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "CertificateBasedAuthProperties") {
                m_certificateBasedAuthProperties = CertificateBasedAuthProperties(decoder);
                m_certificateBasedAuthPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "EndpointEncryptionMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_endpointEncryptionMode = EndpointEncryptionModeMapper::GetEndpointEncryptionModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_endpointEncryptionModeHasBeenSet = true;
              }

              else if (initialKeyStr == "MicrosoftEntraConfig") {
                m_microsoftEntraConfig = MicrosoftEntraConfig(decoder);
                m_microsoftEntraConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceDirectoryName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workspaceDirectoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workspaceDirectoryName = ss.str();
                  }
                }
                m_workspaceDirectoryNameHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceDirectoryDescription") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workspaceDirectoryDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workspaceDirectoryDescription = ss.str();
                  }
                }
                m_workspaceDirectoryDescriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "UserIdentityType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_userIdentityType = UserIdentityTypeMapper::GetUserIdentityTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_userIdentityTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkspaceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_workspaceType = WorkspaceTypeMapper::GetWorkspaceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_workspaceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "IDCConfig") {
                m_iDCConfig = IDCConfig(decoder);
                m_iDCConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "ActiveDirectoryConfig") {
                m_activeDirectoryConfig = ActiveDirectoryConfig(decoder);
                m_activeDirectoryConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "StreamingProperties") {
                m_streamingProperties = StreamingProperties(decoder);
                m_streamingPropertiesHasBeenSet = true;
              }

              else if (initialKeyStr == "ErrorMessage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_errorMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_errorMessage = ss.str();
                  }
                }
                m_errorMessageHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WorkspaceDirectory", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DirectoryId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directoryId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directoryId = ss.str();
                }
              }
              m_directoryIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Alias") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_alias = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_alias = ss.str();
                }
              }
              m_aliasHasBeenSet = true;
            }

            else if (initialKeyStr == "DirectoryName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directoryName = ss.str();
                }
              }
              m_directoryNameHasBeenSet = true;
            }

            else if (initialKeyStr == "RegistrationCode") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_registrationCode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_registrationCode = ss.str();
                }
              }
              m_registrationCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetIds") {
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
                            m_subnetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_subnetIds.push_back(ss_1.str());
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
                          m_subnetIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_subnetIds.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_subnetIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsIpAddresses") {
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
                            m_dnsIpAddresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_dnsIpAddresses.push_back(ss_1.str());
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
                          m_dnsIpAddresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_dnsIpAddresses.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_dnsIpAddressesHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsIpv6Addresses") {
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
                            m_dnsIpv6Addresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_dnsIpv6Addresses.push_back(ss_1.str());
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
                          m_dnsIpv6Addresses.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_dnsIpv6Addresses.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_dnsIpv6AddressesHasBeenSet = true;
            }

            else if (initialKeyStr == "CustomerUserName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_customerUserName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_customerUserName = ss.str();
                }
              }
              m_customerUserNameHasBeenSet = true;
            }

            else if (initialKeyStr == "IamRoleId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_iamRoleId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_iamRoleId = ss.str();
                }
              }
              m_iamRoleIdHasBeenSet = true;
            }

            else if (initialKeyStr == "DirectoryType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_directoryType = WorkspaceDirectoryTypeMapper::GetWorkspaceDirectoryTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_directoryTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceSecurityGroupId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workspaceSecurityGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workspaceSecurityGroupId = ss.str();
                }
              }
              m_workspaceSecurityGroupIdHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = WorkspaceDirectoryStateMapper::GetWorkspaceDirectoryStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceCreationProperties") {
              m_workspaceCreationProperties = DefaultWorkspaceCreationProperties(decoder);
              m_workspaceCreationPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "ipGroupIds") {
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
                            m_ipGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_ipGroupIds.push_back(ss_1.str());
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
                          m_ipGroupIds.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_ipGroupIds.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_ipGroupIdsHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceAccessProperties") {
              m_workspaceAccessProperties = WorkspaceAccessProperties(decoder);
              m_workspaceAccessPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "Tenancy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_tenancy = TenancyMapper::GetTenancyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_tenancyHasBeenSet = true;
            }

            else if (initialKeyStr == "SelfservicePermissions") {
              m_selfservicePermissions = SelfservicePermissions(decoder);
              m_selfservicePermissionsHasBeenSet = true;
            }

            else if (initialKeyStr == "SamlProperties") {
              m_samlProperties = SamlProperties(decoder);
              m_samlPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "CertificateBasedAuthProperties") {
              m_certificateBasedAuthProperties = CertificateBasedAuthProperties(decoder);
              m_certificateBasedAuthPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "EndpointEncryptionMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_endpointEncryptionMode = EndpointEncryptionModeMapper::GetEndpointEncryptionModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_endpointEncryptionModeHasBeenSet = true;
            }

            else if (initialKeyStr == "MicrosoftEntraConfig") {
              m_microsoftEntraConfig = MicrosoftEntraConfig(decoder);
              m_microsoftEntraConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceDirectoryName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workspaceDirectoryName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workspaceDirectoryName = ss.str();
                }
              }
              m_workspaceDirectoryNameHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceDirectoryDescription") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workspaceDirectoryDescription = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workspaceDirectoryDescription = ss.str();
                }
              }
              m_workspaceDirectoryDescriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "UserIdentityType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_userIdentityType = UserIdentityTypeMapper::GetUserIdentityTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_userIdentityTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkspaceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_workspaceType = WorkspaceTypeMapper::GetWorkspaceTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_workspaceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "IDCConfig") {
              m_iDCConfig = IDCConfig(decoder);
              m_iDCConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "ActiveDirectoryConfig") {
              m_activeDirectoryConfig = ActiveDirectoryConfig(decoder);
              m_activeDirectoryConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "StreamingProperties") {
              m_streamingProperties = StreamingProperties(decoder);
              m_streamingPropertiesHasBeenSet = true;
            }

            else if (initialKeyStr == "ErrorMessage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_errorMessage = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_errorMessage = ss.str();
                }
              }
              m_errorMessageHasBeenSet = true;
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

void WorkspaceDirectory::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_aliasHasBeenSet) {
    mapSize++;
  }
  if (m_directoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_registrationCodeHasBeenSet) {
    mapSize++;
  }
  if (m_subnetIdsHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpAddressesHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpv6AddressesHasBeenSet) {
    mapSize++;
  }
  if (m_customerUserNameHasBeenSet) {
    mapSize++;
  }
  if (m_iamRoleIdHasBeenSet) {
    mapSize++;
  }
  if (m_directoryTypeHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceSecurityGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceCreationPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_ipGroupIdsHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceAccessPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_tenancyHasBeenSet) {
    mapSize++;
  }
  if (m_selfservicePermissionsHasBeenSet) {
    mapSize++;
  }
  if (m_samlPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_certificateBasedAuthPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_endpointEncryptionModeHasBeenSet) {
    mapSize++;
  }
  if (m_microsoftEntraConfigHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceDirectoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceDirectoryDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_userIdentityTypeHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_iDCConfigHasBeenSet) {
    mapSize++;
  }
  if (m_activeDirectoryConfigHasBeenSet) {
    mapSize++;
  }
  if (m_streamingPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_errorMessageHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_aliasHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Alias"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_alias.c_str()));
  }

  if (m_directoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryName.c_str()));
  }

  if (m_registrationCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegistrationCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_registrationCode.c_str()));
  }

  if (m_subnetIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetIds"));
    encoder.WriteArrayStart(m_subnetIds.size());
    for (const auto& item_0 : m_subnetIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_dnsIpAddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpAddresses"));
    encoder.WriteArrayStart(m_dnsIpAddresses.size());
    for (const auto& item_0 : m_dnsIpAddresses) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_dnsIpv6AddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpv6Addresses"));
    encoder.WriteArrayStart(m_dnsIpv6Addresses.size());
    for (const auto& item_0 : m_dnsIpv6Addresses) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_customerUserNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomerUserName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customerUserName.c_str()));
  }

  if (m_iamRoleIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IamRoleId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamRoleId.c_str()));
  }

  if (m_directoryTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(WorkspaceDirectoryTypeMapper::GetNameForWorkspaceDirectoryType(m_directoryType).c_str()));
  }

  if (m_workspaceSecurityGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceSecurityGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceSecurityGroupId.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WorkspaceDirectoryStateMapper::GetNameForWorkspaceDirectoryState(m_state).c_str()));
  }

  if (m_workspaceCreationPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceCreationProperties"));
    m_workspaceCreationProperties.CborEncode(encoder);
  }

  if (m_ipGroupIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ipGroupIds"));
    encoder.WriteArrayStart(m_ipGroupIds.size());
    for (const auto& item_0 : m_ipGroupIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_workspaceAccessPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceAccessProperties"));
    m_workspaceAccessProperties.CborEncode(encoder);
  }

  if (m_tenancyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tenancy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TenancyMapper::GetNameForTenancy(m_tenancy).c_str()));
  }

  if (m_selfservicePermissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SelfservicePermissions"));
    m_selfservicePermissions.CborEncode(encoder);
  }

  if (m_samlPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SamlProperties"));
    m_samlProperties.CborEncode(encoder);
  }

  if (m_certificateBasedAuthPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateBasedAuthProperties"));
    m_certificateBasedAuthProperties.CborEncode(encoder);
  }

  if (m_endpointEncryptionModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndpointEncryptionMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(EndpointEncryptionModeMapper::GetNameForEndpointEncryptionMode(m_endpointEncryptionMode).c_str()));
  }

  if (m_microsoftEntraConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MicrosoftEntraConfig"));
    m_microsoftEntraConfig.CborEncode(encoder);
  }

  if (m_workspaceDirectoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceDirectoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceDirectoryName.c_str()));
  }

  if (m_workspaceDirectoryDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceDirectoryDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceDirectoryDescription.c_str()));
  }

  if (m_userIdentityTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserIdentityType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UserIdentityTypeMapper::GetNameForUserIdentityType(m_userIdentityType).c_str()));
  }

  if (m_workspaceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WorkspaceTypeMapper::GetNameForWorkspaceType(m_workspaceType).c_str()));
  }

  if (m_iDCConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IDCConfig"));
    m_iDCConfig.CborEncode(encoder);
  }

  if (m_activeDirectoryConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActiveDirectoryConfig"));
    m_activeDirectoryConfig.CborEncode(encoder);
  }

  if (m_streamingPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StreamingProperties"));
    m_streamingProperties.CborEncode(encoder);
  }

  if (m_errorMessageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ErrorMessage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_errorMessage.c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws