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
    AWS_CLOUDWATCH_API PutManagedInsightRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedInsightRules"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline const Aws::Vector<ManagedRule>& GetManagedRules() const{ return m_managedRules; }

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline bool ManagedRulesHasBeenSet() const { return m_managedRulesHasBeenSet; }

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline void SetManagedRules(const Aws::Vector<ManagedRule>& value) { m_managedRulesHasBeenSet = true; m_managedRules = value; }

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline void SetManagedRules(Aws::Vector<ManagedRule>&& value) { m_managedRulesHasBeenSet = true; m_managedRules = std::move(value); }

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline PutManagedInsightRulesRequest& WithManagedRules(const Aws::Vector<ManagedRule>& value) { SetManagedRules(value); return *this;}

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline PutManagedInsightRulesRequest& WithManagedRules(Aws::Vector<ManagedRule>&& value) { SetManagedRules(std::move(value)); return *this;}

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline PutManagedInsightRulesRequest& AddManagedRules(const ManagedRule& value) { m_managedRulesHasBeenSet = true; m_managedRules.push_back(value); return *this; }

    /**
     * <p> A list of <code>ManagedRules</code> to enable. </p>
     */
    inline PutManagedInsightRulesRequest& AddManagedRules(ManagedRule&& value) { m_managedRulesHasBeenSet = true; m_managedRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ManagedRule> m_managedRules;
    bool m_managedRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
