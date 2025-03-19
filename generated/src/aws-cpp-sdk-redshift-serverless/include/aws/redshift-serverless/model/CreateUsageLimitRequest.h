/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/redshift-serverless/model/UsageLimitPeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/UsageLimitUsageType.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class CreateUsageLimitRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateUsageLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsageLimit"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in Redshift Processing Units
     * (RPU) consumed per hour. If data-based, this amount is in terabytes (TB) of data
     * transferred between Regions in cross-account sharing. The value must be a
     * positive number.</p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline CreateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline CreateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline UsageLimitPeriod GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(UsageLimitPeriod value) { m_periodHasBeenSet = true; m_period = value; }
    inline CreateUsageLimitRequest& WithPeriod(UsageLimitPeriod value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateUsageLimitRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline UsageLimitUsageType GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(UsageLimitUsageType value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline CreateUsageLimitRequest& WithUsageType(UsageLimitUsageType value) { SetUsageType(value); return *this;}
    ///@}
  private:

    long long m_amount{0};
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction{UsageLimitBreachAction::NOT_SET};
    bool m_breachActionHasBeenSet = false;

    UsageLimitPeriod m_period{UsageLimitPeriod::NOT_SET};
    bool m_periodHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    UsageLimitUsageType m_usageType{UsageLimitUsageType::NOT_SET};
    bool m_usageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
