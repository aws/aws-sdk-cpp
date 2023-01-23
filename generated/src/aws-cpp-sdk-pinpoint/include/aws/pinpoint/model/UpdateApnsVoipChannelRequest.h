/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/APNSVoipChannelRequest.h>
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
  class UpdateApnsVoipChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateApnsVoipChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApnsVoipChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const APNSVoipChannelRequest& GetAPNSVoipChannelRequest() const{ return m_aPNSVoipChannelRequest; }

    
    inline bool APNSVoipChannelRequestHasBeenSet() const { return m_aPNSVoipChannelRequestHasBeenSet; }

    
    inline void SetAPNSVoipChannelRequest(const APNSVoipChannelRequest& value) { m_aPNSVoipChannelRequestHasBeenSet = true; m_aPNSVoipChannelRequest = value; }

    
    inline void SetAPNSVoipChannelRequest(APNSVoipChannelRequest&& value) { m_aPNSVoipChannelRequestHasBeenSet = true; m_aPNSVoipChannelRequest = std::move(value); }

    
    inline UpdateApnsVoipChannelRequest& WithAPNSVoipChannelRequest(const APNSVoipChannelRequest& value) { SetAPNSVoipChannelRequest(value); return *this;}

    
    inline UpdateApnsVoipChannelRequest& WithAPNSVoipChannelRequest(APNSVoipChannelRequest&& value) { SetAPNSVoipChannelRequest(std::move(value)); return *this;}


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
    inline UpdateApnsVoipChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsVoipChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsVoipChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:

    APNSVoipChannelRequest m_aPNSVoipChannelRequest;
    bool m_aPNSVoipChannelRequestHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
