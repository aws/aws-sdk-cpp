﻿/**
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
  class GetReadinessCheckStatusRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReadinessCheckStatus"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYREADINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetReadinessCheckStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetReadinessCheckStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetReadinessCheckStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetReadinessCheckStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }
    inline GetReadinessCheckStatusRequest& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}
    inline GetReadinessCheckStatusRequest& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}
    inline GetReadinessCheckStatusRequest& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
