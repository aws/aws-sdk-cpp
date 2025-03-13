/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ValidationStrategyMode.h>
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
   * <p>The option to relax the validation that is required to create and update
   * analyses, dashboards, and templates with definition objects. When you set this
   * value to <code>LENIENT</code>, validation is skipped for specific
   * errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ValidationStrategy">AWS
   * API Reference</a></p>
   */
  class ValidationStrategy
  {
  public:
    AWS_QUICKSIGHT_API ValidationStrategy() = default;
    AWS_QUICKSIGHT_API ValidationStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ValidationStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode of validation for the asset to be created or updated. When you set
     * this value to <code>STRICT</code>, strict validation for every error is
     * enforced. When you set this value to <code>LENIENT</code>, validation is skipped
     * for specific UI errors.</p>
     */
    inline ValidationStrategyMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ValidationStrategyMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ValidationStrategy& WithMode(ValidationStrategyMode value) { SetMode(value); return *this;}
    ///@}
  private:

    ValidationStrategyMode m_mode{ValidationStrategyMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
