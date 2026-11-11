/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/ModificationState.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

ModificationState::ModificationState(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ModificationState& ModificationState::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Resource") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_resource = ModificationResourceEnumMapper::GetModificationResourceEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_resourceHasBeenSet = true;
              }

              else if (initialKeyStr == "State") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_state = ModificationStateEnumMapper::GetModificationStateEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ModificationState", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Resource") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_resource = ModificationResourceEnumMapper::GetModificationResourceEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_resourceHasBeenSet = true;
            }

            else if (initialKeyStr == "State") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_state = ModificationStateEnumMapper::GetModificationStateEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateHasBeenSet = true;
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

void ModificationState::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Resource"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ModificationResourceEnumMapper::GetNameForModificationResourceEnum(m_resource).c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ModificationStateEnumMapper::GetNameForModificationStateEnum(m_state).c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws