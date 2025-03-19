/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolVnfInfo.h>
#include <aws/tnb/model/VnfInstantiationState.h>
#include <aws/tnb/model/GetSolFunctionInstanceMetadata.h>
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
  class GetSolFunctionInstanceResult
  {
  public:
    AWS_TNB_API GetSolFunctionInstanceResult() = default;
    AWS_TNB_API GetSolFunctionInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolFunctionInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network function instance ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSolFunctionInstanceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSolFunctionInstanceResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GetSolVnfInfo& GetInstantiatedVnfInfo() const { return m_instantiatedVnfInfo; }
    template<typename InstantiatedVnfInfoT = GetSolVnfInfo>
    void SetInstantiatedVnfInfo(InstantiatedVnfInfoT&& value) { m_instantiatedVnfInfoHasBeenSet = true; m_instantiatedVnfInfo = std::forward<InstantiatedVnfInfoT>(value); }
    template<typename InstantiatedVnfInfoT = GetSolVnfInfo>
    GetSolFunctionInstanceResult& WithInstantiatedVnfInfo(InstantiatedVnfInfoT&& value) { SetInstantiatedVnfInfo(std::forward<InstantiatedVnfInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instantiation state.</p>
     */
    inline VnfInstantiationState GetInstantiationState() const { return m_instantiationState; }
    inline void SetInstantiationState(VnfInstantiationState value) { m_instantiationStateHasBeenSet = true; m_instantiationState = value; }
    inline GetSolFunctionInstanceResult& WithInstantiationState(VnfInstantiationState value) { SetInstantiationState(value); return *this;}
    ///@}

    ///@{
    
    inline const GetSolFunctionInstanceMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = GetSolFunctionInstanceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = GetSolFunctionInstanceMetadata>
    GetSolFunctionInstanceResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    GetSolFunctionInstanceResult& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
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
    GetSolFunctionInstanceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSolFunctionInstanceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetVnfPkgId() const { return m_vnfPkgId; }
    template<typename VnfPkgIdT = Aws::String>
    void SetVnfPkgId(VnfPkgIdT&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::forward<VnfPkgIdT>(value); }
    template<typename VnfPkgIdT = Aws::String>
    GetSolFunctionInstanceResult& WithVnfPkgId(VnfPkgIdT&& value) { SetVnfPkgId(std::forward<VnfPkgIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const { return m_vnfProductName; }
    template<typename VnfProductNameT = Aws::String>
    void SetVnfProductName(VnfProductNameT&& value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName = std::forward<VnfProductNameT>(value); }
    template<typename VnfProductNameT = Aws::String>
    GetSolFunctionInstanceResult& WithVnfProductName(VnfProductNameT&& value) { SetVnfProductName(std::forward<VnfProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const { return m_vnfProvider; }
    template<typename VnfProviderT = Aws::String>
    void SetVnfProvider(VnfProviderT&& value) { m_vnfProviderHasBeenSet = true; m_vnfProvider = std::forward<VnfProviderT>(value); }
    template<typename VnfProviderT = Aws::String>
    GetSolFunctionInstanceResult& WithVnfProvider(VnfProviderT&& value) { SetVnfProvider(std::forward<VnfProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor ID.</p>
     */
    inline const Aws::String& GetVnfdId() const { return m_vnfdId; }
    template<typename VnfdIdT = Aws::String>
    void SetVnfdId(VnfdIdT&& value) { m_vnfdIdHasBeenSet = true; m_vnfdId = std::forward<VnfdIdT>(value); }
    template<typename VnfdIdT = Aws::String>
    GetSolFunctionInstanceResult& WithVnfdId(VnfdIdT&& value) { SetVnfdId(std::forward<VnfdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor version.</p>
     */
    inline const Aws::String& GetVnfdVersion() const { return m_vnfdVersion; }
    template<typename VnfdVersionT = Aws::String>
    void SetVnfdVersion(VnfdVersionT&& value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion = std::forward<VnfdVersionT>(value); }
    template<typename VnfdVersionT = Aws::String>
    GetSolFunctionInstanceResult& WithVnfdVersion(VnfdVersionT&& value) { SetVnfdVersion(std::forward<VnfdVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolFunctionInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GetSolVnfInfo m_instantiatedVnfInfo;
    bool m_instantiatedVnfInfoHasBeenSet = false;

    VnfInstantiationState m_instantiationState{VnfInstantiationState::NOT_SET};
    bool m_instantiationStateHasBeenSet = false;

    GetSolFunctionInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;

    Aws::String m_vnfProductName;
    bool m_vnfProductNameHasBeenSet = false;

    Aws::String m_vnfProvider;
    bool m_vnfProviderHasBeenSet = false;

    Aws::String m_vnfdId;
    bool m_vnfdIdHasBeenSet = false;

    Aws::String m_vnfdVersion;
    bool m_vnfdVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
