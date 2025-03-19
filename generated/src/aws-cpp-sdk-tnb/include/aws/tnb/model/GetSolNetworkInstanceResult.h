/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/LcmOperationInfo.h>
#include <aws/tnb/model/GetSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/NsState.h>
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
namespace tnb
{
namespace Model
{
  class GetSolNetworkInstanceResult
  {
  public:
    AWS_TNB_API GetSolNetworkInstanceResult() = default;
    AWS_TNB_API GetSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network instance ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSolNetworkInstanceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSolNetworkInstanceResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LcmOperationInfo& GetLcmOpInfo() const { return m_lcmOpInfo; }
    template<typename LcmOpInfoT = LcmOperationInfo>
    void SetLcmOpInfo(LcmOpInfoT&& value) { m_lcmOpInfoHasBeenSet = true; m_lcmOpInfo = std::forward<LcmOpInfoT>(value); }
    template<typename LcmOpInfoT = LcmOperationInfo>
    GetSolNetworkInstanceResult& WithLcmOpInfo(LcmOpInfoT&& value) { SetLcmOpInfo(std::forward<LcmOpInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GetSolNetworkInstanceMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = GetSolNetworkInstanceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = GetSolNetworkInstanceMetadata>
    GetSolNetworkInstanceResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance description.</p>
     */
    inline const Aws::String& GetNsInstanceDescription() const { return m_nsInstanceDescription; }
    template<typename NsInstanceDescriptionT = Aws::String>
    void SetNsInstanceDescription(NsInstanceDescriptionT&& value) { m_nsInstanceDescriptionHasBeenSet = true; m_nsInstanceDescription = std::forward<NsInstanceDescriptionT>(value); }
    template<typename NsInstanceDescriptionT = Aws::String>
    GetSolNetworkInstanceResult& WithNsInstanceDescription(NsInstanceDescriptionT&& value) { SetNsInstanceDescription(std::forward<NsInstanceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance name.</p>
     */
    inline const Aws::String& GetNsInstanceName() const { return m_nsInstanceName; }
    template<typename NsInstanceNameT = Aws::String>
    void SetNsInstanceName(NsInstanceNameT&& value) { m_nsInstanceNameHasBeenSet = true; m_nsInstanceName = std::forward<NsInstanceNameT>(value); }
    template<typename NsInstanceNameT = Aws::String>
    GetSolNetworkInstanceResult& WithNsInstanceName(NsInstanceNameT&& value) { SetNsInstanceName(std::forward<NsInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance state.</p>
     */
    inline NsState GetNsState() const { return m_nsState; }
    inline void SetNsState(NsState value) { m_nsStateHasBeenSet = true; m_nsState = value; }
    inline GetSolNetworkInstanceResult& WithNsState(NsState value) { SetNsState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const { return m_nsdId; }
    template<typename NsdIdT = Aws::String>
    void SetNsdId(NsdIdT&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::forward<NsdIdT>(value); }
    template<typename NsdIdT = Aws::String>
    GetSolNetworkInstanceResult& WithNsdId(NsdIdT&& value) { SetNsdId(std::forward<NsdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    GetSolNetworkInstanceResult& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
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
    GetSolNetworkInstanceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSolNetworkInstanceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolNetworkInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LcmOperationInfo m_lcmOpInfo;
    bool m_lcmOpInfoHasBeenSet = false;

    GetSolNetworkInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceDescription;
    bool m_nsInstanceDescriptionHasBeenSet = false;

    Aws::String m_nsInstanceName;
    bool m_nsInstanceNameHasBeenSet = false;

    NsState m_nsState{NsState::NOT_SET};
    bool m_nsStateHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
