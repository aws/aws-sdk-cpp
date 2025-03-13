/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainPackageDetails.h>
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
   * <p>Container for the response returned by the <code>AssociatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class AssociatePackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult() = default;
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const { return m_domainPackageDetails; }
    template<typename DomainPackageDetailsT = DomainPackageDetails>
    void SetDomainPackageDetails(DomainPackageDetailsT&& value) { m_domainPackageDetailsHasBeenSet = true; m_domainPackageDetails = std::forward<DomainPackageDetailsT>(value); }
    template<typename DomainPackageDetailsT = DomainPackageDetails>
    AssociatePackageResult& WithDomainPackageDetails(DomainPackageDetailsT&& value) { SetDomainPackageDetails(std::forward<DomainPackageDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociatePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainPackageDetails m_domainPackageDetails;
    bool m_domainPackageDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
