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
  class DescribeEngagementRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API DescribeEngagementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEngagement"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement you want the details of.</p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    DescribeEngagementRequest& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
