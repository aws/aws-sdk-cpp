/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesFilterName.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the filter conditions for the WorkSpaces to return.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectoriesFilter">AWS
   * API Reference</a></p>
   */
  class DescribeWorkspaceDirectoriesFilter
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter() = default;
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the WorkSpaces to filter.</p>
     */
    inline DescribeWorkspaceDirectoriesFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DescribeWorkspaceDirectoriesFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DescribeWorkspaceDirectoriesFilter& WithName(DescribeWorkspaceDirectoriesFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for filtering WorkSpaces</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DescribeWorkspaceDirectoriesFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DescribeWorkspaceDirectoriesFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    DescribeWorkspaceDirectoriesFilterName m_name{DescribeWorkspaceDirectoriesFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
