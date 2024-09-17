/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class UpdatePermissionSetRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API UpdatePermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePermissionSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePermissionSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePermissionSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline UpdatePermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline UpdatePermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline UpdatePermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the permission set.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }
    inline UpdatePermissionSetRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}
    inline UpdatePermissionSetRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}
    inline UpdatePermissionSetRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline const Aws::String& GetRelayState() const{ return m_relayState; }
    inline bool RelayStateHasBeenSet() const { return m_relayStateHasBeenSet; }
    inline void SetRelayState(const Aws::String& value) { m_relayStateHasBeenSet = true; m_relayState = value; }
    inline void SetRelayState(Aws::String&& value) { m_relayStateHasBeenSet = true; m_relayState = std::move(value); }
    inline void SetRelayState(const char* value) { m_relayStateHasBeenSet = true; m_relayState.assign(value); }
    inline UpdatePermissionSetRequest& WithRelayState(const Aws::String& value) { SetRelayState(value); return *this;}
    inline UpdatePermissionSetRequest& WithRelayState(Aws::String&& value) { SetRelayState(std::move(value)); return *this;}
    inline UpdatePermissionSetRequest& WithRelayState(const char* value) { SetRelayState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline const Aws::String& GetSessionDuration() const{ return m_sessionDuration; }
    inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }
    inline void SetSessionDuration(const Aws::String& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = value; }
    inline void SetSessionDuration(Aws::String&& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = std::move(value); }
    inline void SetSessionDuration(const char* value) { m_sessionDurationHasBeenSet = true; m_sessionDuration.assign(value); }
    inline UpdatePermissionSetRequest& WithSessionDuration(const Aws::String& value) { SetSessionDuration(value); return *this;}
    inline UpdatePermissionSetRequest& WithSessionDuration(Aws::String&& value) { SetSessionDuration(std::move(value)); return *this;}
    inline UpdatePermissionSetRequest& WithSessionDuration(const char* value) { SetSessionDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_relayState;
    bool m_relayStateHasBeenSet = false;

    Aws::String m_sessionDuration;
    bool m_sessionDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
