/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Link.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetLinksResult
  {
  public:
    AWS_NETWORKMANAGER_API GetLinksResult();
    AWS_NETWORKMANAGER_API GetLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The links.</p>
     */
    inline const Aws::Vector<Link>& GetLinks() const{ return m_links; }

    /**
     * <p>The links.</p>
     */
    inline void SetLinks(const Aws::Vector<Link>& value) { m_links = value; }

    /**
     * <p>The links.</p>
     */
    inline void SetLinks(Aws::Vector<Link>&& value) { m_links = std::move(value); }

    /**
     * <p>The links.</p>
     */
    inline GetLinksResult& WithLinks(const Aws::Vector<Link>& value) { SetLinks(value); return *this;}

    /**
     * <p>The links.</p>
     */
    inline GetLinksResult& WithLinks(Aws::Vector<Link>&& value) { SetLinks(std::move(value)); return *this;}

    /**
     * <p>The links.</p>
     */
    inline GetLinksResult& AddLinks(const Link& value) { m_links.push_back(value); return *this; }

    /**
     * <p>The links.</p>
     */
    inline GetLinksResult& AddLinks(Link&& value) { m_links.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Link> m_links;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
