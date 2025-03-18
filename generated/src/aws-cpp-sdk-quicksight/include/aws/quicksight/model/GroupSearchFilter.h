/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GroupFilterOperator.h>
#include <aws/quicksight/model/GroupFilterAttribute.h>
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
   * <p>A <code>GroupSearchFilter</code> object that you want to apply to your
   * search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GroupSearchFilter">AWS
   * API Reference</a></p>
   */
  class GroupSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API GroupSearchFilter() = default;
    AWS_QUICKSIGHT_API GroupSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GroupSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline GroupFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(GroupFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline GroupSearchFilter& WithOperator(GroupFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline GroupFilterAttribute GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(GroupFilterAttribute value) { m_nameHasBeenSet = true; m_name = value; }
    inline GroupSearchFilter& WithName(GroupFilterAttribute value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    GroupSearchFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    GroupFilterOperator m_operator{GroupFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    GroupFilterAttribute m_name{GroupFilterAttribute::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
