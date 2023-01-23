/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
   * <p>The results of a <code>DeleteDomain</code> request. Contains the status of
   * the pending deletion, or a "domain not found" error if the domain and all of its
   * resources have been deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDomainResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult();
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }

    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = std::move(value); }

    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline DeleteDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The status of the domain being deleted.</p>
     */
    inline DeleteDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}

  private:

    DomainStatus m_domainStatus;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
