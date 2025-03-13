/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
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
   * A MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/PackagingGroup">AWS
   * API Reference</a></p>
   */
  class PackagingGroup
  {
  public:
    AWS_MEDIAPACKAGEVOD_API PackagingGroup() = default;
    AWS_MEDIAPACKAGEVOD_API PackagingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API PackagingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The approximate asset count of the PackagingGroup.
     */
    inline int GetApproximateAssetCount() const { return m_approximateAssetCount; }
    inline bool ApproximateAssetCountHasBeenSet() const { return m_approximateAssetCountHasBeenSet; }
    inline void SetApproximateAssetCount(int value) { m_approximateAssetCountHasBeenSet = true; m_approximateAssetCount = value; }
    inline PackagingGroup& WithApproximateAssetCount(int value) { SetApproximateAssetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the PackagingGroup.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PackagingGroup& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Authorization& GetAuthorization() const { return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    template<typename AuthorizationT = Authorization>
    void SetAuthorization(AuthorizationT&& value) { m_authorizationHasBeenSet = true; m_authorization = std::forward<AuthorizationT>(value); }
    template<typename AuthorizationT = Authorization>
    PackagingGroup& WithAuthorization(AuthorizationT&& value) { SetAuthorization(std::forward<AuthorizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time the PackagingGroup was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    PackagingGroup& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The fully qualified domain name for Assets in the PackagingGroup.
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    PackagingGroup& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const { return m_egressAccessLogs; }
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    void SetEgressAccessLogs(EgressAccessLogsT&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::forward<EgressAccessLogsT>(value); }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    PackagingGroup& WithEgressAccessLogs(EgressAccessLogsT&& value) { SetEgressAccessLogs(std::forward<EgressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingGroup.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PackagingGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PackagingGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PackagingGroup& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_approximateAssetCount{0};
    bool m_approximateAssetCountHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Authorization m_authorization;
    bool m_authorizationHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
