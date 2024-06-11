﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/NamespaceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class ListNamespacesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API ListNamespacesResult();
    AWS_SERVICEDISCOVERY_API ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline const Aws::Vector<NamespaceSummary>& GetNamespaces() const{ return m_namespaces; }
    inline void SetNamespaces(const Aws::Vector<NamespaceSummary>& value) { m_namespaces = value; }
    inline void SetNamespaces(Aws::Vector<NamespaceSummary>&& value) { m_namespaces = std::move(value); }
    inline ListNamespacesResult& WithNamespaces(const Aws::Vector<NamespaceSummary>& value) { SetNamespaces(value); return *this;}
    inline ListNamespacesResult& WithNamespaces(Aws::Vector<NamespaceSummary>&& value) { SetNamespaces(std::move(value)); return *this;}
    inline ListNamespacesResult& AddNamespaces(const NamespaceSummary& value) { m_namespaces.push_back(value); return *this; }
    inline ListNamespacesResult& AddNamespaces(NamespaceSummary&& value) { m_namespaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NamespaceSummary> m_namespaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
