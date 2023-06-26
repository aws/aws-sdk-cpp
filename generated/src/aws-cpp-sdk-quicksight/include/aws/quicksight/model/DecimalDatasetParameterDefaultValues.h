/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The default values of a decimal parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalDatasetParameterDefaultValues">AWS
   * API Reference</a></p>
   */
  class DecimalDatasetParameterDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API DecimalDatasetParameterDefaultValues();
    AWS_QUICKSIGHT_API DecimalDatasetParameterDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalDatasetParameterDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline const Aws::Vector<double>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline void SetStaticValues(const Aws::Vector<double>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline void SetStaticValues(Aws::Vector<double>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline DecimalDatasetParameterDefaultValues& WithStaticValues(const Aws::Vector<double>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline DecimalDatasetParameterDefaultValues& WithStaticValues(Aws::Vector<double>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>A list of static default values for a given decimal parameter.</p>
     */
    inline DecimalDatasetParameterDefaultValues& AddStaticValues(double value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

  private:

    Aws::Vector<double> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
