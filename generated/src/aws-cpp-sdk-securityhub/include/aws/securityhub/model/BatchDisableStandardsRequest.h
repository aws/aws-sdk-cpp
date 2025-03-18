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
  class BatchDisableStandardsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchDisableStandardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisableStandards"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARNs of the standards subscriptions to disable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsSubscriptionArns() const { return m_standardsSubscriptionArns; }
    inline bool StandardsSubscriptionArnsHasBeenSet() const { return m_standardsSubscriptionArnsHasBeenSet; }
    template<typename StandardsSubscriptionArnsT = Aws::Vector<Aws::String>>
    void SetStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = std::forward<StandardsSubscriptionArnsT>(value); }
    template<typename StandardsSubscriptionArnsT = Aws::Vector<Aws::String>>
    BatchDisableStandardsRequest& WithStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { SetStandardsSubscriptionArns(std::forward<StandardsSubscriptionArnsT>(value)); return *this;}
    template<typename StandardsSubscriptionArnsT = Aws::String>
    BatchDisableStandardsRequest& AddStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.emplace_back(std::forward<StandardsSubscriptionArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_standardsSubscriptionArns;
    bool m_standardsSubscriptionArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
