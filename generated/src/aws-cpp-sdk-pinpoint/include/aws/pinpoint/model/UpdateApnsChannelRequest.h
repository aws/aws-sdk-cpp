/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/APNSChannelRequest.h>
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
  class UpdateApnsChannelRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateApnsChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApnsChannel"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const APNSChannelRequest& GetAPNSChannelRequest() const{ return m_aPNSChannelRequest; }

    
    inline bool APNSChannelRequestHasBeenSet() const { return m_aPNSChannelRequestHasBeenSet; }

    
    inline void SetAPNSChannelRequest(const APNSChannelRequest& value) { m_aPNSChannelRequestHasBeenSet = true; m_aPNSChannelRequest = value; }

    
    inline void SetAPNSChannelRequest(APNSChannelRequest&& value) { m_aPNSChannelRequestHasBeenSet = true; m_aPNSChannelRequest = std::move(value); }

    
    inline UpdateApnsChannelRequest& WithAPNSChannelRequest(const APNSChannelRequest& value) { SetAPNSChannelRequest(value); return *this;}

    
    inline UpdateApnsChannelRequest& WithAPNSChannelRequest(APNSChannelRequest&& value) { SetAPNSChannelRequest(std::move(value)); return *this;}


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
    inline UpdateApnsChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApnsChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:

    APNSChannelRequest m_aPNSChannelRequest;
    bool m_aPNSChannelRequestHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
