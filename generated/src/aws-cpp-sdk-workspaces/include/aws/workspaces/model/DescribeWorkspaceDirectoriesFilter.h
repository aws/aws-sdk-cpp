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
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter();
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the WorkSpaces to filter.</p>
     */
    inline const DescribeWorkspaceDirectoriesFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const DescribeWorkspaceDirectoriesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(DescribeWorkspaceDirectoriesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline DescribeWorkspaceDirectoriesFilter& WithName(const DescribeWorkspaceDirectoriesFilterName& value) { SetName(value); return *this;}
    inline DescribeWorkspaceDirectoriesFilter& WithName(DescribeWorkspaceDirectoriesFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for filtering WorkSpaces</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DescribeWorkspaceDirectoriesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline DescribeWorkspaceDirectoriesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline DescribeWorkspaceDirectoriesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DescribeWorkspaceDirectoriesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline DescribeWorkspaceDirectoriesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    DescribeWorkspaceDirectoriesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
