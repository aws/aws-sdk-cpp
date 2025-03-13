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
    AWS_MEDIAPACKAGE_API OriginEndpoint() = default;
    AWS_MEDIAPACKAGE_API OriginEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API OriginEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    OriginEndpoint& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Authorization& GetAuthorization() const { return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    template<typename AuthorizationT = Authorization>
    void SetAuthorization(AuthorizationT&& value) { m_authorizationHasBeenSet = true; m_authorization = std::forward<AuthorizationT>(value); }
    template<typename AuthorizationT = Authorization>
    OriginEndpoint& WithAuthorization(AuthorizationT&& value) { SetAuthorization(std::forward<AuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    OriginEndpoint& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackage& GetCmafPackage() const { return m_cmafPackage; }
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }
    template<typename CmafPackageT = CmafPackage>
    void SetCmafPackage(CmafPackageT&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::forward<CmafPackageT>(value); }
    template<typename CmafPackageT = CmafPackage>
    OriginEndpoint& WithCmafPackage(CmafPackageT&& value) { SetCmafPackage(std::forward<CmafPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the OriginEndpoint was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    OriginEndpoint& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const { return m_dashPackage; }
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }
    template<typename DashPackageT = DashPackage>
    void SetDashPackage(DashPackageT&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::forward<DashPackageT>(value); }
    template<typename DashPackageT = DashPackage>
    OriginEndpoint& WithDashPackage(DashPackageT&& value) { SetDashPackage(std::forward<DashPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short text description of the OriginEndpoint.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OriginEndpoint& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const { return m_hlsPackage; }
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }
    template<typename HlsPackageT = HlsPackage>
    void SetHlsPackage(HlsPackageT&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::forward<HlsPackageT>(value); }
    template<typename HlsPackageT = HlsPackage>
    OriginEndpoint& WithHlsPackage(HlsPackageT&& value) { SetHlsPackage(std::forward<HlsPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OriginEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    OriginEndpoint& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const { return m_mssPackage; }
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }
    template<typename MssPackageT = MssPackage>
    void SetMssPackage(MssPackageT&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::forward<MssPackageT>(value); }
    template<typename MssPackageT = MssPackage>
    OriginEndpoint& WithMssPackage(MssPackageT&& value) { SetMssPackage(std::forward<MssPackageT>(value)); return *this;}
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
    inline Origination GetOrigination() const { return m_origination; }
    inline bool OriginationHasBeenSet() const { return m_originationHasBeenSet; }
    inline void SetOrigination(Origination value) { m_originationHasBeenSet = true; m_origination = value; }
    inline OriginEndpoint& WithOrigination(Origination value) { SetOrigination(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const { return m_startoverWindowSeconds; }
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }
    inline OriginEndpoint& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    OriginEndpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    OriginEndpoint& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const { return m_timeDelaySeconds; }
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }
    inline OriginEndpoint& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    OriginEndpoint& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline const Aws::Vector<Aws::String>& GetWhitelist() const { return m_whitelist; }
    inline bool WhitelistHasBeenSet() const { return m_whitelistHasBeenSet; }
    template<typename WhitelistT = Aws::Vector<Aws::String>>
    void SetWhitelist(WhitelistT&& value) { m_whitelistHasBeenSet = true; m_whitelist = std::forward<WhitelistT>(value); }
    template<typename WhitelistT = Aws::Vector<Aws::String>>
    OriginEndpoint& WithWhitelist(WhitelistT&& value) { SetWhitelist(std::forward<WhitelistT>(value)); return *this;}
    template<typename WhitelistT = Aws::String>
    OriginEndpoint& AddWhitelist(WhitelistT&& value) { m_whitelistHasBeenSet = true; m_whitelist.emplace_back(std::forward<WhitelistT>(value)); return *this; }
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

    Origination m_origination{Origination::NOT_SET};
    bool m_originationHasBeenSet = false;

    int m_startoverWindowSeconds{0};
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_timeDelaySeconds{0};
    bool m_timeDelaySecondsHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
