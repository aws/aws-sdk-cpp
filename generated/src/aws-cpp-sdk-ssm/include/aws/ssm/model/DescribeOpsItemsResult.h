/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemSummary.h>
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
  class DescribeOpsItemsResult
  {
  public:
    AWS_SSM_API DescribeOpsItemsResult();
    AWS_SSM_API DescribeOpsItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeOpsItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeOpsItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeOpsItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeOpsItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of OpsItems.</p>
     */
    inline const Aws::Vector<OpsItemSummary>& GetOpsItemSummaries() const{ return m_opsItemSummaries; }
    inline void SetOpsItemSummaries(const Aws::Vector<OpsItemSummary>& value) { m_opsItemSummaries = value; }
    inline void SetOpsItemSummaries(Aws::Vector<OpsItemSummary>&& value) { m_opsItemSummaries = std::move(value); }
    inline DescribeOpsItemsResult& WithOpsItemSummaries(const Aws::Vector<OpsItemSummary>& value) { SetOpsItemSummaries(value); return *this;}
    inline DescribeOpsItemsResult& WithOpsItemSummaries(Aws::Vector<OpsItemSummary>&& value) { SetOpsItemSummaries(std::move(value)); return *this;}
    inline DescribeOpsItemsResult& AddOpsItemSummaries(const OpsItemSummary& value) { m_opsItemSummaries.push_back(value); return *this; }
    inline DescribeOpsItemsResult& AddOpsItemSummaries(OpsItemSummary&& value) { m_opsItemSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOpsItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOpsItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOpsItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OpsItemSummary> m_opsItemSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
