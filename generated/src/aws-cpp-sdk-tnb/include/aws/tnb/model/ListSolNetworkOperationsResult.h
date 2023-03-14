/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkOperationsInfo.h>
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
  class ListSolNetworkOperationsResult
  {
  public:
    AWS_TNB_API ListSolNetworkOperationsResult();
    AWS_TNB_API ListSolNetworkOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline const Aws::Vector<ListSolNetworkOperationsInfo>& GetNetworkOperations() const{ return m_networkOperations; }

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline void SetNetworkOperations(const Aws::Vector<ListSolNetworkOperationsInfo>& value) { m_networkOperations = value; }

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline void SetNetworkOperations(Aws::Vector<ListSolNetworkOperationsInfo>&& value) { m_networkOperations = std::move(value); }

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline ListSolNetworkOperationsResult& WithNetworkOperations(const Aws::Vector<ListSolNetworkOperationsInfo>& value) { SetNetworkOperations(value); return *this;}

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline ListSolNetworkOperationsResult& WithNetworkOperations(Aws::Vector<ListSolNetworkOperationsInfo>&& value) { SetNetworkOperations(std::move(value)); return *this;}

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline ListSolNetworkOperationsResult& AddNetworkOperations(const ListSolNetworkOperationsInfo& value) { m_networkOperations.push_back(value); return *this; }

    /**
     * <p>Lists network operation occurrences. Lifecycle management operations are
     * deploy, update, or delete operations.</p>
     */
    inline ListSolNetworkOperationsResult& AddNetworkOperations(ListSolNetworkOperationsInfo&& value) { m_networkOperations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSolNetworkOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSolNetworkOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSolNetworkOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListSolNetworkOperationsInfo> m_networkOperations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
