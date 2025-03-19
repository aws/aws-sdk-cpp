/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/InstanceTypeDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListInstanceTypeDetailsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult() = default;
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all supported instance types and features for the given OpenSearch or
     * Elasticsearch version.</p>
     */
    inline const Aws::Vector<InstanceTypeDetails>& GetInstanceTypeDetails() const { return m_instanceTypeDetails; }
    template<typename InstanceTypeDetailsT = Aws::Vector<InstanceTypeDetails>>
    void SetInstanceTypeDetails(InstanceTypeDetailsT&& value) { m_instanceTypeDetailsHasBeenSet = true; m_instanceTypeDetails = std::forward<InstanceTypeDetailsT>(value); }
    template<typename InstanceTypeDetailsT = Aws::Vector<InstanceTypeDetails>>
    ListInstanceTypeDetailsResult& WithInstanceTypeDetails(InstanceTypeDetailsT&& value) { SetInstanceTypeDetails(std::forward<InstanceTypeDetailsT>(value)); return *this;}
    template<typename InstanceTypeDetailsT = InstanceTypeDetails>
    ListInstanceTypeDetailsResult& AddInstanceTypeDetails(InstanceTypeDetailsT&& value) { m_instanceTypeDetailsHasBeenSet = true; m_instanceTypeDetails.emplace_back(std::forward<InstanceTypeDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstanceTypeDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstanceTypeDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceTypeDetails> m_instanceTypeDetails;
    bool m_instanceTypeDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
