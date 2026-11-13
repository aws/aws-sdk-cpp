/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/Subscription.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Shield {
namespace Model {

Subscription::Subscription(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Subscription& Subscription::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StartTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_startTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "EndTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_endTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_endTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_endTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "TimeCommitmentInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timeCommitmentInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_timeCommitmentInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_timeCommitmentInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "AutoRenew") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_autoRenew =
                      AutoRenewMapper::GetAutoRenewForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_autoRenewHasBeenSet = true;
              }

              else if (initialKeyStr == "Limits") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_limits.push_back(Limit(decoder));
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
                      m_limits.push_back(Limit(decoder));
                    }
                  }
                }
                m_limitsHasBeenSet = true;
              }

              else if (initialKeyStr == "ProactiveEngagementStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_proactiveEngagementStatus = ProactiveEngagementStatusMapper::GetProactiveEngagementStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_proactiveEngagementStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "SubscriptionLimits") {
                m_subscriptionLimits = SubscriptionLimits(decoder);
                m_subscriptionLimitsHasBeenSet = true;
              }

              else if (initialKeyStr == "SubscriptionArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_subscriptionArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_subscriptionArn = ss.str();
                  }
                }
                m_subscriptionArnHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Subscription", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StartTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_startTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "EndTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_endTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_endTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_endTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "TimeCommitmentInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_timeCommitmentInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_timeCommitmentInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_timeCommitmentInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "AutoRenew") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_autoRenew =
                    AutoRenewMapper::GetAutoRenewForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_autoRenewHasBeenSet = true;
            }

            else if (initialKeyStr == "Limits") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_limits.push_back(Limit(decoder));
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
                    m_limits.push_back(Limit(decoder));
                  }
                }
              }
              m_limitsHasBeenSet = true;
            }

            else if (initialKeyStr == "ProactiveEngagementStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_proactiveEngagementStatus = ProactiveEngagementStatusMapper::GetProactiveEngagementStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_proactiveEngagementStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "SubscriptionLimits") {
              m_subscriptionLimits = SubscriptionLimits(decoder);
              m_subscriptionLimitsHasBeenSet = true;
            }

            else if (initialKeyStr == "SubscriptionArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_subscriptionArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_subscriptionArn = ss.str();
                }
              }
              m_subscriptionArnHasBeenSet = true;
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

void Subscription::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_timeCommitmentInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_autoRenewHasBeenSet) {
    mapSize++;
  }
  if (m_limitsHasBeenSet) {
    mapSize++;
  }
  if (m_proactiveEngagementStatusHasBeenSet) {
    mapSize++;
  }
  if (m_subscriptionLimitsHasBeenSet) {
    mapSize++;
  }
  if (m_subscriptionArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_endTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_endTime.Seconds());
  }

  if (m_timeCommitmentInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TimeCommitmentInSeconds"));
    (m_timeCommitmentInSeconds >= 0) ? encoder.WriteUInt(m_timeCommitmentInSeconds) : encoder.WriteNegInt(m_timeCommitmentInSeconds);
  }

  if (m_autoRenewHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoRenew"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AutoRenewMapper::GetNameForAutoRenew(m_autoRenew).c_str()));
  }

  if (m_limitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Limits"));
    encoder.WriteArrayStart(m_limits.size());
    for (const auto& item_0 : m_limits) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_proactiveEngagementStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProactiveEngagementStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ProactiveEngagementStatusMapper::GetNameForProactiveEngagementStatus(m_proactiveEngagementStatus).c_str()));
  }

  if (m_subscriptionLimitsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubscriptionLimits"));
    m_subscriptionLimits.CborEncode(encoder);
  }

  if (m_subscriptionArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubscriptionArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subscriptionArn.c_str()));
  }
}

}  // namespace Model
}  // namespace Shield
}  // namespace Aws