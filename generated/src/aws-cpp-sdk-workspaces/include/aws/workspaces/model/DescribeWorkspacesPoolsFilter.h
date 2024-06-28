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
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter();
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DescribeWorkspacesPoolsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pool to filter.</p>
     */
    inline const DescribeWorkspacesPoolsFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const DescribeWorkspacesPoolsFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(DescribeWorkspacesPoolsFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline DescribeWorkspacesPoolsFilter& WithName(const DescribeWorkspacesPoolsFilterName& value) { SetName(value); return *this;}
    inline DescribeWorkspacesPoolsFilter& WithName(DescribeWorkspacesPoolsFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for filtering WorkSpaces Pools.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DescribeWorkspacesPoolsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline DescribeWorkspacesPoolsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DescribeWorkspacesPoolsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline DescribeWorkspacesPoolsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator values for filtering WorkSpaces Pools.</p>
     */
    inline const DescribeWorkspacesPoolsFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const DescribeWorkspacesPoolsFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(DescribeWorkspacesPoolsFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline DescribeWorkspacesPoolsFilter& WithOperator(const DescribeWorkspacesPoolsFilterOperator& value) { SetOperator(value); return *this;}
    inline DescribeWorkspacesPoolsFilter& WithOperator(DescribeWorkspacesPoolsFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    DescribeWorkspacesPoolsFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    DescribeWorkspacesPoolsFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
