/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/DataTransfer.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

DataTransfer::DataTransfer(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DataTransfer& DataTransfer::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BytesTransferred") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_bytesTransferred = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_bytesTransferred = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_bytesTransferredHasBeenSet = true;
              }

              else if (initialKeyStr == "ObjectsTransferred") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_objectsTransferred = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_objectsTransferred = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_objectsTransferredHasBeenSet = true;
              }

              else if (initialKeyStr == "TotalBytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_totalBytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_totalBytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_totalBytesHasBeenSet = true;
              }

              else if (initialKeyStr == "TotalObjects") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_totalObjects = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_totalObjects = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_totalObjectsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DataTransfer", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BytesTransferred") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_bytesTransferred = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_bytesTransferred = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_bytesTransferredHasBeenSet = true;
            }

            else if (initialKeyStr == "ObjectsTransferred") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_objectsTransferred = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_objectsTransferred = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_objectsTransferredHasBeenSet = true;
            }

            else if (initialKeyStr == "TotalBytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_totalBytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_totalBytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_totalBytesHasBeenSet = true;
            }

            else if (initialKeyStr == "TotalObjects") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_totalObjects = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_totalObjects = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_totalObjectsHasBeenSet = true;
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

void DataTransfer::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_bytesTransferredHasBeenSet) {
    mapSize++;
  }
  if (m_objectsTransferredHasBeenSet) {
    mapSize++;
  }
  if (m_totalBytesHasBeenSet) {
    mapSize++;
  }
  if (m_totalObjectsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_bytesTransferredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BytesTransferred"));
    (m_bytesTransferred >= 0) ? encoder.WriteUInt(m_bytesTransferred) : encoder.WriteNegInt(m_bytesTransferred);
  }

  if (m_objectsTransferredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ObjectsTransferred"));
    (m_objectsTransferred >= 0) ? encoder.WriteUInt(m_objectsTransferred) : encoder.WriteNegInt(m_objectsTransferred);
  }

  if (m_totalBytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalBytes"));
    (m_totalBytes >= 0) ? encoder.WriteUInt(m_totalBytes) : encoder.WriteNegInt(m_totalBytes);
  }

  if (m_totalObjectsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalObjects"));
    (m_totalObjects >= 0) ? encoder.WriteUInt(m_totalObjects) : encoder.WriteNegInt(m_totalObjects);
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws