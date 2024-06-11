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
    AWS_SSMCONTACTS_API StopEngagementRequest();

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
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }
    inline StopEngagementRequest& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline StopEngagementRequest& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline StopEngagementRequest& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that you're stopping the engagement.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline StopEngagementRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline StopEngagementRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline StopEngagementRequest& WithReason(const char* value) { SetReason(value); return *this;}
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
