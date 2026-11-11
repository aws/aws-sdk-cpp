/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/WorkspaceCreationProperties.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

WorkspaceCreationProperties::WorkspaceCreationProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

WorkspaceCreationProperties& WorkspaceCreationProperties::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "EnableInternetAccess") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enableInternetAccess = val.value();
                }
                m_enableInternetAccessHasBeenSet = true;
              }

              else if (initialKeyStr == "DefaultOu") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_defaultOu = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_defaultOu = ss.str();
                  }
                }
                m_defaultOuHasBeenSet = true;
              }

              else if (initialKeyStr == "CustomSecurityGroupId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_customSecurityGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_customSecurityGroupId = ss.str();
                  }
                }
                m_customSecurityGroupIdHasBeenSet = true;
              }

              else if (initialKeyStr == "UserEnabledAsLocalAdministrator") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_userEnabledAsLocalAdministrator = val.value();
                }
                m_userEnabledAsLocalAdministratorHasBeenSet = true;
              }

              else if (initialKeyStr == "EnableMaintenanceMode") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enableMaintenanceMode = val.value();
                }
                m_enableMaintenanceModeHasBeenSet = true;
              }

              else if (initialKeyStr == "InstanceIamRoleArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceIamRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceIamRoleArn = ss.str();
                  }
                }
                m_instanceIamRoleArnHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("WorkspaceCreationProperties", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "EnableInternetAccess") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enableInternetAccess = val.value();
              }
              m_enableInternetAccessHasBeenSet = true;
            }

            else if (initialKeyStr == "DefaultOu") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_defaultOu = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_defaultOu = ss.str();
                }
              }
              m_defaultOuHasBeenSet = true;
            }

            else if (initialKeyStr == "CustomSecurityGroupId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_customSecurityGroupId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_customSecurityGroupId = ss.str();
                }
              }
              m_customSecurityGroupIdHasBeenSet = true;
            }

            else if (initialKeyStr == "UserEnabledAsLocalAdministrator") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_userEnabledAsLocalAdministrator = val.value();
              }
              m_userEnabledAsLocalAdministratorHasBeenSet = true;
            }

            else if (initialKeyStr == "EnableMaintenanceMode") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enableMaintenanceMode = val.value();
              }
              m_enableMaintenanceModeHasBeenSet = true;
            }

            else if (initialKeyStr == "InstanceIamRoleArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceIamRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceIamRoleArn = ss.str();
                }
              }
              m_instanceIamRoleArnHasBeenSet = true;
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

void WorkspaceCreationProperties::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_enableInternetAccessHasBeenSet) {
    mapSize++;
  }
  if (m_defaultOuHasBeenSet) {
    mapSize++;
  }
  if (m_customSecurityGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_userEnabledAsLocalAdministratorHasBeenSet) {
    mapSize++;
  }
  if (m_enableMaintenanceModeHasBeenSet) {
    mapSize++;
  }
  if (m_instanceIamRoleArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_enableInternetAccessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableInternetAccess"));
    encoder.WriteBool(m_enableInternetAccess);
  }

  if (m_defaultOuHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefaultOu"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_defaultOu.c_str()));
  }

  if (m_customSecurityGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomSecurityGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customSecurityGroupId.c_str()));
  }

  if (m_userEnabledAsLocalAdministratorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserEnabledAsLocalAdministrator"));
    encoder.WriteBool(m_userEnabledAsLocalAdministrator);
  }

  if (m_enableMaintenanceModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableMaintenanceMode"));
    encoder.WriteBool(m_enableMaintenanceMode);
  }

  if (m_instanceIamRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceIamRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceIamRoleArn.c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws