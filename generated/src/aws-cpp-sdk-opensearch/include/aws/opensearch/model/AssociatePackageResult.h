/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
  /**
   * <p>Container for the response returned by the <code>AssociatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class AssociatePackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult();
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AssociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const{ return m_domainPackageDetails; }

    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline void SetDomainPackageDetails(const DomainPackageDetails& value) { m_domainPackageDetails = value; }

    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline void SetDomainPackageDetails(DomainPackageDetails&& value) { m_domainPackageDetails = std::move(value); }

    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline AssociatePackageResult& WithDomainPackageDetails(const DomainPackageDetails& value) { SetDomainPackageDetails(value); return *this;}

    /**
     * <p>Information about a package that is associated with a domain.</p>
     */
    inline AssociatePackageResult& WithDomainPackageDetails(DomainPackageDetails&& value) { SetDomainPackageDetails(std::move(value)); return *this;}

  private:

    DomainPackageDetails m_domainPackageDetails;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
