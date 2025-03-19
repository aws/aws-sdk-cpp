/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainNodesStatus.h>
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
  /**
   * <p>The result of a <code>DescribeDomainNodes</code> request. Contains
   * information about the nodes on the requested domain. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainNodesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainNodesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline const Aws::Vector<DomainNodesStatus>& GetDomainNodesStatusList() const { return m_domainNodesStatusList; }
    template<typename DomainNodesStatusListT = Aws::Vector<DomainNodesStatus>>
    void SetDomainNodesStatusList(DomainNodesStatusListT&& value) { m_domainNodesStatusListHasBeenSet = true; m_domainNodesStatusList = std::forward<DomainNodesStatusListT>(value); }
    template<typename DomainNodesStatusListT = Aws::Vector<DomainNodesStatus>>
    DescribeDomainNodesResult& WithDomainNodesStatusList(DomainNodesStatusListT&& value) { SetDomainNodesStatusList(std::forward<DomainNodesStatusListT>(value)); return *this;}
    template<typename DomainNodesStatusListT = DomainNodesStatus>
    DescribeDomainNodesResult& AddDomainNodesStatusList(DomainNodesStatusListT&& value) { m_domainNodesStatusListHasBeenSet = true; m_domainNodesStatusList.emplace_back(std::forward<DomainNodesStatusListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainNodesStatus> m_domainNodesStatusList;
    bool m_domainNodesStatusListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
