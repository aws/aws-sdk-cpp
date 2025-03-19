/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ManagedRule.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutManagedInsightRulesRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutManagedInsightRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedInsightRules"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline const Aws::Vector<ManagedRule>& GetManagedRules() const { return m_managedRules; }
    inline bool ManagedRulesHasBeenSet() const { return m_managedRulesHasBeenSet; }
    template<typename ManagedRulesT = Aws::Vector<ManagedRule>>
    void SetManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::forward<ManagedRulesT>(value); }
    template<typename ManagedRulesT = Aws::Vector<ManagedRule>>
    PutManagedInsightRulesRequest& WithManagedRules(ManagedRulesT&& value) { SetManagedRules(std::forward<ManagedRulesT>(value)); return *this;}
    template<typename ManagedRulesT = ManagedRule>
    PutManagedInsightRulesRequest& AddManagedRules(ManagedRulesT&& value) { m_managedRulesHasBeenSet = true; m_managedRules.emplace_back(std::forward<ManagedRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ManagedRule> m_managedRules;
    bool m_managedRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
