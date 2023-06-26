/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class CreateAccessPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult();
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the created access policy.</p>
     */
    inline const AccessPolicyDetail& GetAccessPolicyDetail() const{ return m_accessPolicyDetail; }

    /**
     * <p>Details about the created access policy.</p>
     */
    inline void SetAccessPolicyDetail(const AccessPolicyDetail& value) { m_accessPolicyDetail = value; }

    /**
     * <p>Details about the created access policy.</p>
     */
    inline void SetAccessPolicyDetail(AccessPolicyDetail&& value) { m_accessPolicyDetail = std::move(value); }

    /**
     * <p>Details about the created access policy.</p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyDetail(const AccessPolicyDetail& value) { SetAccessPolicyDetail(value); return *this;}

    /**
     * <p>Details about the created access policy.</p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyDetail(AccessPolicyDetail&& value) { SetAccessPolicyDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAccessPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAccessPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAccessPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccessPolicyDetail m_accessPolicyDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
