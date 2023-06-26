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


    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Network package ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Network package ARN.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network package ARN.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Network package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Network package ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Network package ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Network package ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Network package ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Network package metadata.</p>
     */
    inline const ValidateSolNetworkPackageContentMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Network package metadata.</p>
     */
    inline void SetMetadata(const ValidateSolNetworkPackageContentMetadata& value) { m_metadata = value; }

    /**
     * <p>Network package metadata.</p>
     */
    inline void SetMetadata(ValidateSolNetworkPackageContentMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Network package metadata.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithMetadata(const ValidateSolNetworkPackageContentMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Network package metadata.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithMetadata(ValidateSolNetworkPackageContentMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const Aws::String& value) { m_nsdId = value; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(Aws::String&& value) { m_nsdId = std::move(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const char* value) { m_nsdId.assign(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdId(const char* value) { SetNsdId(value); return *this;}


    /**
     * <p>Network service descriptor name.</p>
     */
    inline const Aws::String& GetNsdName() const{ return m_nsdName; }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(const Aws::String& value) { m_nsdName = value; }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(Aws::String&& value) { m_nsdName = std::move(value); }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline void SetNsdName(const char* value) { m_nsdName.assign(value); }

    /**
     * <p>Network service descriptor name.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdName(const Aws::String& value) { SetNsdName(value); return *this;}

    /**
     * <p>Network service descriptor name.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdName(Aws::String&& value) { SetNsdName(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor name.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdName(const char* value) { SetNsdName(value); return *this;}


    /**
     * <p>Network service descriptor version.</p>
     */
    inline const Aws::String& GetNsdVersion() const{ return m_nsdVersion; }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(const Aws::String& value) { m_nsdVersion = value; }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(Aws::String&& value) { m_nsdVersion = std::move(value); }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline void SetNsdVersion(const char* value) { m_nsdVersion.assign(value); }

    /**
     * <p>Network service descriptor version.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(const Aws::String& value) { SetNsdVersion(value); return *this;}

    /**
     * <p>Network service descriptor version.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(Aws::String&& value) { SetNsdVersion(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor version.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithNsdVersion(const char* value) { SetNsdVersion(value); return *this;}


    /**
     * <p>Function package IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const{ return m_vnfPkgIds; }

    /**
     * <p>Function package IDs.</p>
     */
    inline void SetVnfPkgIds(const Aws::Vector<Aws::String>& value) { m_vnfPkgIds = value; }

    /**
     * <p>Function package IDs.</p>
     */
    inline void SetVnfPkgIds(Aws::Vector<Aws::String>&& value) { m_vnfPkgIds = std::move(value); }

    /**
     * <p>Function package IDs.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithVnfPkgIds(const Aws::Vector<Aws::String>& value) { SetVnfPkgIds(value); return *this;}

    /**
     * <p>Function package IDs.</p>
     */
    inline ValidateSolNetworkPackageContentResult& WithVnfPkgIds(Aws::Vector<Aws::String>&& value) { SetVnfPkgIds(std::move(value)); return *this;}

    /**
     * <p>Function package IDs.</p>
     */
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(const Aws::String& value) { m_vnfPkgIds.push_back(value); return *this; }

    /**
     * <p>Function package IDs.</p>
     */
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(Aws::String&& value) { m_vnfPkgIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Function package IDs.</p>
     */
    inline ValidateSolNetworkPackageContentResult& AddVnfPkgIds(const char* value) { m_vnfPkgIds.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ValidateSolNetworkPackageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ValidateSolNetworkPackageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ValidateSolNetworkPackageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
