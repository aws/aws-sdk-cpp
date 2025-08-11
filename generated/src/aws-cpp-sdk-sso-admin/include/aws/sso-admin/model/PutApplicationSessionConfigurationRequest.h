/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/UserBackgroundSessionApplicationStatus.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class PutApplicationSessionConfigurationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationSessionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationSessionConfiguration"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application for which to update the
     * session configuration.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    PutApplicationSessionConfigurationRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of user background sessions for the application.</p>
     */
    inline UserBackgroundSessionApplicationStatus GetUserBackgroundSessionApplicationStatus() const { return m_userBackgroundSessionApplicationStatus; }
    inline bool UserBackgroundSessionApplicationStatusHasBeenSet() const { return m_userBackgroundSessionApplicationStatusHasBeenSet; }
    inline void SetUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus value) { m_userBackgroundSessionApplicationStatusHasBeenSet = true; m_userBackgroundSessionApplicationStatus = value; }
    inline PutApplicationSessionConfigurationRequest& WithUserBackgroundSessionApplicationStatus(UserBackgroundSessionApplicationStatus value) { SetUserBackgroundSessionApplicationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    UserBackgroundSessionApplicationStatus m_userBackgroundSessionApplicationStatus{UserBackgroundSessionApplicationStatus::NOT_SET};
    bool m_userBackgroundSessionApplicationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
