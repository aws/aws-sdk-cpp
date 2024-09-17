/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Properties of a proposal.</p> <p>Applies only to Hyperledger
   * Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ProposalSummary">AWS
   * API Reference</a></p>
   */
  class ProposalSummary
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ProposalSummary();
    AWS_MANAGEDBLOCKCHAIN_API ProposalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API ProposalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }
    inline ProposalSummary& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}
    inline ProposalSummary& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}
    inline ProposalSummary& WithProposalId(const char* value) { SetProposalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the proposal. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProposalSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProposalSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProposalSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the member that created the proposal. </p>
     */
    inline const Aws::String& GetProposedByMemberId() const{ return m_proposedByMemberId; }
    inline bool ProposedByMemberIdHasBeenSet() const { return m_proposedByMemberIdHasBeenSet; }
    inline void SetProposedByMemberId(const Aws::String& value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId = value; }
    inline void SetProposedByMemberId(Aws::String&& value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId = std::move(value); }
    inline void SetProposedByMemberId(const char* value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId.assign(value); }
    inline ProposalSummary& WithProposedByMemberId(const Aws::String& value) { SetProposedByMemberId(value); return *this;}
    inline ProposalSummary& WithProposedByMemberId(Aws::String&& value) { SetProposedByMemberId(std::move(value)); return *this;}
    inline ProposalSummary& WithProposedByMemberId(const char* value) { SetProposedByMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the member that created the proposal. </p>
     */
    inline const Aws::String& GetProposedByMemberName() const{ return m_proposedByMemberName; }
    inline bool ProposedByMemberNameHasBeenSet() const { return m_proposedByMemberNameHasBeenSet; }
    inline void SetProposedByMemberName(const Aws::String& value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName = value; }
    inline void SetProposedByMemberName(Aws::String&& value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName = std::move(value); }
    inline void SetProposedByMemberName(const char* value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName.assign(value); }
    inline ProposalSummary& WithProposedByMemberName(const Aws::String& value) { SetProposedByMemberName(value); return *this;}
    inline ProposalSummary& WithProposedByMemberName(Aws::String&& value) { SetProposedByMemberName(std::move(value)); return *this;}
    inline ProposalSummary& WithProposedByMemberName(const char* value) { SetProposedByMemberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> aren't carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members didn't cast the number of
     * votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> aren't carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved couldn't be
     * completed because of an error.</p> </li> </ul>
     */
    inline const ProposalStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProposalStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProposalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProposalSummary& WithStatus(const ProposalStatus& value) { SetStatus(value); return *this;}
    inline ProposalSummary& WithStatus(ProposalStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ProposalSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ProposalSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members haven't cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code>
     * aren't carried out. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline ProposalSummary& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline ProposalSummary& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the proposal. For more information about
     * ARNs and their format, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ProposalSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ProposalSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ProposalSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_proposedByMemberId;
    bool m_proposedByMemberIdHasBeenSet = false;

    Aws::String m_proposedByMemberName;
    bool m_proposedByMemberNameHasBeenSet = false;

    ProposalStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
