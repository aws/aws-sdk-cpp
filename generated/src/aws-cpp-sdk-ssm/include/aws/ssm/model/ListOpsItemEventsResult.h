/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemEventSummary.h>
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
  class ListOpsItemEventsResult
  {
  public:
    AWS_SSM_API ListOpsItemEventsResult();
    AWS_SSM_API ListOpsItemEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListOpsItemEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOpsItemEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOpsItemEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOpsItemEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline const Aws::Vector<OpsItemEventSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<OpsItemEventSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<OpsItemEventSummary>&& value) { m_summaries = std::move(value); }
    inline ListOpsItemEventsResult& WithSummaries(const Aws::Vector<OpsItemEventSummary>& value) { SetSummaries(value); return *this;}
    inline ListOpsItemEventsResult& WithSummaries(Aws::Vector<OpsItemEventSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListOpsItemEventsResult& AddSummaries(const OpsItemEventSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListOpsItemEventsResult& AddSummaries(OpsItemEventSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOpsItemEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOpsItemEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOpsItemEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OpsItemEventSummary> m_summaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
