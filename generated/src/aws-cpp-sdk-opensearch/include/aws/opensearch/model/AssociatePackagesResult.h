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
  class AssociatePackagesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AssociatePackagesResult() = default;
    AWS_OPENSEARCHSERVICE_API AssociatePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AssociatePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of information about packages that are associated with a domain. </p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const { return m_domainPackageDetailsList; }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    void SetDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList = std::forward<DomainPackageDetailsListT>(value); }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    AssociatePackagesResult& WithDomainPackageDetailsList(DomainPackageDetailsListT&& value) { SetDomainPackageDetailsList(std::forward<DomainPackageDetailsListT>(value)); return *this;}
    template<typename DomainPackageDetailsListT = DomainPackageDetails>
    AssociatePackagesResult& AddDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList.emplace_back(std::forward<DomainPackageDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociatePackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
