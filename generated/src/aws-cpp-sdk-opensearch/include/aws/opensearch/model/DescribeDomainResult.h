/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the status of the domain specified in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const { return m_domainStatus; }
    template<typename DomainStatusT = DomainStatus>
    void SetDomainStatus(DomainStatusT&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::forward<DomainStatusT>(value); }
    template<typename DomainStatusT = DomainStatus>
    DescribeDomainResult& WithDomainStatus(DomainStatusT&& value) { SetDomainStatus(std::forward<DomainStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
