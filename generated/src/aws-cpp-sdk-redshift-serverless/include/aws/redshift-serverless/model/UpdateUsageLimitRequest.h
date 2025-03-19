/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateUsageLimitRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateUsageLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUsageLimit"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The new limit amount. If time-based, this amount is in Redshift Processing
     * Units (RPU) consumed per hour. If data-based, this amount is in terabytes (TB)
     * of data transferred between Regions in cross-account sharing. The value must be
     * a positive number.</p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline UpdateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline UpdateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline const Aws::String& GetUsageLimitId() const { return m_usageLimitId; }
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }
    template<typename UsageLimitIdT = Aws::String>
    void SetUsageLimitId(UsageLimitIdT&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::forward<UsageLimitIdT>(value); }
    template<typename UsageLimitIdT = Aws::String>
    UpdateUsageLimitRequest& WithUsageLimitId(UsageLimitIdT&& value) { SetUsageLimitId(std::forward<UsageLimitIdT>(value)); return *this;}
    ///@}
  private:

    long long m_amount{0};
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction{UsageLimitBreachAction::NOT_SET};
    bool m_breachActionHasBeenSet = false;

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
