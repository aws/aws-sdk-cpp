/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/redshift-serverless/model/UsageLimitPeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/UsageLimitUsageType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The usage limit object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UsageLimit">AWS
   * API Reference</a></p>
   */
  class UsageLimit
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UsageLimit() = default;
    AWS_REDSHIFTSERVERLESS_API UsageLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API UsageLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in RPUs consumed per hour. If
     * data-based, this amount is in terabytes (TB). The value must be a positive
     * number.</p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline UsageLimit& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline UsageLimit& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline UsageLimitPeriod GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(UsageLimitPeriod value) { m_periodHasBeenSet = true; m_period = value; }
    inline UsageLimit& WithPeriod(UsageLimitPeriod value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Amazon Redshift Serverless
     * resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UsageLimit& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the usage
     * limit.</p>
     */
    inline const Aws::String& GetUsageLimitArn() const { return m_usageLimitArn; }
    inline bool UsageLimitArnHasBeenSet() const { return m_usageLimitArnHasBeenSet; }
    template<typename UsageLimitArnT = Aws::String>
    void SetUsageLimitArn(UsageLimitArnT&& value) { m_usageLimitArnHasBeenSet = true; m_usageLimitArn = std::forward<UsageLimitArnT>(value); }
    template<typename UsageLimitArnT = Aws::String>
    UsageLimit& WithUsageLimitArn(UsageLimitArnT&& value) { SetUsageLimitArn(std::forward<UsageLimitArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline const Aws::String& GetUsageLimitId() const { return m_usageLimitId; }
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }
    template<typename UsageLimitIdT = Aws::String>
    void SetUsageLimitId(UsageLimitIdT&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::forward<UsageLimitIdT>(value); }
    template<typename UsageLimitIdT = Aws::String>
    UsageLimit& WithUsageLimitId(UsageLimitIdT&& value) { SetUsageLimitId(std::forward<UsageLimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift Serverless feature to limit.</p>
     */
    inline UsageLimitUsageType GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(UsageLimitUsageType value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline UsageLimit& WithUsageType(UsageLimitUsageType value) { SetUsageType(value); return *this;}
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

    Aws::String m_usageLimitArn;
    bool m_usageLimitArnHasBeenSet = false;

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;

    UsageLimitUsageType m_usageType{UsageLimitUsageType::NOT_SET};
    bool m_usageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
