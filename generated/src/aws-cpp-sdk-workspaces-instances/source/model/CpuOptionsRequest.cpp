/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/CpuOptionsRequest.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

CpuOptionsRequest::CpuOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CpuOptionsRequest& CpuOptionsRequest::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AmdSevSnp") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_amdSevSnp = AmdSevSnpEnumMapper::GetAmdSevSnpEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_amdSevSnpHasBeenSet = true;
              }

              else if (initialKeyStr == "CoreCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_coreCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_coreCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_coreCountHasBeenSet = true;
              }

              else if (initialKeyStr == "ThreadsPerCore") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_threadsPerCore = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_threadsPerCore = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_threadsPerCoreHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CpuOptionsRequest", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AmdSevSnp") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_amdSevSnp = AmdSevSnpEnumMapper::GetAmdSevSnpEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_amdSevSnpHasBeenSet = true;
            }

            else if (initialKeyStr == "CoreCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_coreCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_coreCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_coreCountHasBeenSet = true;
            }

            else if (initialKeyStr == "ThreadsPerCore") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_threadsPerCore = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_threadsPerCore = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_threadsPerCoreHasBeenSet = true;
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

void CpuOptionsRequest::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_amdSevSnpHasBeenSet) {
    mapSize++;
  }
  if (m_coreCountHasBeenSet) {
    mapSize++;
  }
  if (m_threadsPerCoreHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_amdSevSnpHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AmdSevSnp"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AmdSevSnpEnumMapper::GetNameForAmdSevSnpEnum(m_amdSevSnp).c_str()));
  }

  if (m_coreCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CoreCount"));
    (m_coreCount >= 0) ? encoder.WriteUInt(m_coreCount) : encoder.WriteNegInt(m_coreCount);
  }

  if (m_threadsPerCoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThreadsPerCore"));
    (m_threadsPerCore >= 0) ? encoder.WriteUInt(m_threadsPerCore) : encoder.WriteNegInt(m_threadsPerCore);
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws