/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/DateRangeUnit.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A date range for the date filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DateRange">AWS
   * API Reference</a></p>
   */
  class DateRange
  {
  public:
    AWS_SECURITYHUB_API DateRange();
    AWS_SECURITYHUB_API DateRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DateRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A date range value for the date filter.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>A date range value for the date filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A date range value for the date filter.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A date range value for the date filter.</p>
     */
    inline DateRange& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline const DateRangeUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline void SetUnit(const DateRangeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline void SetUnit(DateRangeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline DateRange& WithUnit(const DateRangeUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>A date range unit for the date filter.</p>
     */
    inline DateRange& WithUnit(DateRangeUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;

    DateRangeUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
