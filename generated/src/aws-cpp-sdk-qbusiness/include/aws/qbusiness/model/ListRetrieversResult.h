/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Retriever.h>
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
  class ListRetrieversResult
  {
  public:
    AWS_QBUSINESS_API ListRetrieversResult();
    AWS_QBUSINESS_API ListRetrieversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListRetrieversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline ListRetrieversResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline ListRetrieversResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of retrievers.</p>
     */
    inline ListRetrieversResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline const Aws::Vector<Retriever>& GetRetrievers() const{ return m_retrievers; }

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline void SetRetrievers(const Aws::Vector<Retriever>& value) { m_retrievers = value; }

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline void SetRetrievers(Aws::Vector<Retriever>&& value) { m_retrievers = std::move(value); }

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline ListRetrieversResult& WithRetrievers(const Aws::Vector<Retriever>& value) { SetRetrievers(value); return *this;}

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline ListRetrieversResult& WithRetrievers(Aws::Vector<Retriever>&& value) { SetRetrievers(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline ListRetrieversResult& AddRetrievers(const Retriever& value) { m_retrievers.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more retrievers.</p>
     */
    inline ListRetrieversResult& AddRetrievers(Retriever&& value) { m_retrievers.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRetrieversResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRetrieversResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRetrieversResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Retriever> m_retrievers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
