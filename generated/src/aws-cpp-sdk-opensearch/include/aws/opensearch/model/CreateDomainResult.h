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
   * <p>The result of a <code>CreateDomain</code> operation. Contains the status of
   * the newly created domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateDomainResponse">AWS
   * API Reference</a></p>
   */
  class CreateDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateDomainResult() = default;
    AWS_OPENSEARCHSERVICE_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the newly created domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const { return m_domainStatus; }
    template<typename DomainStatusT = DomainStatus>
    void SetDomainStatus(DomainStatusT&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::forward<DomainStatusT>(value); }
    template<typename DomainStatusT = DomainStatus>
    CreateDomainResult& WithDomainStatus(DomainStatusT&& value) { SetDomainStatus(std::forward<DomainStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
