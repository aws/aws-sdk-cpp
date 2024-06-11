/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class UpdateStudioRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API UpdateStudioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStudio"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IAM role that Studio Admins will assume when logging in to the Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetAdminRoleArn() const{ return m_adminRoleArn; }
    inline bool AdminRoleArnHasBeenSet() const { return m_adminRoleArnHasBeenSet; }
    inline void SetAdminRoleArn(const Aws::String& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = value; }
    inline void SetAdminRoleArn(Aws::String&& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = std::move(value); }
    inline void SetAdminRoleArn(const char* value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn.assign(value); }
    inline UpdateStudioRequest& WithAdminRoleArn(const Aws::String& value) { SetAdminRoleArn(value); return *this;}
    inline UpdateStudioRequest& WithAdminRoleArn(Aws::String&& value) { SetAdminRoleArn(std::move(value)); return *this;}
    inline UpdateStudioRequest& WithAdminRoleArn(const char* value) { SetAdminRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateStudioRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateStudioRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateStudioRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the studio.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateStudioRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateStudioRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateStudioRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline UpdateStudioRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline UpdateStudioRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline UpdateStudioRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Studio Users will assume when logging in to the Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetUserRoleArn() const{ return m_userRoleArn; }
    inline bool UserRoleArnHasBeenSet() const { return m_userRoleArnHasBeenSet; }
    inline void SetUserRoleArn(const Aws::String& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = value; }
    inline void SetUserRoleArn(Aws::String&& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = std::move(value); }
    inline void SetUserRoleArn(const char* value) { m_userRoleArnHasBeenSet = true; m_userRoleArn.assign(value); }
    inline UpdateStudioRequest& WithUserRoleArn(const Aws::String& value) { SetUserRoleArn(value); return *this;}
    inline UpdateStudioRequest& WithUserRoleArn(Aws::String&& value) { SetUserRoleArn(std::move(value)); return *this;}
    inline UpdateStudioRequest& WithUserRoleArn(const char* value) { SetUserRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_adminRoleArn;
    bool m_adminRoleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_userRoleArn;
    bool m_userRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
