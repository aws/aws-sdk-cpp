/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ActionConnectorSearchFilterNameEnum.h>
#include <aws/quicksight/model/FilterOperator.h>
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
   * <p>A filter used to search for action connectors based on specific
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ActionConnectorSearchFilter">AWS
   * API Reference</a></p>
   */
  class ActionConnectorSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API ActionConnectorSearchFilter() = default;
    AWS_QUICKSIGHT_API ActionConnectorSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ActionConnectorSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter attribute (e.g., ACTION_CONNECTOR_NAME,
     * ACTION_CONNECTOR_TYPE, QUICKSIGHT_VIEWER_OR_OWNER).</p>
     */
    inline ActionConnectorSearchFilterNameEnum GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ActionConnectorSearchFilterNameEnum value) { m_nameHasBeenSet = true; m_name = value; }
    inline ActionConnectorSearchFilter& WithName(ActionConnectorSearchFilterNameEnum value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator to use for the filter (e.g., StringEquals,
     * StringLike).</p>
     */
    inline FilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(FilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline ActionConnectorSearchFilter& WithOperator(FilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare against using the specified operator.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ActionConnectorSearchFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ActionConnectorSearchFilterNameEnum m_name{ActionConnectorSearchFilterNameEnum::NOT_SET};
    bool m_nameHasBeenSet = false;

    FilterOperator m_operator{FilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
