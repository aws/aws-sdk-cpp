/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainStatus.h>
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
   * <p>Contains the status of the specified domains or all domains owned by the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the requested domains.</p>
     */
    inline const Aws::Vector<DomainStatus>& GetDomainStatusList() const { return m_domainStatusList; }
    template<typename DomainStatusListT = Aws::Vector<DomainStatus>>
    void SetDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList = std::forward<DomainStatusListT>(value); }
    template<typename DomainStatusListT = Aws::Vector<DomainStatus>>
    DescribeDomainsResult& WithDomainStatusList(DomainStatusListT&& value) { SetDomainStatusList(std::forward<DomainStatusListT>(value)); return *this;}
    template<typename DomainStatusListT = DomainStatus>
    DescribeDomainsResult& AddDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList.emplace_back(std::forward<DomainStatusListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainStatus> m_domainStatusList;
    bool m_domainStatusListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
