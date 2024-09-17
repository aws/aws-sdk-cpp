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
    AWS_REDSHIFTSERVERLESS_API UsageLimit();
    AWS_REDSHIFTSERVERLESS_API UsageLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API UsageLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in RPUs consumed per hour. If
     * data-based, this amount is in terabytes (TB). The value must be a positive
     * number.</p>
     */
    inline long long GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline UsageLimit& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachActionHasBeenSet = true; m_breachAction = std::move(value); }
    inline UsageLimit& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}
    inline UsageLimit& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline const UsageLimitPeriod& GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(const UsageLimitPeriod& value) { m_periodHasBeenSet = true; m_period = value; }
    inline void SetPeriod(UsageLimitPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }
    inline UsageLimit& WithPeriod(const UsageLimitPeriod& value) { SetPeriod(value); return *this;}
    inline UsageLimit& WithPeriod(UsageLimitPeriod&& value) { SetPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Amazon Redshift Serverless
     * resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline UsageLimit& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline UsageLimit& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline UsageLimit& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the usage
     * limit.</p>
     */
    inline const Aws::String& GetUsageLimitArn() const{ return m_usageLimitArn; }
    inline bool UsageLimitArnHasBeenSet() const { return m_usageLimitArnHasBeenSet; }
    inline void SetUsageLimitArn(const Aws::String& value) { m_usageLimitArnHasBeenSet = true; m_usageLimitArn = value; }
    inline void SetUsageLimitArn(Aws::String&& value) { m_usageLimitArnHasBeenSet = true; m_usageLimitArn = std::move(value); }
    inline void SetUsageLimitArn(const char* value) { m_usageLimitArnHasBeenSet = true; m_usageLimitArn.assign(value); }
    inline UsageLimit& WithUsageLimitArn(const Aws::String& value) { SetUsageLimitArn(value); return *this;}
    inline UsageLimit& WithUsageLimitArn(Aws::String&& value) { SetUsageLimitArn(std::move(value)); return *this;}
    inline UsageLimit& WithUsageLimitArn(const char* value) { SetUsageLimitArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline const Aws::String& GetUsageLimitId() const{ return m_usageLimitId; }
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }
    inline void SetUsageLimitId(const Aws::String& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = value; }
    inline void SetUsageLimitId(Aws::String&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::move(value); }
    inline void SetUsageLimitId(const char* value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId.assign(value); }
    inline UsageLimit& WithUsageLimitId(const Aws::String& value) { SetUsageLimitId(value); return *this;}
    inline UsageLimit& WithUsageLimitId(Aws::String&& value) { SetUsageLimitId(std::move(value)); return *this;}
    inline UsageLimit& WithUsageLimitId(const char* value) { SetUsageLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift Serverless feature to limit.</p>
     */
    inline const UsageLimitUsageType& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const UsageLimitUsageType& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(UsageLimitUsageType&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline UsageLimit& WithUsageType(const UsageLimitUsageType& value) { SetUsageType(value); return *this;}
    inline UsageLimit& WithUsageType(UsageLimitUsageType&& value) { SetUsageType(std::move(value)); return *this;}
    ///@}
  private:

    long long m_amount;
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction;
    bool m_breachActionHasBeenSet = false;

    UsageLimitPeriod m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_usageLimitArn;
    bool m_usageLimitArnHasBeenSet = false;

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;

    UsageLimitUsageType m_usageType;
    bool m_usageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
