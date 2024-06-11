/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentMetadata.h>
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
  class ValidateSolNetworkPackageContentResult
  {
  public:
    AWS_TNB_API ValidateSolNetworkPackageContentResult();
    AWS_TNB_API ValidateSolNetworkPackageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ValidateSolNetworkPackageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network package metadata.</p>
     */
    inline const ValidateSolNetworkPackageContentMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const ValidateSolNetworkPackageContentMetadata& value) { m_metadata = value; }
    inline void SetMetadata(ValidateSolNetworkPackageContentMetadata&& value) { m_metadata = std::move(value); }
    inline ValidateSolNetworkPackageContentResult& WithMetadata(const ValidateSolNetworkPackageContentMetadata& value) { SetMetadata(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithMetadata(ValidateSolNetworkPackageContentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }
    inline void SetNsdId(const Aws::String& value) { m_nsdId = value; }
    inline void SetNsdId(Aws::String&& value) { m_nsdId = std::move(value); }
    inline void SetNsdId(const char* value) { m_nsdId.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdId(const char* value) { SetNsdId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const{ return m_nsdName; }
    inline void SetNsdName(const Aws::String& value) { m_nsdName = value; }
    inline void SetNsdName(Aws::String&& value) { m_nsdName = std::move(value); }
    inline void SetNsdName(const char* value) { m_nsdName.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithNsdName(const Aws::String& value) { SetNsdName(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdName(Aws::String&& value) { SetNsdName(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdName(const char* value) { SetNsdName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const{ return m_nsdVersion; }
    inline void SetNsdVersion(const Aws::String& value) { m_nsdVersion = value; }
    inline void SetNsdVersion(Aws::String&& value) { m_nsdVersion = std::move(value); }
    inline void SetNsdVersion(const char* value) { m_nsdVersion.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(const Aws::String& value) { SetNsdVersion(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(Aws::String&& value) { SetNsdVersion(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(const char* value) { SetNsdVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const{ return m_vnfPkgIds; }
    inline void SetVnfPkgIds(const Aws::Vector<Aws::String>& value) { m_vnfPkgIds = value; }
    inline void SetVnfPkgIds(Aws::Vector<Aws::String>&& value) { m_vnfPkgIds = std::move(value); }
    inline ValidateSolNetworkPackageContentResult& WithVnfPkgIds(const Aws::Vector<Aws::String>& value) { SetVnfPkgIds(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithVnfPkgIds(Aws::Vector<Aws::String>&& value) { SetVnfPkgIds(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(const Aws::String& value) { m_vnfPkgIds.push_back(value); return *this; }
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(Aws::String&& value) { m_vnfPkgIds.push_back(std::move(value)); return *this; }
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(const char* value) { m_vnfPkgIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidateSolNetworkPackageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidateSolNetworkPackageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    ValidateSolNetworkPackageContentMetadata m_metadata;

    Aws::String m_nsdId;

    Aws::String m_nsdName;

    Aws::String m_nsdVersion;

    Aws::Vector<Aws::String> m_vnfPkgIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
