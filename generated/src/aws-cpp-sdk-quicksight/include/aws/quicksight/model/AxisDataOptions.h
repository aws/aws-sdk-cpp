/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericAxisOptions.h>
#include <aws/quicksight/model/DateAxisOptions.h>
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
   * <p>The data options for an axis.</p> <p>This is a union type structure. For this
   * structure to be valid, only one of the attributes can be defined.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDataOptions">AWS
   * API Reference</a></p>
   */
  class AxisDataOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisDataOptions();
    AWS_QUICKSIGHT_API AxisDataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline const NumericAxisOptions& GetNumericAxisOptions() const{ return m_numericAxisOptions; }

    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline bool NumericAxisOptionsHasBeenSet() const { return m_numericAxisOptionsHasBeenSet; }

    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline void SetNumericAxisOptions(const NumericAxisOptions& value) { m_numericAxisOptionsHasBeenSet = true; m_numericAxisOptions = value; }

    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline void SetNumericAxisOptions(NumericAxisOptions&& value) { m_numericAxisOptionsHasBeenSet = true; m_numericAxisOptions = std::move(value); }

    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline AxisDataOptions& WithNumericAxisOptions(const NumericAxisOptions& value) { SetNumericAxisOptions(value); return *this;}

    /**
     * <p>The options for an axis with a numeric field.</p>
     */
    inline AxisDataOptions& WithNumericAxisOptions(NumericAxisOptions&& value) { SetNumericAxisOptions(std::move(value)); return *this;}


    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline const DateAxisOptions& GetDateAxisOptions() const{ return m_dateAxisOptions; }

    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline bool DateAxisOptionsHasBeenSet() const { return m_dateAxisOptionsHasBeenSet; }

    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline void SetDateAxisOptions(const DateAxisOptions& value) { m_dateAxisOptionsHasBeenSet = true; m_dateAxisOptions = value; }

    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline void SetDateAxisOptions(DateAxisOptions&& value) { m_dateAxisOptionsHasBeenSet = true; m_dateAxisOptions = std::move(value); }

    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline AxisDataOptions& WithDateAxisOptions(const DateAxisOptions& value) { SetDateAxisOptions(value); return *this;}

    /**
     * <p>The options for an axis with a date field.</p>
     */
    inline AxisDataOptions& WithDateAxisOptions(DateAxisOptions&& value) { SetDateAxisOptions(std::move(value)); return *this;}

  private:

    NumericAxisOptions m_numericAxisOptions;
    bool m_numericAxisOptionsHasBeenSet = false;

    DateAxisOptions m_dateAxisOptions;
    bool m_dateAxisOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
