/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemRelatedItemSummary.h>
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
namespace SSM
{
namespace Model
{
  class ListOpsItemRelatedItemsResult
  {
  public:
    AWS_SSM_API ListOpsItemRelatedItemsResult();
    AWS_SSM_API ListOpsItemRelatedItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListOpsItemRelatedItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOpsItemRelatedItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOpsItemRelatedItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOpsItemRelatedItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of related-item resources for the specified OpsItem.</p>
     */
    inline const Aws::Vector<OpsItemRelatedItemSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<OpsItemRelatedItemSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<OpsItemRelatedItemSummary>&& value) { m_summaries = std::move(value); }
    inline ListOpsItemRelatedItemsResult& WithSummaries(const Aws::Vector<OpsItemRelatedItemSummary>& value) { SetSummaries(value); return *this;}
    inline ListOpsItemRelatedItemsResult& WithSummaries(Aws::Vector<OpsItemRelatedItemSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListOpsItemRelatedItemsResult& AddSummaries(const OpsItemRelatedItemSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListOpsItemRelatedItemsResult& AddSummaries(OpsItemRelatedItemSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOpsItemRelatedItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOpsItemRelatedItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOpsItemRelatedItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OpsItemRelatedItemSummary> m_summaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
