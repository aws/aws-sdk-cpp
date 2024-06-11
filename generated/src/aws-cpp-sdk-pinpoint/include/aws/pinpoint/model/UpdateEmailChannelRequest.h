﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EmailChannelRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateEmailChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateEmailChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEmailChannel"; }

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
    inline UpdateEmailChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateEmailChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateEmailChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    
    inline const EmailChannelRequest& GetEmailChannelRequest() const{ return m_emailChannelRequest; }
    inline bool EmailChannelRequestHasBeenSet() const { return m_emailChannelRequestHasBeenSet; }
    inline void SetEmailChannelRequest(const EmailChannelRequest& value) { m_emailChannelRequestHasBeenSet = true; m_emailChannelRequest = value; }
    inline void SetEmailChannelRequest(EmailChannelRequest&& value) { m_emailChannelRequestHasBeenSet = true; m_emailChannelRequest = std::move(value); }
    inline UpdateEmailChannelRequest& WithEmailChannelRequest(const EmailChannelRequest& value) { SetEmailChannelRequest(value); return *this;}
    inline UpdateEmailChannelRequest& WithEmailChannelRequest(EmailChannelRequest&& value) { SetEmailChannelRequest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    EmailChannelRequest m_emailChannelRequest;
    bool m_emailChannelRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
