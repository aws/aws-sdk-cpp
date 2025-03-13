/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WhatIfPointScenario.h>
#include <aws/quicksight/model/WhatIfRangeScenario.h>
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
   * <p>The forecast scenario of a forecast in the line chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ForecastScenario">AWS
   * API Reference</a></p>
   */
  class ForecastScenario
  {
  public:
    AWS_QUICKSIGHT_API ForecastScenario() = default;
    AWS_QUICKSIGHT_API ForecastScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ForecastScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The what-if analysis forecast setup with the target date.</p>
     */
    inline const WhatIfPointScenario& GetWhatIfPointScenario() const { return m_whatIfPointScenario; }
    inline bool WhatIfPointScenarioHasBeenSet() const { return m_whatIfPointScenarioHasBeenSet; }
    template<typename WhatIfPointScenarioT = WhatIfPointScenario>
    void SetWhatIfPointScenario(WhatIfPointScenarioT&& value) { m_whatIfPointScenarioHasBeenSet = true; m_whatIfPointScenario = std::forward<WhatIfPointScenarioT>(value); }
    template<typename WhatIfPointScenarioT = WhatIfPointScenario>
    ForecastScenario& WithWhatIfPointScenario(WhatIfPointScenarioT&& value) { SetWhatIfPointScenario(std::forward<WhatIfPointScenarioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The what-if analysis forecast setup with the date range.</p>
     */
    inline const WhatIfRangeScenario& GetWhatIfRangeScenario() const { return m_whatIfRangeScenario; }
    inline bool WhatIfRangeScenarioHasBeenSet() const { return m_whatIfRangeScenarioHasBeenSet; }
    template<typename WhatIfRangeScenarioT = WhatIfRangeScenario>
    void SetWhatIfRangeScenario(WhatIfRangeScenarioT&& value) { m_whatIfRangeScenarioHasBeenSet = true; m_whatIfRangeScenario = std::forward<WhatIfRangeScenarioT>(value); }
    template<typename WhatIfRangeScenarioT = WhatIfRangeScenario>
    ForecastScenario& WithWhatIfRangeScenario(WhatIfRangeScenarioT&& value) { SetWhatIfRangeScenario(std::forward<WhatIfRangeScenarioT>(value)); return *this;}
    ///@}
  private:

    WhatIfPointScenario m_whatIfPointScenario;
    bool m_whatIfPointScenarioHasBeenSet = false;

    WhatIfRangeScenario m_whatIfRangeScenario;
    bool m_whatIfRangeScenarioHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
