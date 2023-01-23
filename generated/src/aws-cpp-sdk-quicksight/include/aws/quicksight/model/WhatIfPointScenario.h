/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Provides the forecast to meet the target for a particular date.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WhatIfPointScenario">AWS
   * API Reference</a></p>
   */
  class WhatIfPointScenario
  {
  public:
    AWS_QUICKSIGHT_API WhatIfPointScenario();
    AWS_QUICKSIGHT_API WhatIfPointScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WhatIfPointScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline WhatIfPointScenario& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date that you need the forecast results for.</p>
     */
    inline WhatIfPointScenario& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The target value that you want to meet for the provided date.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The target value that you want to meet for the provided date.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The target value that you want to meet for the provided date.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The target value that you want to meet for the provided date.</p>
     */
    inline WhatIfPointScenario& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
