/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/APNSSandboxChannelRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateApnsSandboxChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateApnsSandboxChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApnsSandboxChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const APNSSandboxChannelRequest& GetAPNSSandboxChannelRequest() const{ return m_aPNSSandboxChannelRequest; }

    
    inline bool APNSSandboxChannelRequestHasBeenSet() const { return m_aPNSSandboxChannelRequestHasBeenSet; }

    
    inline void SetAPNSSandboxChannelRequest(const APNSSandboxChannelRequest& value) { m_aPNSSandboxChannelRequestHasBeenSet = true; m_aPNSSandboxChannelRequest = value; }

    
    inline void SetAPNSSandboxChannelRequest(APNSSandboxChannelRequest&& value) { m_aPNSSandboxChannelRequestHasBeenSet = true; m_aPNSSandboxChannelRequest = std::move(value); }

    
    inline UpdateApnsSandboxChannelRequest& WithAPNSSandboxChannelRequest(const APNSSandboxChannelRequest& value) { SetAPNSSandboxChannelRequest(value); return *this;}

    
    inline UpdateApnsSandboxChannelRequest& WithAPNSSandboxChannelRequest(APNSSandboxChannelRequest&& value) { SetAPNSSandboxChannelRequest(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsSandboxChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsSandboxChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsSandboxChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:

    APNSSandboxChannelRequest m_aPNSSandboxChannelRequest;
    bool m_aPNSSandboxChannelRequestHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
