﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FindingAggregator.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListFindingAggregatorsResult
  {
  public:
    AWS_SECURITYHUB_API ListFindingAggregatorsResult();
    AWS_SECURITYHUB_API ListFindingAggregatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListFindingAggregatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of finding aggregators. This operation currently only returns a
     * single result.</p>
     */
    inline const Aws::Vector<FindingAggregator>& GetFindingAggregators() const{ return m_findingAggregators; }
    inline void SetFindingAggregators(const Aws::Vector<FindingAggregator>& value) { m_findingAggregators = value; }
    inline void SetFindingAggregators(Aws::Vector<FindingAggregator>&& value) { m_findingAggregators = std::move(value); }
    inline ListFindingAggregatorsResult& WithFindingAggregators(const Aws::Vector<FindingAggregator>& value) { SetFindingAggregators(value); return *this;}
    inline ListFindingAggregatorsResult& WithFindingAggregators(Aws::Vector<FindingAggregator>&& value) { SetFindingAggregators(std::move(value)); return *this;}
    inline ListFindingAggregatorsResult& AddFindingAggregators(const FindingAggregator& value) { m_findingAggregators.push_back(value); return *this; }
    inline ListFindingAggregatorsResult& AddFindingAggregators(FindingAggregator&& value) { m_findingAggregators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more results, this is the token to provide in the next call to
     * <code>ListFindingAggregators</code>.</p> <p>This operation currently only
     * returns a single result. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFindingAggregatorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingAggregatorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingAggregatorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFindingAggregatorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFindingAggregatorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFindingAggregatorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FindingAggregator> m_findingAggregators;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
