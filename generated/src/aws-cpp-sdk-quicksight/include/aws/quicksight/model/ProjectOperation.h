/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A transform operation that projects columns. Operations that come after a
   * projection can only refer to projected columns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ProjectOperation">AWS
   * API Reference</a></p>
   */
  class ProjectOperation
  {
  public:
    AWS_QUICKSIGHT_API ProjectOperation() = default;
    AWS_QUICKSIGHT_API ProjectOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ProjectOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Projected columns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectedColumns() const { return m_projectedColumns; }
    inline bool ProjectedColumnsHasBeenSet() const { return m_projectedColumnsHasBeenSet; }
    template<typename ProjectedColumnsT = Aws::Vector<Aws::String>>
    void SetProjectedColumns(ProjectedColumnsT&& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns = std::forward<ProjectedColumnsT>(value); }
    template<typename ProjectedColumnsT = Aws::Vector<Aws::String>>
    ProjectOperation& WithProjectedColumns(ProjectedColumnsT&& value) { SetProjectedColumns(std::forward<ProjectedColumnsT>(value)); return *this;}
    template<typename ProjectedColumnsT = Aws::String>
    ProjectOperation& AddProjectedColumns(ProjectedColumnsT&& value) { m_projectedColumnsHasBeenSet = true; m_projectedColumns.emplace_back(std::forward<ProjectedColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_projectedColumns;
    bool m_projectedColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
