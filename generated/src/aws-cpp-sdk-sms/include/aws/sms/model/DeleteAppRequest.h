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
  class DeleteAppRequest : public SMSRequest
  {
  public:
    AWS_SMS_API DeleteAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApp"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    DeleteAppRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to stop all replication jobs corresponding to the servers
     * in the application while deleting the application.</p>
     */
    inline bool GetForceStopAppReplication() const { return m_forceStopAppReplication; }
    inline bool ForceStopAppReplicationHasBeenSet() const { return m_forceStopAppReplicationHasBeenSet; }
    inline void SetForceStopAppReplication(bool value) { m_forceStopAppReplicationHasBeenSet = true; m_forceStopAppReplication = value; }
    inline DeleteAppRequest& WithForceStopAppReplication(bool value) { SetForceStopAppReplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to terminate the stack corresponding to the application
     * while deleting the application.</p>
     */
    inline bool GetForceTerminateApp() const { return m_forceTerminateApp; }
    inline bool ForceTerminateAppHasBeenSet() const { return m_forceTerminateAppHasBeenSet; }
    inline void SetForceTerminateApp(bool value) { m_forceTerminateAppHasBeenSet = true; m_forceTerminateApp = value; }
    inline DeleteAppRequest& WithForceTerminateApp(bool value) { SetForceTerminateApp(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    bool m_forceStopAppReplication{false};
    bool m_forceStopAppReplicationHasBeenSet = false;

    bool m_forceTerminateApp{false};
    bool m_forceTerminateAppHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
