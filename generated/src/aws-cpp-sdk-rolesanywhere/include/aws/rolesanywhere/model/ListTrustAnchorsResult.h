/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/TrustAnchorDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class ListTrustAnchorsResult
  {
  public:
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult();
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListTrustAnchorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline ListTrustAnchorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline ListTrustAnchorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline ListTrustAnchorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of trust anchors.</p>
     */
    inline const Aws::Vector<TrustAnchorDetail>& GetTrustAnchors() const{ return m_trustAnchors; }

    /**
     * <p>A list of trust anchors.</p>
     */
    inline void SetTrustAnchors(const Aws::Vector<TrustAnchorDetail>& value) { m_trustAnchors = value; }

    /**
     * <p>A list of trust anchors.</p>
     */
    inline void SetTrustAnchors(Aws::Vector<TrustAnchorDetail>&& value) { m_trustAnchors = std::move(value); }

    /**
     * <p>A list of trust anchors.</p>
     */
    inline ListTrustAnchorsResult& WithTrustAnchors(const Aws::Vector<TrustAnchorDetail>& value) { SetTrustAnchors(value); return *this;}

    /**
     * <p>A list of trust anchors.</p>
     */
    inline ListTrustAnchorsResult& WithTrustAnchors(Aws::Vector<TrustAnchorDetail>&& value) { SetTrustAnchors(std::move(value)); return *this;}

    /**
     * <p>A list of trust anchors.</p>
     */
    inline ListTrustAnchorsResult& AddTrustAnchors(const TrustAnchorDetail& value) { m_trustAnchors.push_back(value); return *this; }

    /**
     * <p>A list of trust anchors.</p>
     */
    inline ListTrustAnchorsResult& AddTrustAnchors(TrustAnchorDetail&& value) { m_trustAnchors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTrustAnchorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTrustAnchorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTrustAnchorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<TrustAnchorDetail> m_trustAnchors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
