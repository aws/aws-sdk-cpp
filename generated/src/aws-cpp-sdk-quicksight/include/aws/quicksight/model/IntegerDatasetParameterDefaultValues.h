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
   * <p>The default values of an integer parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IntegerDatasetParameterDefaultValues">AWS
   * API Reference</a></p>
   */
  class IntegerDatasetParameterDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API IntegerDatasetParameterDefaultValues();
    AWS_QUICKSIGHT_API IntegerDatasetParameterDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IntegerDatasetParameterDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline const Aws::Vector<long long>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline void SetStaticValues(const Aws::Vector<long long>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline void SetStaticValues(Aws::Vector<long long>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline IntegerDatasetParameterDefaultValues& WithStaticValues(const Aws::Vector<long long>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline IntegerDatasetParameterDefaultValues& WithStaticValues(Aws::Vector<long long>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>A list of static default values for a given integer parameter.</p>
     */
    inline IntegerDatasetParameterDefaultValues& AddStaticValues(long long value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

  private:

    Aws::Vector<long long> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
