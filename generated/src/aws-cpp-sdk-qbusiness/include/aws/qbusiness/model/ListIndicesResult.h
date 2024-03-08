/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Index.h>
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
namespace QBusiness
{
namespace Model
{
  class ListIndicesResult
  {
  public:
    AWS_QBUSINESS_API ListIndicesResult();
    AWS_QBUSINESS_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline const Aws::Vector<Index>& GetIndices() const{ return m_indices; }

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline void SetIndices(const Aws::Vector<Index>& value) { m_indices = value; }

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline void SetIndices(Aws::Vector<Index>&& value) { m_indices = std::move(value); }

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline ListIndicesResult& WithIndices(const Aws::Vector<Index>& value) { SetIndices(value); return *this;}

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline ListIndicesResult& WithIndices(Aws::Vector<Index>&& value) { SetIndices(std::move(value)); return *this;}

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline ListIndicesResult& AddIndices(const Index& value) { m_indices.push_back(value); return *this; }

    /**
     * <p>An array of information on the items in one or more indexes.</p>
     */
    inline ListIndicesResult& AddIndices(Index&& value) { m_indices.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline ListIndicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline ListIndicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token that you can use in
     * the subsequent request to retrieve the next set of indexes.</p>
     */
    inline ListIndicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIndicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIndicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIndicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Index> m_indices;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
