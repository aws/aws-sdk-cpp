/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/EbsBlockDevice.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

EbsBlockDevice::EbsBlockDevice(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EbsBlockDevice& EbsBlockDevice::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "VolumeType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_volumeType = VolumeTypeEnumMapper::GetVolumeTypeEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_volumeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Encrypted") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_encrypted = val.value();
                }
                m_encryptedHasBeenSet = true;
              }

              else if (initialKeyStr == "KmsKeyId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_kmsKeyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_kmsKeyId = ss.str();
                  }
                }
                m_kmsKeyIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Iops") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_iops = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_iops = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_iopsHasBeenSet = true;
              }

              else if (initialKeyStr == "Throughput") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_throughput = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_throughput = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_throughputHasBeenSet = true;
              }

              else if (initialKeyStr == "VolumeSize") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeSize = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeSize = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeSizeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EbsBlockDevice", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "VolumeType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_volumeType = VolumeTypeEnumMapper::GetVolumeTypeEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_volumeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Encrypted") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_encrypted = val.value();
              }
              m_encryptedHasBeenSet = true;
            }

            else if (initialKeyStr == "KmsKeyId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_kmsKeyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_kmsKeyId = ss.str();
                }
              }
              m_kmsKeyIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Iops") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_iops = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_iops = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_iopsHasBeenSet = true;
            }

            else if (initialKeyStr == "Throughput") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_throughput = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_throughput = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_throughputHasBeenSet = true;
            }

            else if (initialKeyStr == "VolumeSize") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeSize = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeSize = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeSizeHasBeenSet = true;
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

void EbsBlockDevice::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_volumeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_encryptedHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyIdHasBeenSet) {
    mapSize++;
  }
  if (m_iopsHasBeenSet) {
    mapSize++;
  }
  if (m_throughputHasBeenSet) {
    mapSize++;
  }
  if (m_volumeSizeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_volumeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VolumeTypeEnumMapper::GetNameForVolumeTypeEnum(m_volumeType).c_str()));
  }

  if (m_encryptedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Encrypted"));
    encoder.WriteBool(m_encrypted);
  }

  if (m_kmsKeyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyId.c_str()));
  }

  if (m_iopsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Iops"));
    (m_iops >= 0) ? encoder.WriteUInt(m_iops) : encoder.WriteNegInt(m_iops);
  }

  if (m_throughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Throughput"));
    (m_throughput >= 0) ? encoder.WriteUInt(m_throughput) : encoder.WriteNegInt(m_throughput);
  }

  if (m_volumeSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VolumeSize"));
    (m_volumeSize >= 0) ? encoder.WriteUInt(m_volumeSize) : encoder.WriteNegInt(m_volumeSize);
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws