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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaPackageVod
{
namespace Model
{
  class DescribePackagingConfigurationResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult() = default;
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the PackagingConfiguration.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribePackagingConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackage& GetCmafPackage() const { return m_cmafPackage; }
    template<typename CmafPackageT = CmafPackage>
    void SetCmafPackage(CmafPackageT&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::forward<CmafPackageT>(value); }
    template<typename CmafPackageT = CmafPackage>
    DescribePackagingConfigurationResult& WithCmafPackage(CmafPackageT&& value) { SetCmafPackage(std::forward<CmafPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time the PackagingConfiguration was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    DescribePackagingConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const { return m_dashPackage; }
    template<typename DashPackageT = DashPackage>
    void SetDashPackage(DashPackageT&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::forward<DashPackageT>(value); }
    template<typename DashPackageT = DashPackage>
    DescribePackagingConfigurationResult& WithDashPackage(DashPackageT&& value) { SetDashPackage(std::forward<DashPackageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const { return m_hlsPackage; }
    template<typename HlsPackageT = HlsPackage>
    void SetHlsPackage(HlsPackageT&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::forward<HlsPackageT>(value); }
    template<typename HlsPackageT = HlsPackage>
    DescribePackagingConfigurationResult& WithHlsPackage(HlsPackageT&& value) { SetHlsPackage(std::forward<HlsPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribePackagingConfigurationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const { return m_mssPackage; }
    template<typename MssPackageT = MssPackage>
    void SetMssPackage(MssPackageT&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::forward<MssPackageT>(value); }
    template<typename MssPackageT = MssPackage>
    DescribePackagingConfigurationResult& WithMssPackage(MssPackageT&& value) { SetMssPackage(std::forward<MssPackageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const { return m_packagingGroupId; }
    template<typename PackagingGroupIdT = Aws::String>
    void SetPackagingGroupId(PackagingGroupIdT&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::forward<PackagingGroupIdT>(value); }
    template<typename PackagingGroupIdT = Aws::String>
    DescribePackagingConfigurationResult& WithPackagingGroupId(PackagingGroupIdT&& value) { SetPackagingGroupId(std::forward<PackagingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribePackagingConfigurationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribePackagingConfigurationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePackagingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
