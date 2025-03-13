/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperator.h>
#include <aws/quicksight/model/DataSourceFilterAttribute.h>
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
   * <p>A filter that you apply when searching for data sources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceSearchFilter">AWS
   * API Reference</a></p>
   */
  class DataSourceSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API DataSourceSearchFilter() = default;
    AWS_QUICKSIGHT_API DataSourceSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StringEquals"</code>. Valid values are
     * <code>"StringEquals"</code> and <code>"StringLike"</code>.</p> <p>If you set the
     * operator value to <code>"StringEquals"</code>, you need to provide an ownership
     * related filter in the <code>"NAME"</code> field and the arn of the user or group
     * whose data sources you want to search in the <code>"Value"</code> field. For
     * example, <code>"Name":"DIRECT_QUICKSIGHT_OWNER", "Operator": "StringEquals",
     * "Value": "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>.</p>
     * <p>If you set the value to <code>"StringLike"</code>, you need to provide the
     * name of the data sources you are searching for. For example,
     * <code>"Name":"DATASOURCE_NAME", "Operator": "StringLike", "Value":
     * "Test"</code>. The <code>"StringLike"</code> operator only supports the
     * <code>NAME</code> value <code>DATASOURCE_NAME</code>.</p>
     */
    inline FilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(FilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DataSourceSearchFilter& WithOperator(FilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "DIRECT_QUICKSIGHT_OWNER"</code>.</p> <p>Valid values are defined
     * as follows:</p> <ul> <li> <p> <code>DIRECT_QUICKSIGHT_VIEWER_OR_OWNER</code>:
     * Provide an ARN of a user or group, and any data sources with that ARN listed as
     * one of the owners or viewers of the data sources are returned. Implicit
     * permissions from folders or groups are not considered.</p> </li> <li> <p>
     * <code>DIRECT_QUICKSIGHT_OWNER</code>: Provide an ARN of a user or group, and any
     * data sources with that ARN listed as one of the owners if the data source are
     * returned. Implicit permissions from folders or groups are not considered.</p>
     * </li> <li> <p> <code>DIRECT_QUICKSIGHT_SOLE_OWNER</code>: Provide an ARN of a
     * user or group, and any data sources with that ARN listed as the only owner of
     * the data source are returned. Implicit permissions from folders or groups are
     * not considered.</p> </li> <li> <p> <code>DATASOURCE_NAME</code>: Any data
     * sources whose names have a substring match to the provided value are
     * returned.</p> </li> </ul>
     */
    inline DataSourceFilterAttribute GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DataSourceFilterAttribute value) { m_nameHasBeenSet = true; m_name = value; }
    inline DataSourceSearchFilter& WithName(DataSourceFilterAttribute value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the named item, for example
     * <code>DIRECT_QUICKSIGHT_OWNER</code>, that you want to use as a filter, for
     * example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    DataSourceSearchFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    FilterOperator m_operator{FilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    DataSourceFilterAttribute m_name{DataSourceFilterAttribute::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
