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
   * <p>The results of a <code>DeleteDomain</code> request. Contains the status of
   * the pending deletion, or a "domain not found" error if the domain and all of its
   * resources have been deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDomainResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult() = default;
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline const DomainStatus& GetDomainStatus() const { return m_domainStatus; }
    template<typename DomainStatusT = DomainStatus>
    void SetDomainStatus(DomainStatusT&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::forward<DomainStatusT>(value); }
    template<typename DomainStatusT = DomainStatus>
    DeleteDomainResult& WithDomainStatus(DomainStatusT&& value) { SetDomainStatus(std::forward<DomainStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
