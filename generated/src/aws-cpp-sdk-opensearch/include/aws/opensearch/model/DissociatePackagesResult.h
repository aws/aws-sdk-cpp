/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainPackageDetails.h>
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
  class DissociatePackagesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult() = default;
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of package details for the packages that were dissociated from the
     * domain.</p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const { return m_domainPackageDetailsList; }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    void SetDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList = std::forward<DomainPackageDetailsListT>(value); }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    DissociatePackagesResult& WithDomainPackageDetailsList(DomainPackageDetailsListT&& value) { SetDomainPackageDetailsList(std::forward<DomainPackageDetailsListT>(value)); return *this;}
    template<typename DomainPackageDetailsListT = DomainPackageDetails>
    DissociatePackagesResult& AddDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList.emplace_back(std::forward<DomainPackageDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DissociatePackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainPackageDetails> m_domainPackageDetailsList;
    bool m_domainPackageDetailsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
