/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/NFSOnDeviceServiceConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

NFSOnDeviceServiceConfiguration::NFSOnDeviceServiceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

NFSOnDeviceServiceConfiguration& NFSOnDeviceServiceConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StorageLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_storageLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_storageLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_storageLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "StorageUnit") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_storageUnit = StorageUnitMapper::GetStorageUnitForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_storageUnitHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("NFSOnDeviceServiceConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StorageLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_storageLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_storageLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_storageLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "StorageUnit") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_storageUnit =
                    StorageUnitMapper::GetStorageUnitForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_storageUnitHasBeenSet = true;
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

void NFSOnDeviceServiceConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_storageLimitHasBeenSet) {
    mapSize++;
  }
  if (m_storageUnitHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_storageLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageLimit"));
    (m_storageLimit >= 0) ? encoder.WriteUInt(m_storageLimit) : encoder.WriteNegInt(m_storageLimit);
  }

  if (m_storageUnitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageUnit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StorageUnitMapper::GetNameForStorageUnit(m_storageUnit).c_str()));
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws