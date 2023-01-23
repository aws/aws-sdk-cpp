/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetEnabledStandardsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetEnabledStandardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEnabledStandards"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsSubscriptionArns() const{ return m_standardsSubscriptionArns; }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline bool StandardsSubscriptionArnsHasBeenSet() const { return m_standardsSubscriptionArnsHasBeenSet; }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline void SetStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = value; }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline void SetStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = std::move(value); }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline GetEnabledStandardsRequest& WithStandardsSubscriptionArns(const Aws::Vector<Aws::String>& value) { SetStandardsSubscriptionArns(value); return *this;}

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline GetEnabledStandardsRequest& WithStandardsSubscriptionArns(Aws::Vector<Aws::String>&& value) { SetStandardsSubscriptionArns(std::move(value)); return *this;}

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(const Aws::String& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(Aws::String&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline GetEnabledStandardsRequest& AddStandardsSubscriptionArns(const char* value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.push_back(value); return *this; }


    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline GetEnabledStandardsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline GetEnabledStandardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_standardsSubscriptionArns;
    bool m_standardsSubscriptionArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
