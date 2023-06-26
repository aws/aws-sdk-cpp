/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/IdentitySourceItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class ListIdentitySourcesResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult();
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListIdentitySourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListIdentitySourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListIdentitySourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline const Aws::Vector<IdentitySourceItem>& GetIdentitySources() const{ return m_identitySources; }

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline void SetIdentitySources(const Aws::Vector<IdentitySourceItem>& value) { m_identitySources = value; }

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline void SetIdentitySources(Aws::Vector<IdentitySourceItem>&& value) { m_identitySources = std::move(value); }

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline ListIdentitySourcesResult& WithIdentitySources(const Aws::Vector<IdentitySourceItem>& value) { SetIdentitySources(value); return *this;}

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline ListIdentitySourcesResult& WithIdentitySources(Aws::Vector<IdentitySourceItem>&& value) { SetIdentitySources(std::move(value)); return *this;}

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline ListIdentitySourcesResult& AddIdentitySources(const IdentitySourceItem& value) { m_identitySources.push_back(value); return *this; }

    /**
     * <p>The list of identity sources stored in the specified policy store.</p>
     */
    inline ListIdentitySourcesResult& AddIdentitySources(IdentitySourceItem&& value) { m_identitySources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIdentitySourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIdentitySourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIdentitySourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<IdentitySourceItem> m_identitySources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
