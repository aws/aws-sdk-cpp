﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererSummary.h>
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
namespace Schemas
{
namespace Model
{
  class ListDiscoverersResult
  {
  public:
    AWS_SCHEMAS_API ListDiscoverersResult();
    AWS_SCHEMAS_API ListDiscoverersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListDiscoverersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of DiscovererSummary information.</p>
     */
    inline const Aws::Vector<DiscovererSummary>& GetDiscoverers() const{ return m_discoverers; }
    inline void SetDiscoverers(const Aws::Vector<DiscovererSummary>& value) { m_discoverers = value; }
    inline void SetDiscoverers(Aws::Vector<DiscovererSummary>&& value) { m_discoverers = std::move(value); }
    inline ListDiscoverersResult& WithDiscoverers(const Aws::Vector<DiscovererSummary>& value) { SetDiscoverers(value); return *this;}
    inline ListDiscoverersResult& WithDiscoverers(Aws::Vector<DiscovererSummary>&& value) { SetDiscoverers(std::move(value)); return *this;}
    inline ListDiscoverersResult& AddDiscoverers(const DiscovererSummary& value) { m_discoverers.push_back(value); return *this; }
    inline ListDiscoverersResult& AddDiscoverers(DiscovererSummary&& value) { m_discoverers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDiscoverersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDiscoverersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDiscoverersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDiscoverersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDiscoverersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDiscoverersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DiscovererSummary> m_discoverers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
