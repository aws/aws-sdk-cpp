﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Retrieve all the deliverability data for a specific campaign. This data is
   * available for a campaign only if the campaign sent email by using a domain that
   * the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaignRequest">AWS
   * API Reference</a></p>
   */
  class GetDomainDeliverabilityCampaignRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDomainDeliverabilityCampaignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainDeliverabilityCampaign"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the campaign. The Deliverability dashboard
     * automatically generates and assigns this identifier to a campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    GetDomainDeliverabilityCampaignRequest& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
