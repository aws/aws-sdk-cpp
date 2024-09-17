/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/nimble/model/StudioState.h>
#include <aws/nimble/model/StudioStatusCode.h>
#include <aws/nimble/model/StudioEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Represents a studio resource.</p> <p>A studio is the core resource used with
   * Nimble Studio. You must create a studio first, before any other resource type
   * can be created. All other resources you create and manage in Nimble Studio are
   * contained within a studio.</p> <p>When creating a studio, you must provides two
   * IAM roles for use with the Nimble Studio portal. These roles are assumed by your
   * users when they log in to the Nimble Studio portal via IAM Identity Center and
   * your identity source.</p> <p>The user role must have the
   * <code>AmazonNimbleStudio-StudioUser</code> managed policy attached for the
   * portal to function properly.</p> <p>The admin role must have the
   * <code>AmazonNimbleStudio-StudioAdmin</code> managed policy attached for the
   * portal to function properly.</p> <p>Your studio roles must trust the
   * <code>identity.nimble.amazonaws.com</code> service principal to function
   * properly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/Studio">AWS API
   * Reference</a></p>
   */
  class Studio
  {
  public:
    AWS_NIMBLESTUDIO_API Studio();
    AWS_NIMBLESTUDIO_API Studio(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Studio& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline const Aws::String& GetAdminRoleArn() const{ return m_adminRoleArn; }
    inline bool AdminRoleArnHasBeenSet() const { return m_adminRoleArnHasBeenSet; }
    inline void SetAdminRoleArn(const Aws::String& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = value; }
    inline void SetAdminRoleArn(Aws::String&& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = std::move(value); }
    inline void SetAdminRoleArn(const char* value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn.assign(value); }
    inline Studio& WithAdminRoleArn(const Aws::String& value) { SetAdminRoleArn(value); return *this;}
    inline Studio& WithAdminRoleArn(Aws::String&& value) { SetAdminRoleArn(std::move(value)); return *this;}
    inline Studio& WithAdminRoleArn(const char* value) { SetAdminRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Studio& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Studio& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Studio& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Studio& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Studio& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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
    inline Studio& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Studio& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Studio& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline Studio& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline Studio& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline Studio& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetSsoClientId() const{ return m_ssoClientId; }
    inline bool SsoClientIdHasBeenSet() const { return m_ssoClientIdHasBeenSet; }
    inline void SetSsoClientId(const Aws::String& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = value; }
    inline void SetSsoClientId(Aws::String&& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = std::move(value); }
    inline void SetSsoClientId(const char* value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId.assign(value); }
    inline Studio& WithSsoClientId(const Aws::String& value) { SetSsoClientId(value); return *this;}
    inline Studio& WithSsoClientId(Aws::String&& value) { SetSsoClientId(std::move(value)); return *this;}
    inline Studio& WithSsoClientId(const char* value) { SetSsoClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the studio resource.</p>
     */
    inline const StudioState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StudioState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StudioState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Studio& WithState(const StudioState& value) { SetState(value); return *this;}
    inline Studio& WithState(StudioState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline const StudioStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StudioStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StudioStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline Studio& WithStatusCode(const StudioStatusCode& value) { SetStatusCode(value); return *this;}
    inline Studio& WithStatusCode(StudioStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline Studio& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline Studio& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline Studio& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline const StudioEncryptionConfiguration& GetStudioEncryptionConfiguration() const{ return m_studioEncryptionConfiguration; }
    inline bool StudioEncryptionConfigurationHasBeenSet() const { return m_studioEncryptionConfigurationHasBeenSet; }
    inline void SetStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = value; }
    inline void SetStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = std::move(value); }
    inline Studio& WithStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { SetStudioEncryptionConfiguration(value); return *this;}
    inline Studio& WithStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { SetStudioEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline Studio& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline Studio& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline Studio& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline const Aws::String& GetStudioName() const{ return m_studioName; }
    inline bool StudioNameHasBeenSet() const { return m_studioNameHasBeenSet; }
    inline void SetStudioName(const Aws::String& value) { m_studioNameHasBeenSet = true; m_studioName = value; }
    inline void SetStudioName(Aws::String&& value) { m_studioNameHasBeenSet = true; m_studioName = std::move(value); }
    inline void SetStudioName(const char* value) { m_studioNameHasBeenSet = true; m_studioName.assign(value); }
    inline Studio& WithStudioName(const Aws::String& value) { SetStudioName(value); return *this;}
    inline Studio& WithStudioName(Aws::String&& value) { SetStudioName(std::move(value)); return *this;}
    inline Studio& WithStudioName(const char* value) { SetStudioName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline const Aws::String& GetStudioUrl() const{ return m_studioUrl; }
    inline bool StudioUrlHasBeenSet() const { return m_studioUrlHasBeenSet; }
    inline void SetStudioUrl(const Aws::String& value) { m_studioUrlHasBeenSet = true; m_studioUrl = value; }
    inline void SetStudioUrl(Aws::String&& value) { m_studioUrlHasBeenSet = true; m_studioUrl = std::move(value); }
    inline void SetStudioUrl(const char* value) { m_studioUrlHasBeenSet = true; m_studioUrl.assign(value); }
    inline Studio& WithStudioUrl(const Aws::String& value) { SetStudioUrl(value); return *this;}
    inline Studio& WithStudioUrl(Aws::String&& value) { SetStudioUrl(std::move(value)); return *this;}
    inline Studio& WithStudioUrl(const char* value) { SetStudioUrl(value); return *this;}
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
    inline Studio& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Studio& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Studio& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Studio& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Studio& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Studio& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Studio& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Studio& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Studio& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Studio& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Studio& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline const Aws::String& GetUserRoleArn() const{ return m_userRoleArn; }
    inline bool UserRoleArnHasBeenSet() const { return m_userRoleArnHasBeenSet; }
    inline void SetUserRoleArn(const Aws::String& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = value; }
    inline void SetUserRoleArn(Aws::String&& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = std::move(value); }
    inline void SetUserRoleArn(const char* value) { m_userRoleArnHasBeenSet = true; m_userRoleArn.assign(value); }
    inline Studio& WithUserRoleArn(const Aws::String& value) { SetUserRoleArn(value); return *this;}
    inline Studio& WithUserRoleArn(Aws::String&& value) { SetUserRoleArn(std::move(value)); return *this;}
    inline Studio& WithUserRoleArn(const char* value) { SetUserRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_adminRoleArn;
    bool m_adminRoleArnHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::String m_ssoClientId;
    bool m_ssoClientIdHasBeenSet = false;

    StudioState m_state;
    bool m_stateHasBeenSet = false;

    StudioStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    StudioEncryptionConfiguration m_studioEncryptionConfiguration;
    bool m_studioEncryptionConfigurationHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_studioName;
    bool m_studioNameHasBeenSet = false;

    Aws::String m_studioUrl;
    bool m_studioUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_userRoleArn;
    bool m_userRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
