/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class ListInstanceTypeDetailsRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstanceTypeDetails"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain to list instance type details for.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListInstanceTypeDetails</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListInstanceTypeDetails</code> operations, which returns
     * results in the next page.</p>
     */
    inline ListInstanceTypeDetailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
