﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WriteCampaignRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateCampaignRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateCampaignRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCampaign"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateCampaignRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateCampaignRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateCampaignRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }
    inline UpdateCampaignRequest& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}
    inline UpdateCampaignRequest& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}
    inline UpdateCampaignRequest& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}
    ///@}

    ///@{
    
    inline const WriteCampaignRequest& GetWriteCampaignRequest() const{ return m_writeCampaignRequest; }
    inline bool WriteCampaignRequestHasBeenSet() const { return m_writeCampaignRequestHasBeenSet; }
    inline void SetWriteCampaignRequest(const WriteCampaignRequest& value) { m_writeCampaignRequestHasBeenSet = true; m_writeCampaignRequest = value; }
    inline void SetWriteCampaignRequest(WriteCampaignRequest&& value) { m_writeCampaignRequestHasBeenSet = true; m_writeCampaignRequest = std::move(value); }
    inline UpdateCampaignRequest& WithWriteCampaignRequest(const WriteCampaignRequest& value) { SetWriteCampaignRequest(value); return *this;}
    inline UpdateCampaignRequest& WithWriteCampaignRequest(WriteCampaignRequest&& value) { SetWriteCampaignRequest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    WriteCampaignRequest m_writeCampaignRequest;
    bool m_writeCampaignRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
