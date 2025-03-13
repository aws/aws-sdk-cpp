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
  class DeleteInsightRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DeleteInsightRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInsight"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the insight to delete.</p>
     */
    inline const Aws::String& GetInsightArn() const { return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    template<typename InsightArnT = Aws::String>
    void SetInsightArn(InsightArnT&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::forward<InsightArnT>(value); }
    template<typename InsightArnT = Aws::String>
    DeleteInsightRequest& WithInsightArn(InsightArnT&& value) { SetInsightArn(std::forward<InsightArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
