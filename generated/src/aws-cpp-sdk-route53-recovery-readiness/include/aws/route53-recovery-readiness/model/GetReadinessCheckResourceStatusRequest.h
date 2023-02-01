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
  class GetReadinessCheckResourceStatusRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResourceStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReadinessCheckResourceStatus"; }

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
    inline GetReadinessCheckResourceStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline GetReadinessCheckResourceStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The resource identifier, which is the Amazon Resource Name (ARN) or the
     * identifier generated for the resource by Application Recovery Controller (for
     * example, for a DNS target resource).</p>
     */
    inline GetReadinessCheckResourceStatusRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
