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
  class ListVpcEndpointsForDomainRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVpcEndpointsForDomain"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain to list associated VPC endpoints for.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListEndpointsForDomain</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListEndpointsForDomain</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListVpcEndpointsForDomainRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
