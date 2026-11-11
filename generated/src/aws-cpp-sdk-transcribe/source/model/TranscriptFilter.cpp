/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/TranscriptFilter.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

TranscriptFilter::TranscriptFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TranscriptFilter& TranscriptFilter::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TranscriptFilterType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transcriptFilterType = TranscriptFilterTypeMapper::GetTranscriptFilterTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transcriptFilterTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "AbsoluteTimeRange") {
                m_absoluteTimeRange = AbsoluteTimeRange(decoder);
                m_absoluteTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "RelativeTimeRange") {
                m_relativeTimeRange = RelativeTimeRange(decoder);
                m_relativeTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "ParticipantRole") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_participantRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "Negate") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_negate = val.value();
                }
                m_negateHasBeenSet = true;
              }

              else if (initialKeyStr == "Targets") {
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
                              m_targets.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                            m_targets.push_back(ss_1.str());
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
                            m_targets.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_targets.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_targetsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TranscriptFilter", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TranscriptFilterType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transcriptFilterType = TranscriptFilterTypeMapper::GetTranscriptFilterTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transcriptFilterTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "AbsoluteTimeRange") {
              m_absoluteTimeRange = AbsoluteTimeRange(decoder);
              m_absoluteTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "RelativeTimeRange") {
              m_relativeTimeRange = RelativeTimeRange(decoder);
              m_relativeTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "ParticipantRole") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_participantRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "Negate") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_negate = val.value();
              }
              m_negateHasBeenSet = true;
            }

            else if (initialKeyStr == "Targets") {
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
                            m_targets.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                          m_targets.push_back(ss_1.str());
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
                          m_targets.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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
                        m_targets.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_targetsHasBeenSet = true;
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

void TranscriptFilter::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_transcriptFilterTypeHasBeenSet) {
    mapSize++;
  }
  if (m_absoluteTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_relativeTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_participantRoleHasBeenSet) {
    mapSize++;
  }
  if (m_negateHasBeenSet) {
    mapSize++;
  }
  if (m_targetsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_transcriptFilterTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranscriptFilterType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(TranscriptFilterTypeMapper::GetNameForTranscriptFilterType(m_transcriptFilterType).c_str()));
  }

  if (m_absoluteTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AbsoluteTimeRange"));
    m_absoluteTimeRange.CborEncode(encoder);
  }

  if (m_relativeTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RelativeTimeRange"));
    m_relativeTimeRange.CborEncode(encoder);
  }

  if (m_participantRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParticipantRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole).c_str()));
  }

  if (m_negateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Negate"));
    encoder.WriteBool(m_negate);
  }

  if (m_targetsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Targets"));
    encoder.WriteArrayStart(m_targets.size());
    for (const auto& item_0 : m_targets) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws