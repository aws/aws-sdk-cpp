/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/PeriodUnit.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Information about the quota period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaPeriod">AWS
   * API Reference</a></p>
   */
  class QuotaPeriod
  {
  public:
    AWS_SERVICEQUOTAS_API QuotaPeriod() = default;
    AWS_SERVICEQUOTAS_API QuotaPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API QuotaPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value associated with the reported <code>PeriodUnit</code>.</p>
     */
    inline int GetPeriodValue() const { return m_periodValue; }
    inline bool PeriodValueHasBeenSet() const { return m_periodValueHasBeenSet; }
    inline void SetPeriodValue(int value) { m_periodValueHasBeenSet = true; m_periodValue = value; }
    inline QuotaPeriod& WithPeriodValue(int value) { SetPeriodValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time unit.</p>
     */
    inline PeriodUnit GetPeriodUnit() const { return m_periodUnit; }
    inline bool PeriodUnitHasBeenSet() const { return m_periodUnitHasBeenSet; }
    inline void SetPeriodUnit(PeriodUnit value) { m_periodUnitHasBeenSet = true; m_periodUnit = value; }
    inline QuotaPeriod& WithPeriodUnit(PeriodUnit value) { SetPeriodUnit(value); return *this;}
    ///@}
  private:

    int m_periodValue{0};
    bool m_periodValueHasBeenSet = false;

    PeriodUnit m_periodUnit{PeriodUnit::NOT_SET};
    bool m_periodUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
