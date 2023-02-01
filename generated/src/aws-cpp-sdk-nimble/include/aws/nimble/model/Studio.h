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


    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline const Aws::String& GetAdminRoleArn() const{ return m_adminRoleArn; }

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline bool AdminRoleArnHasBeenSet() const { return m_adminRoleArnHasBeenSet; }

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetAdminRoleArn(const Aws::String& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = value; }

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetAdminRoleArn(Aws::String&& value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn = std::move(value); }

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetAdminRoleArn(const char* value) { m_adminRoleArnHasBeenSet = true; m_adminRoleArn.assign(value); }

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithAdminRoleArn(const Aws::String& value) { SetAdminRoleArn(value); return *this;}

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithAdminRoleArn(Aws::String&& value) { SetAdminRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that studio admins assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithAdminRoleArn(const char* value) { SetAdminRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline Studio& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline Studio& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline Studio& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline Studio& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline Studio& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A friendly name for the studio.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline Studio& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline Studio& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the studio.</p>
     */
    inline Studio& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline Studio& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline Studio& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the studio resource is located.</p>
     */
    inline Studio& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline const Aws::String& GetSsoClientId() const{ return m_ssoClientId; }

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline bool SsoClientIdHasBeenSet() const { return m_ssoClientIdHasBeenSet; }

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline void SetSsoClientId(const Aws::String& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = value; }

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline void SetSsoClientId(Aws::String&& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = std::move(value); }

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline void SetSsoClientId(const char* value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId.assign(value); }

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline Studio& WithSsoClientId(const Aws::String& value) { SetSsoClientId(value); return *this;}

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline Studio& WithSsoClientId(Aws::String&& value) { SetSsoClientId(std::move(value)); return *this;}

    /**
     * <p>The IAM Identity Center application client ID used to integrate with IAM
     * Identity Center. This ID allows IAM Identity Center users to log in to Nimble
     * Studio portal.</p>
     */
    inline Studio& WithSsoClientId(const char* value) { SetSsoClientId(value); return *this;}


    /**
     * <p>The current state of the studio resource.</p>
     */
    inline const StudioState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the studio resource.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the studio resource.</p>
     */
    inline void SetState(const StudioState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the studio resource.</p>
     */
    inline void SetState(StudioState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the studio resource.</p>
     */
    inline Studio& WithState(const StudioState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the studio resource.</p>
     */
    inline Studio& WithState(StudioState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline const StudioStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline void SetStatusCode(const StudioStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline void SetStatusCode(StudioStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline Studio& WithStatusCode(const StudioStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Status codes that provide additional detail on the studio state.</p>
     */
    inline Studio& WithStatusCode(StudioStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline Studio& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline Studio& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Additional detail on the studio state.</p>
     */
    inline Studio& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline const StudioEncryptionConfiguration& GetStudioEncryptionConfiguration() const{ return m_studioEncryptionConfiguration; }

    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline bool StudioEncryptionConfigurationHasBeenSet() const { return m_studioEncryptionConfigurationHasBeenSet; }

    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline void SetStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = value; }

    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline void SetStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { m_studioEncryptionConfigurationHasBeenSet = true; m_studioEncryptionConfiguration = std::move(value); }

    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline Studio& WithStudioEncryptionConfiguration(const StudioEncryptionConfiguration& value) { SetStudioEncryptionConfiguration(value); return *this;}

    /**
     * <p>Configuration of the encryption method that is used for the studio.</p>
     */
    inline Studio& WithStudioEncryptionConfiguration(StudioEncryptionConfiguration&& value) { SetStudioEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline Studio& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline Studio& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a studio resource. In Nimble Studio, all other
     * resources are contained in a studio resource.</p>
     */
    inline Studio& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline const Aws::String& GetStudioName() const{ return m_studioName; }

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline bool StudioNameHasBeenSet() const { return m_studioNameHasBeenSet; }

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline void SetStudioName(const Aws::String& value) { m_studioNameHasBeenSet = true; m_studioName = value; }

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline void SetStudioName(Aws::String&& value) { m_studioNameHasBeenSet = true; m_studioName = std::move(value); }

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline void SetStudioName(const char* value) { m_studioNameHasBeenSet = true; m_studioName.assign(value); }

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline Studio& WithStudioName(const Aws::String& value) { SetStudioName(value); return *this;}

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline Studio& WithStudioName(Aws::String&& value) { SetStudioName(std::move(value)); return *this;}

    /**
     * <p>The name of the studio, as included in the URL when accessing it in the
     * Nimble Studio portal.</p>
     */
    inline Studio& WithStudioName(const char* value) { SetStudioName(value); return *this;}


    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline const Aws::String& GetStudioUrl() const{ return m_studioUrl; }

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline bool StudioUrlHasBeenSet() const { return m_studioUrlHasBeenSet; }

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline void SetStudioUrl(const Aws::String& value) { m_studioUrlHasBeenSet = true; m_studioUrl = value; }

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline void SetStudioUrl(Aws::String&& value) { m_studioUrlHasBeenSet = true; m_studioUrl = std::move(value); }

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline void SetStudioUrl(const char* value) { m_studioUrlHasBeenSet = true; m_studioUrl.assign(value); }

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline Studio& WithStudioUrl(const Aws::String& value) { SetStudioUrl(value); return *this;}

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline Studio& WithStudioUrl(Aws::String&& value) { SetStudioUrl(std::move(value)); return *this;}

    /**
     * <p>The address of the web page for the studio.</p>
     */
    inline Studio& WithStudioUrl(const char* value) { SetStudioUrl(value); return *this;}


    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline Studio& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline Studio& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline Studio& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline const Aws::String& GetUserRoleArn() const{ return m_userRoleArn; }

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline bool UserRoleArnHasBeenSet() const { return m_userRoleArnHasBeenSet; }

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetUserRoleArn(const Aws::String& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = value; }

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetUserRoleArn(Aws::String&& value) { m_userRoleArnHasBeenSet = true; m_userRoleArn = std::move(value); }

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline void SetUserRoleArn(const char* value) { m_userRoleArnHasBeenSet = true; m_userRoleArn.assign(value); }

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithUserRoleArn(const Aws::String& value) { SetUserRoleArn(value); return *this;}

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithUserRoleArn(Aws::String&& value) { SetUserRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that studio users assume when logging in to the Nimble Studio
     * portal.</p>
     */
    inline Studio& WithUserRoleArn(const char* value) { SetUserRoleArn(value); return *this;}

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
