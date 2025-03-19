/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyUsageLimitRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyUsageLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyUsageLimit"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the usage limit to modify.</p>
     */
    inline const Aws::String& GetUsageLimitId() const { return m_usageLimitId; }
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }
    template<typename UsageLimitIdT = Aws::String>
    void SetUsageLimitId(UsageLimitIdT&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::forward<UsageLimitIdT>(value); }
    template<typename UsageLimitIdT = Aws::String>
    ModifyUsageLimitRequest& WithUsageLimitId(UsageLimitIdT&& value) { SetUsageLimitId(std::forward<UsageLimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new limit amount. For more information about this parameter, see
     * <a>UsageLimit</a>. </p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline ModifyUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new action that Amazon Redshift takes when the limit is reached. For more
     * information about this parameter, see <a>UsageLimit</a>. </p>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline ModifyUsageLimitRequest& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}
  private:

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;

    long long m_amount{0};
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction{UsageLimitBreachAction::NOT_SET};
    bool m_breachActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
