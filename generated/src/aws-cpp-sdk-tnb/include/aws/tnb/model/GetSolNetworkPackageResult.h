/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolNetworkPackageMetadata.h>
#include <aws/tnb/model/NsdOnboardingState.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <aws/tnb/model/NsdUsageState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace tnb
{
namespace Model
{
  class GetSolNetworkPackageResult
  {
  public:
    AWS_TNB_API GetSolNetworkPackageResult() = default;
    AWS_TNB_API GetSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSolNetworkPackageResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSolNetworkPackageResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GetSolNetworkPackageMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = GetSolNetworkPackageMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = GetSolNetworkPackageMetadata>
    GetSolNetworkPackageResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const { return m_nsdId; }
    template<typename NsdIdT = Aws::String>
    void SetNsdId(NsdIdT&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::forward<NsdIdT>(value); }
    template<typename NsdIdT = Aws::String>
    GetSolNetworkPackageResult& WithNsdId(NsdIdT&& value) { SetNsdId(std::forward<NsdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const { return m_nsdName; }
    template<typename NsdNameT = Aws::String>
    void SetNsdName(NsdNameT&& value) { m_nsdNameHasBeenSet = true; m_nsdName = std::forward<NsdNameT>(value); }
    template<typename NsdNameT = Aws::String>
    GetSolNetworkPackageResult& WithNsdName(NsdNameT&& value) { SetNsdName(std::forward<NsdNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor onboarding state.</p>
     */
    inline NsdOnboardingState GetNsdOnboardingState() const { return m_nsdOnboardingState; }
    inline void SetNsdOnboardingState(NsdOnboardingState value) { m_nsdOnboardingStateHasBeenSet = true; m_nsdOnboardingState = value; }
    inline GetSolNetworkPackageResult& WithNsdOnboardingState(NsdOnboardingState value) { SetNsdOnboardingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor operational state.</p>
     */
    inline NsdOperationalState GetNsdOperationalState() const { return m_nsdOperationalState; }
    inline void SetNsdOperationalState(NsdOperationalState value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline GetSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState value) { SetNsdOperationalState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor usage state.</p>
     */
    inline NsdUsageState GetNsdUsageState() const { return m_nsdUsageState; }
    inline void SetNsdUsageState(NsdUsageState value) { m_nsdUsageStateHasBeenSet = true; m_nsdUsageState = value; }
    inline GetSolNetworkPackageResult& WithNsdUsageState(NsdUsageState value) { SetNsdUsageState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const { return m_nsdVersion; }
    template<typename NsdVersionT = Aws::String>
    void SetNsdVersion(NsdVersionT&& value) { m_nsdVersionHasBeenSet = true; m_nsdVersion = std::forward<NsdVersionT>(value); }
    template<typename NsdVersionT = Aws::String>
    GetSolNetworkPackageResult& WithNsdVersion(NsdVersionT&& value) { SetNsdVersion(std::forward<NsdVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetSolNetworkPackageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSolNetworkPackageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const { return m_vnfPkgIds; }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    void SetVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds = std::forward<VnfPkgIdsT>(value); }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    GetSolNetworkPackageResult& WithVnfPkgIds(VnfPkgIdsT&& value) { SetVnfPkgIds(std::forward<VnfPkgIdsT>(value)); return *this;}
    template<typename VnfPkgIdsT = Aws::String>
    GetSolNetworkPackageResult& AddVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.emplace_back(std::forward<VnfPkgIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolNetworkPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GetSolNetworkPackageMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdName;
    bool m_nsdNameHasBeenSet = false;

    NsdOnboardingState m_nsdOnboardingState{NsdOnboardingState::NOT_SET};
    bool m_nsdOnboardingStateHasBeenSet = false;

    NsdOperationalState m_nsdOperationalState{NsdOperationalState::NOT_SET};
    bool m_nsdOperationalStateHasBeenSet = false;

    NsdUsageState m_nsdUsageState{NsdUsageState::NOT_SET};
    bool m_nsdUsageStateHasBeenSet = false;

    Aws::String m_nsdVersion;
    bool m_nsdVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vnfPkgIds;
    bool m_vnfPkgIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
