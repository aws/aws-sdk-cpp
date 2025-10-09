/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldName.h>
#include <aws/quicksight/model/SearchFilterOperator.h>
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
   * <p>A structure that contains the filter information when searching
   * flows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SearchFlowsFilter">AWS
   * API Reference</a></p>
   */
  class SearchFlowsFilter
  {
  public:
    AWS_QUICKSIGHT_API SearchFlowsFilter() = default;
    AWS_QUICKSIGHT_API SearchFlowsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SearchFlowsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "DIRECT_QUICKSIGHT_SOLE_OWNER"</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>assetName</code>: Any flows whose
     * names have a substring match to this value will be returned.</p> </li> <li> <p>
     * <code>assetDescription</code>: Any flows whose descriptions have a substring
     * match to this value will be returned.</p> </li> <li> <p>
     * <code>DIRECT_QUICKSIGHT_SOLE_OWNER</code>: Provide an ARN of a user or group,
     * and any analyses with that ARN listed as the only owner of the analysis are
     * returned. Implicit permissions from folders or groups are not considered.</p>
     * </li> <li> <p> <code>DIRECT_QUICKSIGHT_OWNER</code>: Provide an ARN of a user or
     * group, and any analyses with that ARN listed as one of the owners of the
     * analyses are returned. Implicit permissions from folders or groups are not
     * considered.</p> </li> <li> <p> <code>DIRECT_QUICKSIGHT_VIEWER_OR_OWNER</code>:
     * Provide an ARN of a user or group, and any analyses with that ARN listed as one
     * of the owners or viewers of the analyses are returned. Implicit permissions from
     * folders or groups are not considered. </p> </li> </ul>
     */
    inline FieldName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(FieldName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SearchFlowsFilter& WithName(FieldName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StringEquals"</code>. Valid values are
     * <code>"StringEquals"</code> and <code>"StringLike"</code>.</p>
     */
    inline SearchFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(SearchFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SearchFlowsFilter& WithOperator(SearchFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the named item, in this case
     * <code>DIRECT_QUICKSIGHT_SOLE_OWNER</code>, that you want to use as a filter, for
     * example <code>"Value"</code>. An example is
     * <code>"arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    SearchFlowsFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    FieldName m_name{FieldName::NOT_SET};
    bool m_nameHasBeenSet = false;

    SearchFilterOperator m_operator{SearchFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
