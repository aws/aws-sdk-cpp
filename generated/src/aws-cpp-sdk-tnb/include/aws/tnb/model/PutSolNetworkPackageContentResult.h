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
    AWS_TNB_API PutSolNetworkPackageContentResult();
    AWS_TNB_API PutSolNetworkPackageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API PutSolNetworkPackageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline PutSolNetworkPackageContentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline PutSolNetworkPackageContentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package metadata.</p>
     */
    inline const PutSolNetworkPackageContentMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const PutSolNetworkPackageContentMetadata& value) { m_metadata = value; }
    inline void SetMetadata(PutSolNetworkPackageContentMetadata&& value) { m_metadata = std::move(value); }
    inline PutSolNetworkPackageContentResult& WithMetadata(const PutSolNetworkPackageContentMetadata& value) { SetMetadata(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithMetadata(PutSolNetworkPackageContentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }
    inline void SetNsdId(const Aws::String& value) { m_nsdId = value; }
    inline void SetNsdId(Aws::String&& value) { m_nsdId = std::move(value); }
    inline void SetNsdId(const char* value) { m_nsdId.assign(value); }
    inline PutSolNetworkPackageContentResult& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdId(const char* value) { SetNsdId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const{ return m_nsdName; }
    inline void SetNsdName(const Aws::String& value) { m_nsdName = value; }
    inline void SetNsdName(Aws::String&& value) { m_nsdName = std::move(value); }
    inline void SetNsdName(const char* value) { m_nsdName.assign(value); }
    inline PutSolNetworkPackageContentResult& WithNsdName(const Aws::String& value) { SetNsdName(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdName(Aws::String&& value) { SetNsdName(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdName(const char* value) { SetNsdName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const{ return m_nsdVersion; }
    inline void SetNsdVersion(const Aws::String& value) { m_nsdVersion = value; }
    inline void SetNsdVersion(Aws::String&& value) { m_nsdVersion = std::move(value); }
    inline void SetNsdVersion(const char* value) { m_nsdVersion.assign(value); }
    inline PutSolNetworkPackageContentResult& WithNsdVersion(const Aws::String& value) { SetNsdVersion(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdVersion(Aws::String&& value) { SetNsdVersion(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithNsdVersion(const char* value) { SetNsdVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const{ return m_vnfPkgIds; }
    inline void SetVnfPkgIds(const Aws::Vector<Aws::String>& value) { m_vnfPkgIds = value; }
    inline void SetVnfPkgIds(Aws::Vector<Aws::String>&& value) { m_vnfPkgIds = std::move(value); }
    inline PutSolNetworkPackageContentResult& WithVnfPkgIds(const Aws::Vector<Aws::String>& value) { SetVnfPkgIds(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithVnfPkgIds(Aws::Vector<Aws::String>&& value) { SetVnfPkgIds(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& AddVnfPkgIds(const Aws::String& value) { m_vnfPkgIds.push_back(value); return *this; }
    inline PutSolNetworkPackageContentResult& AddVnfPkgIds(Aws::String&& value) { m_vnfPkgIds.push_back(std::move(value)); return *this; }
    inline PutSolNetworkPackageContentResult& AddVnfPkgIds(const char* value) { m_vnfPkgIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSolNetworkPackageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSolNetworkPackageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSolNetworkPackageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    PutSolNetworkPackageContentMetadata m_metadata;

    Aws::String m_nsdId;

    Aws::String m_nsdName;

    Aws::String m_nsdVersion;

    Aws::Vector<Aws::String> m_vnfPkgIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
