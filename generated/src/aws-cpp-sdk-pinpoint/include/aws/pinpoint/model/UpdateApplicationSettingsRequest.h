/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WriteApplicationSettingsRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateApplicationSettingsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateApplicationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationSettings"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


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
    inline UpdateApplicationSettingsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const WriteApplicationSettingsRequest& GetWriteApplicationSettingsRequest() const{ return m_writeApplicationSettingsRequest; }

    
    inline bool WriteApplicationSettingsRequestHasBeenSet() const { return m_writeApplicationSettingsRequestHasBeenSet; }

    
    inline void SetWriteApplicationSettingsRequest(const WriteApplicationSettingsRequest& value) { m_writeApplicationSettingsRequestHasBeenSet = true; m_writeApplicationSettingsRequest = value; }

    
    inline void SetWriteApplicationSettingsRequest(WriteApplicationSettingsRequest&& value) { m_writeApplicationSettingsRequestHasBeenSet = true; m_writeApplicationSettingsRequest = std::move(value); }

    
    inline UpdateApplicationSettingsRequest& WithWriteApplicationSettingsRequest(const WriteApplicationSettingsRequest& value) { SetWriteApplicationSettingsRequest(value); return *this;}

    
    inline UpdateApplicationSettingsRequest& WithWriteApplicationSettingsRequest(WriteApplicationSettingsRequest&& value) { SetWriteApplicationSettingsRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    WriteApplicationSettingsRequest m_writeApplicationSettingsRequest;
    bool m_writeApplicationSettingsRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
