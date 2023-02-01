/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class StartOnDemandAppReplicationRequest : public SMSRequest
  {
  public:
    AWS_SMS_API StartOnDemandAppReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOnDemandAppReplication"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The description of the replication run.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline StartOnDemandAppReplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
