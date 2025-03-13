/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/CmafPackage.h>
#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/mediapackage-vod/model/MssPackage.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/PackagingConfiguration">AWS
   * API Reference</a></p>
   */
  class PackagingConfiguration
  {
  public:
    AWS_MEDIAPACKAGEVOD_API PackagingConfiguration() = default;
    AWS_MEDIAPACKAGEVOD_API PackagingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API PackagingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the PackagingConfiguration.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PackagingConfiguration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackage& GetCmafPackage() const { return m_cmafPackage; }
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }
    template<typename CmafPackageT = CmafPackage>
    void SetCmafPackage(CmafPackageT&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::forward<CmafPackageT>(value); }
    template<typename CmafPackageT = CmafPackage>
    PackagingConfiguration& WithCmafPackage(CmafPackageT&& value) { SetCmafPackage(std::forward<CmafPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time the PackagingConfiguration was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    PackagingConfiguration& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const { return m_dashPackage; }
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }
    template<typename DashPackageT = DashPackage>
    void SetDashPackage(DashPackageT&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::forward<DashPackageT>(value); }
    template<typename DashPackageT = DashPackage>
    PackagingConfiguration& WithDashPackage(DashPackageT&& value) { SetDashPackage(std::forward<DashPackageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const { return m_hlsPackage; }
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }
    template<typename HlsPackageT = HlsPackage>
    void SetHlsPackage(HlsPackageT&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::forward<HlsPackageT>(value); }
    template<typename HlsPackageT = HlsPackage>
    PackagingConfiguration& WithHlsPackage(HlsPackageT&& value) { SetHlsPackage(std::forward<HlsPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PackagingConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const { return m_mssPackage; }
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }
    template<typename MssPackageT = MssPackage>
    void SetMssPackage(MssPackageT&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::forward<MssPackageT>(value); }
    template<typename MssPackageT = MssPackage>
    PackagingConfiguration& WithMssPackage(MssPackageT&& value) { SetMssPackage(std::forward<MssPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const { return m_packagingGroupId; }
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }
    template<typename PackagingGroupIdT = Aws::String>
    void SetPackagingGroupId(PackagingGroupIdT&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::forward<PackagingGroupIdT>(value); }
    template<typename PackagingGroupIdT = Aws::String>
    PackagingConfiguration& WithPackagingGroupId(PackagingGroupIdT&& value) { SetPackagingGroupId(std::forward<PackagingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PackagingConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PackagingConfiguration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CmafPackage m_cmafPackage;
    bool m_cmafPackageHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DashPackage m_dashPackage;
    bool m_dashPackageHasBeenSet = false;

    HlsPackage m_hlsPackage;
    bool m_hlsPackageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MssPackage m_mssPackage;
    bool m_mssPackageHasBeenSet = false;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
