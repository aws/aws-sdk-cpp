/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityPolicyDetail.h>
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
  class UpdateSecurityPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityPolicyResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated security policy.</p>
     */
    inline const SecurityPolicyDetail& GetSecurityPolicyDetail() const{ return m_securityPolicyDetail; }

    /**
     * <p>Details about the updated security policy.</p>
     */
    inline void SetSecurityPolicyDetail(const SecurityPolicyDetail& value) { m_securityPolicyDetail = value; }

    /**
     * <p>Details about the updated security policy.</p>
     */
    inline void SetSecurityPolicyDetail(SecurityPolicyDetail&& value) { m_securityPolicyDetail = std::move(value); }

    /**
     * <p>Details about the updated security policy.</p>
     */
    inline UpdateSecurityPolicyResult& WithSecurityPolicyDetail(const SecurityPolicyDetail& value) { SetSecurityPolicyDetail(value); return *this;}

    /**
     * <p>Details about the updated security policy.</p>
     */
    inline UpdateSecurityPolicyResult& WithSecurityPolicyDetail(SecurityPolicyDetail&& value) { SetSecurityPolicyDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSecurityPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSecurityPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSecurityPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SecurityPolicyDetail m_securityPolicyDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
