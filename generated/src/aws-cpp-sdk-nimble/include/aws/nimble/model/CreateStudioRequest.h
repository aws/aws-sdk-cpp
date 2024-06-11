/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StudioEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateStudioRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API CreateStudioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudio"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IAM role that studio admins will assume when logging in to the Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetAdminRoleArn() const{ return m_adminRoleArn; }
    inline bool AdminRoleArnHasBeenSet() const { return m_adminRoleArnHasBeenSet; }
    inline void SetAdminRoleArn(const Aws::String& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = value; }
    inline void SetAdminRoleArn(Aws::String&& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = std::move(value); }
    inline void SetAdminRoleArn(const char* value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn.assign(value); }
    inline CreateStudioRequest& WithAdminRoleArn(const Aws::String& value) { SetAdminRoleArn(value); return *this;}
    inline CreateStudioRequest& WithAdminRoleArn(Aws::String&& value) { SetAdminRoleArn(std::move(value)); return *this;}
    inline CreateStudioRequest& WithAdminRoleArn(const char* value) { SetAdminRoleArn(value); return *this;}
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
    inline CreateStudioRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStudioRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStudioRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateStudioRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateStudioRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateStudioRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio encryption configuration.</p>
     */
    inline const StudioEncryptionConfiguration& GetStudioEncryptionConfiguration() const{ return m_studioEncryptionConfiguration; }
    inline bool StudioEncryptionConfigurationHasBeenSet() const { return m_studioEncryptionConfigurationHasBeenSet; }
    inline void SetStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = value; }
    inline void SetStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = std::move(value); }
    inline CreateStudioRequest& WithStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { SetStudioEncryptionConfiguration(value); return *this;}
    inline CreateStudioRequest& WithStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { SetStudioEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio name that is used in the URL of the Nimble Studio portal when
     * accessed by Nimble Studio users.</p>
     */
    inline const Aws::String& GetStudioName() const{ return m_studioName; }
    inline bool StudioNameHasBeenSet() const { return m_studioNameHasBeenSet; }
    inline void SetStudioName(const Aws::String& value) { m_studioNameHasBeenSet = true; m_studioName = value; }
    inline void SetStudioName(Aws::String&& value) { m_studioNameHasBeenSet = true; m_studioName = std::move(value); }
    inline void SetStudioName(const char* value) { m_studioNameHasBeenSet = true; m_studioName.assign(value); }
    inline CreateStudioRequest& WithStudioName(const Aws::String& value) { SetStudioName(value); return *this;}
    inline CreateStudioRequest& WithStudioName(Aws::String&& value) { SetStudioName(std::move(value)); return *this;}
    inline CreateStudioRequest& WithStudioName(const char* value) { SetStudioName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStudioRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateStudioRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStudioRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateStudioRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStudioRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStudioRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateStudioRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateStudioRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateStudioRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that studio users will assume when logging in to the Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetUserRoleArn() const{ return m_userRoleArn; }
    inline bool UserRoleArnHasBeenSet() const { return m_userRoleArnHasBeenSet; }
    inline void SetUserRoleArn(const Aws::String& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = value; }
    inline void SetUserRoleArn(Aws::String&& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = std::move(value); }
    inline void SetUserRoleArn(const char* value) { m_userRoleArnHasBeenSet = true; m_userRoleArn.assign(value); }
    inline CreateStudioRequest& WithUserRoleArn(const Aws::String& value) { SetUserRoleArn(value); return *this;}
    inline CreateStudioRequest& WithUserRoleArn(Aws::String&& value) { SetUserRoleArn(std::move(value)); return *this;}
    inline CreateStudioRequest& WithUserRoleArn(const char* value) { SetUserRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_adminRoleArn;
    bool m_adminRoleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StudioEncryptionConfiguration m_studioEncryptionConfiguration;
    bool m_studioEncryptionConfigurationHasBeenSet = false;

    Aws::String m_studioName;
    bool m_studioNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userRoleArn;
    bool m_userRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
