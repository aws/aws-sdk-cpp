/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/JobListEntry.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Snowball {
namespace Model {

JobListEntry::JobListEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

JobListEntry& JobListEntry::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "JobId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_jobId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_jobId = ss.str();
                  }
                }
                m_jobIdHasBeenSet = true;
              }

              else if (initialKeyStr == "JobState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_jobState =
                      JobStateMapper::GetJobStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_jobStateHasBeenSet = true;
              }

              else if (initialKeyStr == "IsMaster") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_isMaster = val.value();
                }
                m_isMasterHasBeenSet = true;
              }

              else if (initialKeyStr == "JobType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_jobType =
                      JobTypeMapper::GetJobTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_jobTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "SnowballType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_snowballTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "CreationDate") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_creationDate = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_creationDate = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_creationDateHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("JobListEntry", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "JobId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_jobId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_jobId = ss.str();
                }
              }
              m_jobIdHasBeenSet = true;
            }

            else if (initialKeyStr == "JobState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_jobState =
                    JobStateMapper::GetJobStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_jobStateHasBeenSet = true;
            }

            else if (initialKeyStr == "IsMaster") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_isMaster = val.value();
              }
              m_isMasterHasBeenSet = true;
            }

            else if (initialKeyStr == "JobType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_jobType = JobTypeMapper::GetJobTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_jobTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "SnowballType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_snowballTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "CreationDate") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_creationDate = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_creationDate = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_creationDateHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
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

void JobListEntry::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_jobIdHasBeenSet) {
    mapSize++;
  }
  if (m_jobStateHasBeenSet) {
    mapSize++;
  }
  if (m_isMasterHasBeenSet) {
    mapSize++;
  }
  if (m_jobTypeHasBeenSet) {
    mapSize++;
  }
  if (m_snowballTypeHasBeenSet) {
    mapSize++;
  }
  if (m_creationDateHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_jobIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_jobId.c_str()));
  }

  if (m_jobStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(JobStateMapper::GetNameForJobState(m_jobState).c_str()));
  }

  if (m_isMasterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IsMaster"));
    encoder.WriteBool(m_isMaster);
  }

  if (m_jobTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(JobTypeMapper::GetNameForJobType(m_jobType).c_str()));
  }

  if (m_snowballTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SnowballTypeMapper::GetNameForSnowballType(m_snowballType).c_str()));
  }

  if (m_creationDateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreationDate"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_creationDate.Seconds());
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }
}

}  // namespace Model
}  // namespace Snowball
}  // namespace Aws