/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/PutSolNetworkPackageContentMetadata.h>
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
  class PutSolNetworkPackageContentResult
  {
  public:
    AWS_TNB_API PutSolNetworkPackageContentResult() = default;
    AWS_TNB_API PutSolNetworkPackageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API PutSolNetworkPackageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PutSolNetworkPackageContentResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutSolNetworkPackageContentResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package metadata.</p>
     */
    inline const PutSolNetworkPackageContentMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = PutSolNetworkPackageContentMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = PutSolNetworkPackageContentMetadata>
    PutSolNetworkPackageContentResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const { return m_nsdId; }
    template<typename NsdIdT = Aws::String>
    void SetNsdId(NsdIdT&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::forward<NsdIdT>(value); }
    template<typename NsdIdT = Aws::String>
    PutSolNetworkPackageContentResult& WithNsdId(NsdIdT&& value) { SetNsdId(std::forward<NsdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const { return m_nsdName; }
    template<typename NsdNameT = Aws::String>
    void SetNsdName(NsdNameT&& value) { m_nsdNameHasBeenSet = true; m_nsdName = std::forward<NsdNameT>(value); }
    template<typename NsdNameT = Aws::String>
    PutSolNetworkPackageContentResult& WithNsdName(NsdNameT&& value) { SetNsdName(std::forward<NsdNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const { return m_nsdVersion; }
    template<typename NsdVersionT = Aws::String>
    void SetNsdVersion(NsdVersionT&& value) { m_nsdVersionHasBeenSet = true; m_nsdVersion = std::forward<NsdVersionT>(value); }
    template<typename NsdVersionT = Aws::String>
    PutSolNetworkPackageContentResult& WithNsdVersion(NsdVersionT&& value) { SetNsdVersion(std::forward<NsdVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const { return m_vnfPkgIds; }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    void SetVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds = std::forward<VnfPkgIdsT>(value); }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    PutSolNetworkPackageContentResult& WithVnfPkgIds(VnfPkgIdsT&& value) { SetVnfPkgIds(std::forward<VnfPkgIdsT>(value)); return *this;}
    template<typename VnfPkgIdsT = Aws::String>
    PutSolNetworkPackageContentResult& AddVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.emplace_back(std::forward<VnfPkgIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSolNetworkPackageContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PutSolNetworkPackageContentMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdName;
    bool m_nsdNameHasBeenSet = false;

    Aws::String m_nsdVersion;
    bool m_nsdVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_vnfPkgIds;
    bool m_vnfPkgIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
