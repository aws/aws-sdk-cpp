/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ram/model/ResourceShareInvitationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes an invitation for an Amazon Web Services account to join a resource
   * share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShareInvitation">AWS
   * API Reference</a></p>
   */
  class ResourceShareInvitation
  {
  public:
    AWS_RAM_API ResourceShareInvitation();
    AWS_RAM_API ResourceShareInvitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceShareInvitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const{ return m_resourceShareInvitationArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const Aws::String& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(Aws::String&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline void SetResourceShareInvitationArn(const char* value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(const Aws::String& value) { SetResourceShareInvitationArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(Aws::String&& value) { SetResourceShareInvitationArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the invitation.</p>
     */
    inline ResourceShareInvitation& WithResourceShareInvitationArn(const char* value) { SetResourceShareInvitationArn(value); return *this;}


    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const{ return m_resourceShareName; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const Aws::String& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = value; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(Aws::String&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::move(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const char* value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName.assign(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(const Aws::String& value) { SetResourceShareName(value); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(Aws::String&& value) { SetResourceShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline ResourceShareInvitation& WithResourceShareName(const char* value) { SetResourceShareName(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share</p>
     */
    inline ResourceShareInvitation& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline const Aws::String& GetSenderAccountId() const{ return m_senderAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline bool SenderAccountIdHasBeenSet() const { return m_senderAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(const Aws::String& value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(Aws::String&& value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline void SetSenderAccountId(const char* value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(const Aws::String& value) { SetSenderAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(Aws::String&& value) { SetSenderAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline ResourceShareInvitation& WithSenderAccountId(const char* value) { SetSenderAccountId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline const Aws::String& GetReceiverAccountId() const{ return m_receiverAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline bool ReceiverAccountIdHasBeenSet() const { return m_receiverAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(const Aws::String& value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(Aws::String&& value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline void SetReceiverAccountId(const char* value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(const Aws::String& value) { SetReceiverAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(Aws::String&& value) { SetReceiverAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverAccountId(const char* value) { SetReceiverAccountId(value); return *this;}


    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationTimestamp() const{ return m_invitationTimestamp; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline bool InvitationTimestampHasBeenSet() const { return m_invitationTimestampHasBeenSet; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline void SetInvitationTimestamp(const Aws::Utils::DateTime& value) { m_invitationTimestampHasBeenSet = true; m_invitationTimestamp = value; }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline void SetInvitationTimestamp(Aws::Utils::DateTime&& value) { m_invitationTimestampHasBeenSet = true; m_invitationTimestamp = std::move(value); }

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline ResourceShareInvitation& WithInvitationTimestamp(const Aws::Utils::DateTime& value) { SetInvitationTimestamp(value); return *this;}

    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline ResourceShareInvitation& WithInvitationTimestamp(Aws::Utils::DateTime&& value) { SetInvitationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current status of the invitation.</p>
     */
    inline const ResourceShareInvitationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the invitation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the invitation.</p>
     */
    inline void SetStatus(const ResourceShareInvitationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the invitation.</p>
     */
    inline void SetStatus(ResourceShareInvitationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the invitation.</p>
     */
    inline ResourceShareInvitation& WithStatus(const ResourceShareInvitationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the invitation.</p>
     */
    inline ResourceShareInvitation& WithStatus(ResourceShareInvitationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline const Aws::String& GetReceiverArn() const{ return m_receiverArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline bool ReceiverArnHasBeenSet() const { return m_receiverArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline void SetReceiverArn(const Aws::String& value) { m_receiverArnHasBeenSet = true; m_receiverArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline void SetReceiverArn(Aws::String&& value) { m_receiverArnHasBeenSet = true; m_receiverArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline void SetReceiverArn(const char* value) { m_receiverArnHasBeenSet = true; m_receiverArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverArn(const Aws::String& value) { SetReceiverArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverArn(Aws::String&& value) { SetReceiverArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the IAM user or role that received the invitation.</p>
     */
    inline ResourceShareInvitation& WithReceiverArn(const char* value) { SetReceiverArn(value); return *this;}

  private:

    Aws::String m_resourceShareInvitationArn;
    bool m_resourceShareInvitationArnHasBeenSet = false;

    Aws::String m_resourceShareName;
    bool m_resourceShareNameHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_senderAccountId;
    bool m_senderAccountIdHasBeenSet = false;

    Aws::String m_receiverAccountId;
    bool m_receiverAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_invitationTimestamp;
    bool m_invitationTimestampHasBeenSet = false;

    ResourceShareInvitationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_receiverArn;
    bool m_receiverArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
