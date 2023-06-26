/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PivotTableFieldOption.h>
#include <aws/quicksight/model/PivotTableDataPathOption.h>
#include <aws/quicksight/model/PivotTableFieldCollapseStateOption.h>
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
   * <p>The field options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldOptions();
    AWS_QUICKSIGHT_API PivotTableFieldOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableFieldOption>& GetSelectedFieldOptions() const{ return m_selectedFieldOptions; }

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline bool SelectedFieldOptionsHasBeenSet() const { return m_selectedFieldOptionsHasBeenSet; }

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline void SetSelectedFieldOptions(const Aws::Vector<PivotTableFieldOption>& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = value; }

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline void SetSelectedFieldOptions(Aws::Vector<PivotTableFieldOption>&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions = std::move(value); }

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithSelectedFieldOptions(const Aws::Vector<PivotTableFieldOption>& value) { SetSelectedFieldOptions(value); return *this;}

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithSelectedFieldOptions(Aws::Vector<PivotTableFieldOption>&& value) { SetSelectedFieldOptions(std::move(value)); return *this;}

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddSelectedFieldOptions(const PivotTableFieldOption& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.push_back(value); return *this; }

    /**
     * <p>The selected field options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddSelectedFieldOptions(PivotTableFieldOption&& value) { m_selectedFieldOptionsHasBeenSet = true; m_selectedFieldOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableDataPathOption>& GetDataPathOptions() const{ return m_dataPathOptions; }

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline bool DataPathOptionsHasBeenSet() const { return m_dataPathOptionsHasBeenSet; }

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline void SetDataPathOptions(const Aws::Vector<PivotTableDataPathOption>& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions = value; }

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline void SetDataPathOptions(Aws::Vector<PivotTableDataPathOption>&& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions = std::move(value); }

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithDataPathOptions(const Aws::Vector<PivotTableDataPathOption>& value) { SetDataPathOptions(value); return *this;}

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithDataPathOptions(Aws::Vector<PivotTableDataPathOption>&& value) { SetDataPathOptions(std::move(value)); return *this;}

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddDataPathOptions(const PivotTableDataPathOption& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions.push_back(value); return *this; }

    /**
     * <p>The data path options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddDataPathOptions(PivotTableDataPathOption&& value) { m_dataPathOptionsHasBeenSet = true; m_dataPathOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline const Aws::Vector<PivotTableFieldCollapseStateOption>& GetCollapseStateOptions() const{ return m_collapseStateOptions; }

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline bool CollapseStateOptionsHasBeenSet() const { return m_collapseStateOptionsHasBeenSet; }

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline void SetCollapseStateOptions(const Aws::Vector<PivotTableFieldCollapseStateOption>& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions = value; }

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline void SetCollapseStateOptions(Aws::Vector<PivotTableFieldCollapseStateOption>&& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions = std::move(value); }

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithCollapseStateOptions(const Aws::Vector<PivotTableFieldCollapseStateOption>& value) { SetCollapseStateOptions(value); return *this;}

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& WithCollapseStateOptions(Aws::Vector<PivotTableFieldCollapseStateOption>&& value) { SetCollapseStateOptions(std::move(value)); return *this;}

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddCollapseStateOptions(const PivotTableFieldCollapseStateOption& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions.push_back(value); return *this; }

    /**
     * <p>The collapse state options for the pivot table field options.</p>
     */
    inline PivotTableFieldOptions& AddCollapseStateOptions(PivotTableFieldCollapseStateOption&& value) { m_collapseStateOptionsHasBeenSet = true; m_collapseStateOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PivotTableFieldOption> m_selectedFieldOptions;
    bool m_selectedFieldOptionsHasBeenSet = false;

    Aws::Vector<PivotTableDataPathOption> m_dataPathOptions;
    bool m_dataPathOptionsHasBeenSet = false;

    Aws::Vector<PivotTableFieldCollapseStateOption> m_collapseStateOptions;
    bool m_collapseStateOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
