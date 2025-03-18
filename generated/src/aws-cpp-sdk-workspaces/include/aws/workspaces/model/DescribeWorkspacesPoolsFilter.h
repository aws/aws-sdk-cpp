/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DescribeWorkspacesPoolsFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DescribeWorkspacesPoolsFilterOperator.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the filter conditions for WorkSpaces Pools to return.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesPoolsFilter">AWS
   * API Reference</a></p>
   */
  class DescribeWorkspacesPoolsFilter
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter() = default;
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pool to filter.</p>
     */
    inline DescribeWorkspacesPoolsFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DescribeWorkspacesPoolsFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DescribeWorkspacesPoolsFilter& WithName(DescribeWorkspacesPoolsFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for filtering WorkSpaces Pools.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DescribeWorkspacesPoolsFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DescribeWorkspacesPoolsFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator values for filtering WorkSpaces Pools.</p>
     */
    inline DescribeWorkspacesPoolsFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(DescribeWorkspacesPoolsFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DescribeWorkspacesPoolsFilter& WithOperator(DescribeWorkspacesPoolsFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    DescribeWorkspacesPoolsFilterName m_name{DescribeWorkspacesPoolsFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    DescribeWorkspacesPoolsFilterOperator m_operator{DescribeWorkspacesPoolsFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
