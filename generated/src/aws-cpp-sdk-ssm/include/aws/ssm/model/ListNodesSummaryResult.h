/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ListNodesSummaryResult
  {
  public:
    AWS_SSM_API ListNodesSummaryResult();
    AWS_SSM_API ListNodesSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListNodesSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects reporting information about your managed nodes, such
     * as the count of nodes by operating system.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetSummary() const{ return m_summary; }
    inline void SetSummary(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_summary = value; }
    inline void SetSummary(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_summary = std::move(value); }
    inline ListNodesSummaryResult& WithSummary(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetSummary(value); return *this;}
    inline ListNodesSummaryResult& WithSummary(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetSummary(std::move(value)); return *this;}
    inline ListNodesSummaryResult& AddSummary(const Aws::Map<Aws::String, Aws::String>& value) { m_summary.push_back(value); return *this; }
    inline ListNodesSummaryResult& AddSummary(Aws::Map<Aws::String, Aws::String>&& value) { m_summary.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNodesSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodesSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodesSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNodesSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNodesSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNodesSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_summary;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
