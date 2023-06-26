/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolFunctionInstanceInfo.h>
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
  class ListSolFunctionInstancesResult
  {
  public:
    AWS_TNB_API ListSolFunctionInstancesResult();
    AWS_TNB_API ListSolFunctionInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolFunctionInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network function instances.</p>
     */
    inline const Aws::Vector<ListSolFunctionInstanceInfo>& GetFunctionInstances() const{ return m_functionInstances; }

    /**
     * <p>Network function instances.</p>
     */
    inline void SetFunctionInstances(const Aws::Vector<ListSolFunctionInstanceInfo>& value) { m_functionInstances = value; }

    /**
     * <p>Network function instances.</p>
     */
    inline void SetFunctionInstances(Aws::Vector<ListSolFunctionInstanceInfo>&& value) { m_functionInstances = std::move(value); }

    /**
     * <p>Network function instances.</p>
     */
    inline ListSolFunctionInstancesResult& WithFunctionInstances(const Aws::Vector<ListSolFunctionInstanceInfo>& value) { SetFunctionInstances(value); return *this;}

    /**
     * <p>Network function instances.</p>
     */
    inline ListSolFunctionInstancesResult& WithFunctionInstances(Aws::Vector<ListSolFunctionInstanceInfo>&& value) { SetFunctionInstances(std::move(value)); return *this;}

    /**
     * <p>Network function instances.</p>
     */
    inline ListSolFunctionInstancesResult& AddFunctionInstances(const ListSolFunctionInstanceInfo& value) { m_functionInstances.push_back(value); return *this; }

    /**
     * <p>Network function instances.</p>
     */
    inline ListSolFunctionInstancesResult& AddFunctionInstances(ListSolFunctionInstanceInfo&& value) { m_functionInstances.push_back(std::move(value)); return *this; }


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
    inline ListSolFunctionInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolFunctionInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolFunctionInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSolFunctionInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSolFunctionInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSolFunctionInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListSolFunctionInstanceInfo> m_functionInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
