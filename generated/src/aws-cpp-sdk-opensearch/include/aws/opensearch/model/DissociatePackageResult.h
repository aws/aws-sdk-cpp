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
   * <p>Container for the response returned by an <code>DissociatePackage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DissociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class DissociatePackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DissociatePackageResult();
    AWS_OPENSEARCHSERVICE_API DissociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DissociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about a package that has been dissociated from the domain.</p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const{ return m_domainPackageDetails; }

    /**
     * <p> Information about a package that has been dissociated from the domain.</p>
     */
    inline void SetDomainPackageDetails(const DomainPackageDetails& value) { m_domainPackageDetails = value; }

    /**
     * <p> Information about a package that has been dissociated from the domain.</p>
     */
    inline void SetDomainPackageDetails(DomainPackageDetails&& value) { m_domainPackageDetails = std::move(value); }

    /**
     * <p> Information about a package that has been dissociated from the domain.</p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(const DomainPackageDetails& value) { SetDomainPackageDetails(value); return *this;}

    /**
     * <p> Information about a package that has been dissociated from the domain.</p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(DomainPackageDetails&& value) { SetDomainPackageDetails(std::move(value)); return *this;}

  private:

    DomainPackageDetails m_domainPackageDetails;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
