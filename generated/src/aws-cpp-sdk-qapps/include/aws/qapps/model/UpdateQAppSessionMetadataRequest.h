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
    AWS_QAPPS_API UpdateQAppSessionMetadataRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateQAppSessionMetadataRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App session to update configuration for.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UpdateQAppSessionMetadataRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the Q App session.</p>
     */
    inline const Aws::String& GetSessionName() const { return m_sessionName; }
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
    template<typename SessionNameT = Aws::String>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::String>
    UpdateQAppSessionMetadataRequest& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new sharing configuration for the Q App data collection session.</p>
     */
    inline const SessionSharingConfiguration& GetSharingConfiguration() const { return m_sharingConfiguration; }
    inline bool SharingConfigurationHasBeenSet() const { return m_sharingConfigurationHasBeenSet; }
    template<typename SharingConfigurationT = SessionSharingConfiguration>
    void SetSharingConfiguration(SharingConfigurationT&& value) { m_sharingConfigurationHasBeenSet = true; m_sharingConfiguration = std::forward<SharingConfigurationT>(value); }
    template<typename SharingConfigurationT = SessionSharingConfiguration>
    UpdateQAppSessionMetadataRequest& WithSharingConfiguration(SharingConfigurationT&& value) { SetSharingConfiguration(std::forward<SharingConfigurationT>(value)); return *this;}
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
