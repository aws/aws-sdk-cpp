/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterSelectableValues">AWS
   * API Reference</a></p>
   */
  class ParameterSelectableValues
  {
  public:
    AWS_QUICKSIGHT_API ParameterSelectableValues();
    AWS_QUICKSIGHT_API ParameterSelectableValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterSelectableValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline ParameterSelectableValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline ParameterSelectableValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline ParameterSelectableValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline ParameterSelectableValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline ParameterSelectableValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline const ColumnIdentifier& GetLinkToDataSetColumn() const{ return m_linkToDataSetColumn; }

    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline bool LinkToDataSetColumnHasBeenSet() const { return m_linkToDataSetColumnHasBeenSet; }

    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline void SetLinkToDataSetColumn(const ColumnIdentifier& value) { m_linkToDataSetColumnHasBeenSet = true; m_linkToDataSetColumn = value; }

    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline void SetLinkToDataSetColumn(ColumnIdentifier&& value) { m_linkToDataSetColumnHasBeenSet = true; m_linkToDataSetColumn = std::move(value); }

    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline ParameterSelectableValues& WithLinkToDataSetColumn(const ColumnIdentifier& value) { SetLinkToDataSetColumn(value); return *this;}

    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline ParameterSelectableValues& WithLinkToDataSetColumn(ColumnIdentifier&& value) { SetLinkToDataSetColumn(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ColumnIdentifier m_linkToDataSetColumn;
    bool m_linkToDataSetColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
