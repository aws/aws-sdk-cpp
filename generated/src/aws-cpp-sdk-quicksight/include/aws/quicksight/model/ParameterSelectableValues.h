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
    AWS_QUICKSIGHT_API ParameterSelectableValues() = default;
    AWS_QUICKSIGHT_API ParameterSelectableValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterSelectableValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values that are used in <code>ParameterSelectableValues</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ParameterSelectableValues& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ParameterSelectableValues& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The column identifier that fetches values from the data set.</p>
     */
    inline const ColumnIdentifier& GetLinkToDataSetColumn() const { return m_linkToDataSetColumn; }
    inline bool LinkToDataSetColumnHasBeenSet() const { return m_linkToDataSetColumnHasBeenSet; }
    template<typename LinkToDataSetColumnT = ColumnIdentifier>
    void SetLinkToDataSetColumn(LinkToDataSetColumnT&& value) { m_linkToDataSetColumnHasBeenSet = true; m_linkToDataSetColumn = std::forward<LinkToDataSetColumnT>(value); }
    template<typename LinkToDataSetColumnT = ColumnIdentifier>
    ParameterSelectableValues& WithLinkToDataSetColumn(LinkToDataSetColumnT&& value) { SetLinkToDataSetColumn(std::forward<LinkToDataSetColumnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ColumnIdentifier m_linkToDataSetColumn;
    bool m_linkToDataSetColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
