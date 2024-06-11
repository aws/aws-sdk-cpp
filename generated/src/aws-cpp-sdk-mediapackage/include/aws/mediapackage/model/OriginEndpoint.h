/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/Authorization.h>
#include <aws/mediapackage/model/CmafPackage.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/mediapackage/model/Origination.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An OriginEndpoint resource configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/OriginEndpoint">AWS
   * API Reference</a></p>
   */
  class OriginEndpoint
  {
  public:
    AWS_MEDIAPACKAGE_API OriginEndpoint();
    AWS_MEDIAPACKAGE_API OriginEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API OriginEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline OriginEndpoint& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline OriginEndpoint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline OriginEndpoint& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    inline void SetAuthorization(const Authorization& value) { m_authorizationHasBeenSet = true; m_authorization = value; }
    inline void SetAuthorization(Authorization&& value) { m_authorizationHasBeenSet = true; m_authorization = std::move(value); }
    inline OriginEndpoint& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}
    inline OriginEndpoint& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline OriginEndpoint& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline OriginEndpoint& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline OriginEndpoint& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }
    inline OriginEndpoint& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}
    inline OriginEndpoint& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the OriginEndpoint was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline OriginEndpoint& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline OriginEndpoint& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline OriginEndpoint& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }
    inline OriginEndpoint& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}
    inline OriginEndpoint& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short text description of the OriginEndpoint.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline OriginEndpoint& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline OriginEndpoint& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline OriginEndpoint& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }
    inline OriginEndpoint& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}
    inline OriginEndpoint& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline OriginEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline OriginEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline OriginEndpoint& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }
    inline OriginEndpoint& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}
    inline OriginEndpoint& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}
    inline OriginEndpoint& WithManifestName(const char* value) { SetManifestName(value); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }
    inline OriginEndpoint& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}
    inline OriginEndpoint& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline const Origination& GetOrigination() const{ return m_origination; }
    inline bool OriginationHasBeenSet() const { return m_originationHasBeenSet; }
    inline void SetOrigination(const Origination& value) { m_originationHasBeenSet = true; m_origination = value; }
    inline void SetOrigination(Origination&& value) { m_originationHasBeenSet = true; m_origination = std::move(value); }
    inline OriginEndpoint& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}
    inline OriginEndpoint& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }
    inline OriginEndpoint& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline OriginEndpoint& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline OriginEndpoint& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline OriginEndpoint& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline OriginEndpoint& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline OriginEndpoint& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline OriginEndpoint& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline OriginEndpoint& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline OriginEndpoint& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline OriginEndpoint& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const{ return m_timeDelaySeconds; }
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }
    inline OriginEndpoint& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline OriginEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline OriginEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline OriginEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline const Aws::Vector<Aws::String>& GetWhitelist() const{ return m_whitelist; }
    inline bool WhitelistHasBeenSet() const { return m_whitelistHasBeenSet; }
    inline void SetWhitelist(const Aws::Vector<Aws::String>& value) { m_whitelistHasBeenSet = true; m_whitelist = value; }
    inline void SetWhitelist(Aws::Vector<Aws::String>&& value) { m_whitelistHasBeenSet = true; m_whitelist = std::move(value); }
    inline OriginEndpoint& WithWhitelist(const Aws::Vector<Aws::String>& value) { SetWhitelist(value); return *this;}
    inline OriginEndpoint& WithWhitelist(Aws::Vector<Aws::String>&& value) { SetWhitelist(std::move(value)); return *this;}
    inline OriginEndpoint& AddWhitelist(const Aws::String& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }
    inline OriginEndpoint& AddWhitelist(Aws::String&& value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(std::move(value)); return *this; }
    inline OriginEndpoint& AddWhitelist(const char* value) { m_whitelistHasBeenSet = true; m_whitelist.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    CmafPackage m_cmafPackage;
    bool m_cmafPackageHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DashPackage m_dashPackage;
    bool m_dashPackageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HlsPackage m_hlsPackage;
    bool m_hlsPackageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    MssPackage m_mssPackage;
    bool m_mssPackageHasBeenSet = false;

    Origination m_origination;
    bool m_originationHasBeenSet = false;

    int m_startoverWindowSeconds;
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_timeDelaySeconds;
    bool m_timeDelaySecondsHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
