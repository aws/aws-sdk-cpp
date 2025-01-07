/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/SessionSharingConfiguration.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class UpdateQAppSessionMetadataRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API UpdateQAppSessionMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQAppSessionMetadata"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQAppSessionMetadataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App session to update configuration for.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline UpdateQAppSessionMetadataRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const{ return m_sessionName; }
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
    inline void SetSessionName(const Aws::String& value) { m_sessionNameHasBeenSet = true; m_sessionName = value; }
    inline void SetSessionName(Aws::String&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::move(value); }
    inline void SetSessionName(const char* value) { m_sessionNameHasBeenSet = true; m_sessionName.assign(value); }
    inline UpdateQAppSessionMetadataRequest& WithSessionName(const Aws::String& value) { SetSessionName(value); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithSessionName(Aws::String&& value) { SetSessionName(std::move(value)); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithSessionName(const char* value) { SetSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new sharing configuration for the Q App data collection session.</p>
     */
    inline const SessionSharingConfiguration& GetSharingConfiguration() const{ return m_sharingConfiguration; }
    inline bool SharingConfigurationHasBeenSet() const { return m_sharingConfigurationHasBeenSet; }
    inline void SetSharingConfiguration(const SessionSharingConfiguration& value) { m_sharingConfigurationHasBeenSet = true; m_sharingConfiguration = value; }
    inline void SetSharingConfiguration(SessionSharingConfiguration&& value) { m_sharingConfigurationHasBeenSet = true; m_sharingConfiguration = std::move(value); }
    inline UpdateQAppSessionMetadataRequest& WithSharingConfiguration(const SessionSharingConfiguration& value) { SetSharingConfiguration(value); return *this;}
    inline UpdateQAppSessionMetadataRequest& WithSharingConfiguration(SessionSharingConfiguration&& value) { SetSharingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    SessionSharingConfiguration m_sharingConfiguration;
    bool m_sharingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
