/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class StopEngagementRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API StopEngagementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopEngagement"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    StopEngagementRequest& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that you're stopping the engagement.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    StopEngagementRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
