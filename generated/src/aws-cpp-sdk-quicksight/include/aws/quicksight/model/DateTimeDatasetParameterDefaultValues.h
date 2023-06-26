/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The default values of a date time parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeDatasetParameterDefaultValues">AWS
   * API Reference</a></p>
   */
  class DateTimeDatasetParameterDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API DateTimeDatasetParameterDefaultValues();
    AWS_QUICKSIGHT_API DateTimeDatasetParameterDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeDatasetParameterDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline void SetStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline void SetStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline DateTimeDatasetParameterDefaultValues& WithStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline DateTimeDatasetParameterDefaultValues& WithStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline DateTimeDatasetParameterDefaultValues& AddStaticValues(const Aws::Utils::DateTime& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

    /**
     * <p>A list of static default values for a given date time parameter.</p>
     */
    inline DateTimeDatasetParameterDefaultValues& AddStaticValues(Aws::Utils::DateTime&& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Utils::DateTime> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
