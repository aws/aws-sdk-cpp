/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of selectable values that are used in a control.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterSelectableValues">AWS
   * API Reference</a></p>
   */
  class FilterSelectableValues
  {
  public:
    AWS_QUICKSIGHT_API FilterSelectableValues();
    AWS_QUICKSIGHT_API FilterSelectableValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterSelectableValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline FilterSelectableValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline FilterSelectableValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline FilterSelectableValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline FilterSelectableValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that are used in the <code>FilterSelectableValues</code>.</p>
     */
    inline FilterSelectableValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
