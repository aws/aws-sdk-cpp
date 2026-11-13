/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/GlobalAcceleratorForWorkSpace.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

GlobalAcceleratorForWorkSpace::GlobalAcceleratorForWorkSpace(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

GlobalAcceleratorForWorkSpace& GlobalAcceleratorForWorkSpace::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Mode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_mode = AGAModeForWorkSpaceEnumMapper::GetAGAModeForWorkSpaceEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_modeHasBeenSet = true;
              }

              else if (initialKeyStr == "PreferredProtocol") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_preferredProtocol = AGAPreferredProtocolForWorkSpaceMapper::GetAGAPreferredProtocolForWorkSpaceForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_preferredProtocolHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("GlobalAcceleratorForWorkSpace", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Mode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_mode = AGAModeForWorkSpaceEnumMapper::GetAGAModeForWorkSpaceEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_modeHasBeenSet = true;
            }

            else if (initialKeyStr == "PreferredProtocol") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_preferredProtocol = AGAPreferredProtocolForWorkSpaceMapper::GetAGAPreferredProtocolForWorkSpaceForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_preferredProtocolHasBeenSet = true;
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

void GlobalAcceleratorForWorkSpace::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_modeHasBeenSet) {
    mapSize++;
  }
  if (m_preferredProtocolHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_modeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Mode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AGAModeForWorkSpaceEnumMapper::GetNameForAGAModeForWorkSpaceEnum(m_mode).c_str()));
  }

  if (m_preferredProtocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreferredProtocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        AGAPreferredProtocolForWorkSpaceMapper::GetNameForAGAPreferredProtocolForWorkSpace(m_preferredProtocol).c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws