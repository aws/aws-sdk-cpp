/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code>DescribeDomains</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeDomainsRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomains"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::move(value); }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline DescribeDomainsRequest& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline DescribeDomainsRequest& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(const Aws::String& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(Aws::String&& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of OpenSearch Service domain names that you want information about. If
     * you don't specify any domains, OpenSearch Service returns information about all
     * domains owned by the account.</p>
     */
    inline DescribeDomainsRequest& AddDomainNames(const char* value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
