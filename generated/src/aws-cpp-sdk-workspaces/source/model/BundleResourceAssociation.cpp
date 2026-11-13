/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/BundleResourceAssociation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

BundleResourceAssociation::BundleResourceAssociation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

BundleResourceAssociation& BundleResourceAssociation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AssociatedResourceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_associatedResourceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_associatedResourceId = ss.str();
                  }
                }
                m_associatedResourceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "AssociatedResourceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_associatedResourceType = BundleAssociatedResourceTypeMapper::GetBundleAssociatedResourceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_associatedResourceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "BundleId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_bundleId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_bundleId = ss.str();
                  }
                }
                m_bundleIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Created") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_created = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_created = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdHasBeenSet = true;
              }

              else if (initialKeyStr == "LastUpdatedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastUpdatedTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastUpdatedTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastUpdatedTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = AssociationStateMapper::GetAssociationStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              }

              else if (initialKeyStr == "StateReason") {
                m_stateReason = AssociationStateReason(decoder);
                m_stateReasonHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("BundleResourceAssociation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AssociatedResourceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_associatedResourceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_associatedResourceId = ss.str();
                }
              }
              m_associatedResourceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "AssociatedResourceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_associatedResourceType = BundleAssociatedResourceTypeMapper::GetBundleAssociatedResourceTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_associatedResourceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "BundleId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_bundleId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_bundleId = ss.str();
                }
              }
              m_bundleIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Created") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_created = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_created = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdHasBeenSet = true;
            }

            else if (initialKeyStr == "LastUpdatedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastUpdatedTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastUpdatedTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastUpdatedTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = AssociationStateMapper::GetAssociationStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
            }

            else if (initialKeyStr == "StateReason") {
              m_stateReason = AssociationStateReason(decoder);
              m_stateReasonHasBeenSet = true;
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

void BundleResourceAssociation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_associatedResourceIdHasBeenSet) {
    mapSize++;
  }
  if (m_associatedResourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_bundleIdHasBeenSet) {
    mapSize++;
  }
  if (m_createdHasBeenSet) {
    mapSize++;
  }
  if (m_lastUpdatedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_stateReasonHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_associatedResourceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AssociatedResourceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_associatedResourceId.c_str()));
  }

  if (m_associatedResourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AssociatedResourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        BundleAssociatedResourceTypeMapper::GetNameForBundleAssociatedResourceType(m_associatedResourceType).c_str()));
  }

  if (m_bundleIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BundleId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bundleId.c_str()));
  }

  if (m_createdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Created"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_created.Seconds());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastUpdatedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastUpdatedTime.Seconds());
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AssociationStateMapper::GetNameForAssociationState(m_state).c_str()));
  }

  if (m_stateReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateReason"));
    m_stateReason.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws