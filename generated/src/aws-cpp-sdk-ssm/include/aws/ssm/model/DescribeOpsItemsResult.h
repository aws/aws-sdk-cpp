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
    AWS_SSM_API DescribeOpsItemsResult() = default;
    AWS_SSM_API DescribeOpsItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeOpsItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOpsItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of OpsItems.</p>
     */
    inline const Aws::Vector<OpsItemSummary>& GetOpsItemSummaries() const { return m_opsItemSummaries; }
    template<typename OpsItemSummariesT = Aws::Vector<OpsItemSummary>>
    void SetOpsItemSummaries(OpsItemSummariesT&& value) { m_opsItemSummariesHasBeenSet = true; m_opsItemSummaries = std::forward<OpsItemSummariesT>(value); }
    template<typename OpsItemSummariesT = Aws::Vector<OpsItemSummary>>
    DescribeOpsItemsResult& WithOpsItemSummaries(OpsItemSummariesT&& value) { SetOpsItemSummaries(std::forward<OpsItemSummariesT>(value)); return *this;}
    template<typename OpsItemSummariesT = OpsItemSummary>
    DescribeOpsItemsResult& AddOpsItemSummaries(OpsItemSummariesT&& value) { m_opsItemSummariesHasBeenSet = true; m_opsItemSummaries.emplace_back(std::forward<OpsItemSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOpsItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OpsItemSummary> m_opsItemSummaries;
    bool m_opsItemSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
