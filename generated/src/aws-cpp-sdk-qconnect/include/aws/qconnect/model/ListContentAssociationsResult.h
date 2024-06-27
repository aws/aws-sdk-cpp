/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentAssociationSummary.h>
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
namespace QConnect
{
namespace Model
{
  class ListContentAssociationsResult
  {
  public:
    AWS_QCONNECT_API ListContentAssociationsResult();
    AWS_QCONNECT_API ListContentAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListContentAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about content associations.</p>
     */
    inline const Aws::Vector<ContentAssociationSummary>& GetContentAssociationSummaries() const{ return m_contentAssociationSummaries; }
    inline void SetContentAssociationSummaries(const Aws::Vector<ContentAssociationSummary>& value) { m_contentAssociationSummaries = value; }
    inline void SetContentAssociationSummaries(Aws::Vector<ContentAssociationSummary>&& value) { m_contentAssociationSummaries = std::move(value); }
    inline ListContentAssociationsResult& WithContentAssociationSummaries(const Aws::Vector<ContentAssociationSummary>& value) { SetContentAssociationSummaries(value); return *this;}
    inline ListContentAssociationsResult& WithContentAssociationSummaries(Aws::Vector<ContentAssociationSummary>&& value) { SetContentAssociationSummaries(std::move(value)); return *this;}
    inline ListContentAssociationsResult& AddContentAssociationSummaries(const ContentAssociationSummary& value) { m_contentAssociationSummaries.push_back(value); return *this; }
    inline ListContentAssociationsResult& AddContentAssociationSummaries(ContentAssociationSummary&& value) { m_contentAssociationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListContentAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContentAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContentAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContentAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContentAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContentAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContentAssociationSummary> m_contentAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
