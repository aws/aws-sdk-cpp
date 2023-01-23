/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
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
  class DeleteFindingAggregatorRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DeleteFindingAggregatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFindingAggregator"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const{ return m_findingAggregatorArn; }

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline bool FindingAggregatorArnHasBeenSet() const { return m_findingAggregatorArnHasBeenSet; }

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline void SetFindingAggregatorArn(const Aws::String& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = value; }

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline void SetFindingAggregatorArn(Aws::String&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::move(value); }

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline void SetFindingAggregatorArn(const char* value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn.assign(value); }

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline DeleteFindingAggregatorRequest& WithFindingAggregatorArn(const Aws::String& value) { SetFindingAggregatorArn(value); return *this;}

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline DeleteFindingAggregatorRequest& WithFindingAggregatorArn(Aws::String&& value) { SetFindingAggregatorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the finding aggregator to delete. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline DeleteFindingAggregatorRequest& WithFindingAggregatorArn(const char* value) { SetFindingAggregatorArn(value); return *this;}

  private:

    Aws::String m_findingAggregatorArn;
    bool m_findingAggregatorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
