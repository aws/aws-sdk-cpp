/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/DomainInfo.h>
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
   * <p>The results of a <code>ListDomainNames</code> operation. Contains the names
   * of all domains owned by this account and their respective engine
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDomainNamesResult();
    AWS_OPENSEARCHSERVICE_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline const Aws::Vector<DomainInfo>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline void SetDomainNames(const Aws::Vector<DomainInfo>& value) { m_domainNames = value; }

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline void SetDomainNames(Aws::Vector<DomainInfo>&& value) { m_domainNames = std::move(value); }

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(const Aws::Vector<DomainInfo>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(Aws::Vector<DomainInfo>&& value) { SetDomainNames(std::move(value)); return *this;}

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const DomainInfo& value) { m_domainNames.push_back(value); return *this; }

    /**
     * <p>The names of all OpenSearch Service domains owned by the current user and
     * their respective engine types.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(DomainInfo&& value) { m_domainNames.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DomainInfo> m_domainNames;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
