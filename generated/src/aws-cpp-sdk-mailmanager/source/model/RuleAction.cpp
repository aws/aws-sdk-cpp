/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/RuleAction.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

RuleAction::RuleAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuleAction& RuleAction::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Drop") {
                m_drop = DropAction(decoder);
                m_dropHasBeenSet = true;
              }

              else if (initialKeyStr == "Relay") {
                m_relay = RelayAction(decoder);
                m_relayHasBeenSet = true;
              }

              else if (initialKeyStr == "Archive") {
                m_archive = ArchiveAction(decoder);
                m_archiveHasBeenSet = true;
              }

              else if (initialKeyStr == "WriteToS3") {
                m_writeToS3 = S3Action(decoder);
                m_writeToS3HasBeenSet = true;
              }

              else if (initialKeyStr == "Send") {
                m_send = SendAction(decoder);
                m_sendHasBeenSet = true;
              }

              else if (initialKeyStr == "AddHeader") {
                m_addHeader = AddHeaderAction(decoder);
                m_addHeaderHasBeenSet = true;
              }

              else if (initialKeyStr == "ReplaceRecipient") {
                m_replaceRecipient = ReplaceRecipientAction(decoder);
                m_replaceRecipientHasBeenSet = true;
              }

              else if (initialKeyStr == "DeliverToMailbox") {
                m_deliverToMailbox = DeliverToMailboxAction(decoder);
                m_deliverToMailboxHasBeenSet = true;
              }

              else if (initialKeyStr == "DeliverToQBusiness") {
                m_deliverToQBusiness = DeliverToQBusinessAction(decoder);
                m_deliverToQBusinessHasBeenSet = true;
              }

              else if (initialKeyStr == "PublishToSns") {
                m_publishToSns = SnsAction(decoder);
                m_publishToSnsHasBeenSet = true;
              }

              else if (initialKeyStr == "Bounce") {
                m_bounce = BounceAction(decoder);
                m_bounceHasBeenSet = true;
              }

              else if (initialKeyStr == "InvokeLambda") {
                m_invokeLambda = InvokeLambdaAction(decoder);
                m_invokeLambdaHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuleAction", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Drop") {
              m_drop = DropAction(decoder);
              m_dropHasBeenSet = true;
            }

            else if (initialKeyStr == "Relay") {
              m_relay = RelayAction(decoder);
              m_relayHasBeenSet = true;
            }

            else if (initialKeyStr == "Archive") {
              m_archive = ArchiveAction(decoder);
              m_archiveHasBeenSet = true;
            }

            else if (initialKeyStr == "WriteToS3") {
              m_writeToS3 = S3Action(decoder);
              m_writeToS3HasBeenSet = true;
            }

            else if (initialKeyStr == "Send") {
              m_send = SendAction(decoder);
              m_sendHasBeenSet = true;
            }

            else if (initialKeyStr == "AddHeader") {
              m_addHeader = AddHeaderAction(decoder);
              m_addHeaderHasBeenSet = true;
            }

            else if (initialKeyStr == "ReplaceRecipient") {
              m_replaceRecipient = ReplaceRecipientAction(decoder);
              m_replaceRecipientHasBeenSet = true;
            }

            else if (initialKeyStr == "DeliverToMailbox") {
              m_deliverToMailbox = DeliverToMailboxAction(decoder);
              m_deliverToMailboxHasBeenSet = true;
            }

            else if (initialKeyStr == "DeliverToQBusiness") {
              m_deliverToQBusiness = DeliverToQBusinessAction(decoder);
              m_deliverToQBusinessHasBeenSet = true;
            }

            else if (initialKeyStr == "PublishToSns") {
              m_publishToSns = SnsAction(decoder);
              m_publishToSnsHasBeenSet = true;
            }

            else if (initialKeyStr == "Bounce") {
              m_bounce = BounceAction(decoder);
              m_bounceHasBeenSet = true;
            }

            else if (initialKeyStr == "InvokeLambda") {
              m_invokeLambda = InvokeLambdaAction(decoder);
              m_invokeLambdaHasBeenSet = true;
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

void RuleAction::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_dropHasBeenSet) {
    mapSize++;
  }
  if (m_relayHasBeenSet) {
    mapSize++;
  }
  if (m_archiveHasBeenSet) {
    mapSize++;
  }
  if (m_writeToS3HasBeenSet) {
    mapSize++;
  }
  if (m_sendHasBeenSet) {
    mapSize++;
  }
  if (m_addHeaderHasBeenSet) {
    mapSize++;
  }
  if (m_replaceRecipientHasBeenSet) {
    mapSize++;
  }
  if (m_deliverToMailboxHasBeenSet) {
    mapSize++;
  }
  if (m_deliverToQBusinessHasBeenSet) {
    mapSize++;
  }
  if (m_publishToSnsHasBeenSet) {
    mapSize++;
  }
  if (m_bounceHasBeenSet) {
    mapSize++;
  }
  if (m_invokeLambdaHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_dropHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Drop"));
    m_drop.CborEncode(encoder);
  }

  if (m_relayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Relay"));
    m_relay.CborEncode(encoder);
  }

  if (m_archiveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Archive"));
    m_archive.CborEncode(encoder);
  }

  if (m_writeToS3HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WriteToS3"));
    m_writeToS3.CborEncode(encoder);
  }

  if (m_sendHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Send"));
    m_send.CborEncode(encoder);
  }

  if (m_addHeaderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AddHeader"));
    m_addHeader.CborEncode(encoder);
  }

  if (m_replaceRecipientHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReplaceRecipient"));
    m_replaceRecipient.CborEncode(encoder);
  }

  if (m_deliverToMailboxHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeliverToMailbox"));
    m_deliverToMailbox.CborEncode(encoder);
  }

  if (m_deliverToQBusinessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeliverToQBusiness"));
    m_deliverToQBusiness.CborEncode(encoder);
  }

  if (m_publishToSnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PublishToSns"));
    m_publishToSns.CborEncode(encoder);
  }

  if (m_bounceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Bounce"));
    m_bounce.CborEncode(encoder);
  }

  if (m_invokeLambdaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InvokeLambda"));
    m_invokeLambda.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws