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
    AWS_RAM_API ResourceShareInvitation() = default;
    AWS_RAM_API ResourceShareInvitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceShareInvitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the invitation.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const { return m_resourceShareInvitationArn; }
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }
    template<typename ResourceShareInvitationArnT = Aws::String>
    void SetResourceShareInvitationArn(ResourceShareInvitationArnT&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::forward<ResourceShareInvitationArnT>(value); }
    template<typename ResourceShareInvitationArnT = Aws::String>
    ResourceShareInvitation& WithResourceShareInvitationArn(ResourceShareInvitationArnT&& value) { SetResourceShareInvitationArn(std::forward<ResourceShareInvitationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const { return m_resourceShareName; }
    inline bool ResourceShareNameHasBeenSet() const { return m_resourceShareNameHasBeenSet; }
    template<typename ResourceShareNameT = Aws::String>
    void SetResourceShareName(ResourceShareNameT&& value) { m_resourceShareNameHasBeenSet = true; m_resourceShareName = std::forward<ResourceShareNameT>(value); }
    template<typename ResourceShareNameT = Aws::String>
    ResourceShareInvitation& WithResourceShareName(ResourceShareNameT&& value) { SetResourceShareName(std::forward<ResourceShareNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    ResourceShareInvitation& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that sent the invitation.</p>
     */
    inline const Aws::String& GetSenderAccountId() const { return m_senderAccountId; }
    inline bool SenderAccountIdHasBeenSet() const { return m_senderAccountIdHasBeenSet; }
    template<typename SenderAccountIdT = Aws::String>
    void SetSenderAccountId(SenderAccountIdT&& value) { m_senderAccountIdHasBeenSet = true; m_senderAccountId = std::forward<SenderAccountIdT>(value); }
    template<typename SenderAccountIdT = Aws::String>
    ResourceShareInvitation& WithSenderAccountId(SenderAccountIdT&& value) { SetSenderAccountId(std::forward<SenderAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that received the invitation.</p>
     */
    inline const Aws::String& GetReceiverAccountId() const { return m_receiverAccountId; }
    inline bool ReceiverAccountIdHasBeenSet() const { return m_receiverAccountIdHasBeenSet; }
    template<typename ReceiverAccountIdT = Aws::String>
    void SetReceiverAccountId(ReceiverAccountIdT&& value) { m_receiverAccountIdHasBeenSet = true; m_receiverAccountId = std::forward<ReceiverAccountIdT>(value); }
    template<typename ReceiverAccountIdT = Aws::String>
    ResourceShareInvitation& WithReceiverAccountId(ReceiverAccountIdT&& value) { SetReceiverAccountId(std::forward<ReceiverAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the invitation was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitationTimestamp() const { return m_invitationTimestamp; }
    inline bool InvitationTimestampHasBeenSet() const { return m_invitationTimestampHasBeenSet; }
    template<typename InvitationTimestampT = Aws::Utils::DateTime>
    void SetInvitationTimestamp(InvitationTimestampT&& value) { m_invitationTimestampHasBeenSet = true; m_invitationTimestamp = std::forward<InvitationTimestampT>(value); }
    template<typename InvitationTimestampT = Aws::Utils::DateTime>
    ResourceShareInvitation& WithInvitationTimestamp(InvitationTimestampT&& value) { SetInvitationTimestamp(std::forward<InvitationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the invitation.</p>
     */
    inline ResourceShareInvitationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceShareInvitationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceShareInvitation& WithStatus(ResourceShareInvitationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the IAM user or role that received the
     * invitation.</p>
     */
    inline const Aws::String& GetReceiverArn() const { return m_receiverArn; }
    inline bool ReceiverArnHasBeenSet() const { return m_receiverArnHasBeenSet; }
    template<typename ReceiverArnT = Aws::String>
    void SetReceiverArn(ReceiverArnT&& value) { m_receiverArnHasBeenSet = true; m_receiverArn = std::forward<ReceiverArnT>(value); }
    template<typename ReceiverArnT = Aws::String>
    ResourceShareInvitation& WithReceiverArn(ReceiverArnT&& value) { SetReceiverArn(std::forward<ReceiverArnT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_invitationTimestamp{};
    bool m_invitationTimestampHasBeenSet = false;

    ResourceShareInvitationStatus m_status{ResourceShareInvitationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_receiverArn;
    bool m_receiverArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
