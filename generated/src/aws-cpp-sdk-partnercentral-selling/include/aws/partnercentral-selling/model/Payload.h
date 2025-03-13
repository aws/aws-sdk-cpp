/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunityInvitationPayload.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Contains the data payload associated with the Engagement Invitation. This
   * payload includes essential details related to the AWS opportunity and is used by
   * partners to evaluate whether to accept or reject the engagement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Payload">AWS
   * API Reference</a></p>
   */
  class Payload
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Payload() = default;
    AWS_PARTNERCENTRALSELLING_API Payload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Payload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the details of the opportunity invitation within the Engagement
     * Invitation payload. This data helps partners understand the context, scope, and
     * expected involvement for the opportunity from AWS.</p>
     */
    inline const OpportunityInvitationPayload& GetOpportunityInvitation() const { return m_opportunityInvitation; }
    inline bool OpportunityInvitationHasBeenSet() const { return m_opportunityInvitationHasBeenSet; }
    template<typename OpportunityInvitationT = OpportunityInvitationPayload>
    void SetOpportunityInvitation(OpportunityInvitationT&& value) { m_opportunityInvitationHasBeenSet = true; m_opportunityInvitation = std::forward<OpportunityInvitationT>(value); }
    template<typename OpportunityInvitationT = OpportunityInvitationPayload>
    Payload& WithOpportunityInvitation(OpportunityInvitationT&& value) { SetOpportunityInvitation(std::forward<OpportunityInvitationT>(value)); return *this;}
    ///@}
  private:

    OpportunityInvitationPayload m_opportunityInvitation;
    bool m_opportunityInvitationHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
