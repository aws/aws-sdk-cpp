/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/managedblockchain/model/InvitationStatus.h>
#include <aws/managedblockchain/model/NetworkSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>An invitation to an Amazon Web Services account to create a member and join
   * the network.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Invitation">AWS
   * API Reference</a></p>
   */
  class Invitation
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API Invitation();
    AWS_MANAGEDBLOCKCHAIN_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline Invitation& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that the invitation was created.</p>
     */
    inline Invitation& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline Invitation& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date and time that the invitation expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * the invitee can no longer create a member and join the network using this
     * <code>InvitationId</code>.</p>
     */
    inline Invitation& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline const InvitationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline void SetStatus(const InvitationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline void SetStatus(InvitationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline Invitation& WithStatus(const InvitationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the invitation:</p> <ul> <li> <p> <code>PENDING</code> - The
     * invitee hasn't created a member to join the network, and the invitation hasn't
     * yet expired.</p> </li> <li> <p> <code>ACCEPTING</code> - The invitee has begun
     * creating a member, and creation hasn't yet completed.</p> </li> <li> <p>
     * <code>ACCEPTED</code> - The invitee created a member and joined the network
     * using the <code>InvitationID</code>.</p> </li> <li> <p> <code>REJECTED</code> -
     * The invitee rejected the invitation.</p> </li> <li> <p> <code>EXPIRED</code> -
     * The invitee neither created a member nor rejected the invitation before the
     * <code>ExpirationDate</code>.</p> </li> </ul>
     */
    inline Invitation& WithStatus(InvitationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const NetworkSummary& GetNetworkSummary() const{ return m_networkSummary; }

    
    inline bool NetworkSummaryHasBeenSet() const { return m_networkSummaryHasBeenSet; }

    
    inline void SetNetworkSummary(const NetworkSummary& value) { m_networkSummaryHasBeenSet = true; m_networkSummary = value; }

    
    inline void SetNetworkSummary(NetworkSummary&& value) { m_networkSummaryHasBeenSet = true; m_networkSummary = std::move(value); }

    
    inline Invitation& WithNetworkSummary(const NetworkSummary& value) { SetNetworkSummary(value); return *this;}

    
    inline Invitation& WithNetworkSummary(NetworkSummary&& value) { SetNetworkSummary(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline Invitation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline Invitation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the invitation. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline Invitation& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    InvitationStatus m_status;
    bool m_statusHasBeenSet = false;

    NetworkSummary m_networkSummary;
    bool m_networkSummaryHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
