/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class ListRulesRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRules"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYREADINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline ListRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline ListRulesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline ListRulesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type that a readiness rule applies to.</p>
     */
    inline ListRulesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
