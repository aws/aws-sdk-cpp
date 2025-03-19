/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/mediapackage/model/Authorization.h>
#include <aws/mediapackage/model/CmafPackageCreateOrUpdateParameters.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/mediapackage/model/Origination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters used to update an existing OriginEndpoint.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateOriginEndpointRequest">AWS
   * API Reference</a></p>
   */
  class UpdateOriginEndpointRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API UpdateOriginEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginEndpoint"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Authorization& GetAuthorization() const { return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    template<typename AuthorizationT = Authorization>
    void SetAuthorization(AuthorizationT&& value) { m_authorizationHasBeenSet = true; m_authorization = std::forward<AuthorizationT>(value); }
    template<typename AuthorizationT = Authorization>
    UpdateOriginEndpointRequest& WithAuthorization(AuthorizationT&& value) { SetAuthorization(std::forward<AuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackageCreateOrUpdateParameters& GetCmafPackage() const { return m_cmafPackage; }
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }
    template<typename CmafPackageT = CmafPackageCreateOrUpdateParameters>
    void SetCmafPackage(CmafPackageT&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::forward<CmafPackageT>(value); }
    template<typename CmafPackageT = CmafPackageCreateOrUpdateParameters>
    UpdateOriginEndpointRequest& WithCmafPackage(CmafPackageT&& value) { SetCmafPackage(std::forward<CmafPackageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const { return m_dashPackage; }
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }
    template<typename DashPackageT = DashPackage>
    void SetDashPackage(DashPackageT&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::forward<DashPackageT>(value); }
    template<typename DashPackageT = DashPackage>
    UpdateOriginEndpointRequest& WithDashPackage(DashPackageT&& value) { SetDashPackage(std::forward<DashPackageT>(value)); return *this;}
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
    UpdateOriginEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const { return m_hlsPackage; }
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }
    template<typename HlsPackageT = HlsPackage>
    void SetHlsPackage(HlsPackageT&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::forward<HlsPackageT>(value); }
    template<typename HlsPackageT = HlsPackage>
    UpdateOriginEndpointRequest& WithHlsPackage(HlsPackageT&& value) { SetHlsPackage(std::forward<HlsPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint to update.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateOriginEndpointRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short string that will be appended to the end of the Endpoint URL.
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    UpdateOriginEndpointRequest& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const { return m_mssPackage; }
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }
    template<typename MssPackageT = MssPackage>
    void SetMssPackage(MssPackageT&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::forward<MssPackageT>(value); }
    template<typename MssPackageT = MssPackage>
    UpdateOriginEndpointRequest& WithMssPackage(MssPackageT&& value) { SetMssPackage(std::forward<MssPackageT>(value)); return *this;}
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
    inline UpdateOriginEndpointRequest& WithOrigination(Origination value) { SetOrigination(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum duration (in seconds) of content to retain for startover playback.
If
     * not specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const { return m_startoverWindowSeconds; }
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }
    inline UpdateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Amount of delay (in seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const { return m_timeDelaySeconds; }
    inline bool TimeDelaySecondsHasBeenSet() const { return m_timeDelaySecondsHasBeenSet; }
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySecondsHasBeenSet = true; m_timeDelaySeconds = value; }
    inline UpdateOriginEndpointRequest& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}
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
    UpdateOriginEndpointRequest& WithWhitelist(WhitelistT&& value) { SetWhitelist(std::forward<WhitelistT>(value)); return *this;}
    template<typename WhitelistT = Aws::String>
    UpdateOriginEndpointRequest& AddWhitelist(WhitelistT&& value) { m_whitelistHasBeenSet = true; m_whitelist.emplace_back(std::forward<WhitelistT>(value)); return *this; }
    ///@}
  private:

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    CmafPackageCreateOrUpdateParameters m_cmafPackage;
    bool m_cmafPackageHasBeenSet = false;

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

    int m_timeDelaySeconds{0};
    bool m_timeDelaySecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_whitelist;
    bool m_whitelistHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
