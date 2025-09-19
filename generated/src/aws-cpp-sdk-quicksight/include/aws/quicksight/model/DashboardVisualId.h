/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>A structure that contains the following elements:</p> <ul> <li> <p>The
   * <code>DashboardId</code> of the dashboard that has the visual that you want to
   * embed.</p> </li> <li> <p>The <code>SheetId</code> of the sheet that has the
   * visual that you want to embed.</p> </li> <li> <p>The <code>VisualId</code> of
   * the visual that you want to embed.</p> </li> </ul> <p>The
   * <code>DashboardId</code>, <code>SheetId</code>, and <code>VisualId</code> can be
   * found in the <code>IDs for developers</code> section of the <code>Embed
   * visual</code> pane of the visual's on-visual menu of the QuickSight console. You
   * can also get the <code>DashboardId</code> with a <code>ListDashboards</code> API
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVisualId">AWS
   * API Reference</a></p>
   */
  class DashboardVisualId
  {
  public:
    AWS_QUICKSIGHT_API DashboardVisualId() = default;
    AWS_QUICKSIGHT_API DashboardVisualId(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVisualId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dashboard that has the visual that you want to embed. The
     * <code>DashboardId</code> can be found in the <code>IDs for developers</code>
     * section of the <code>Embed visual</code> pane of the visual's on-visual menu of
     * the QuickSight console. You can also get the <code>DashboardId</code> with a
     * <code>ListDashboards</code> API operation.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DashboardVisualId& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sheet that the has visual that you want to embed. The
     * <code>SheetId</code> can be found in the <code>IDs for developers</code> section
     * of the <code>Embed visual</code> pane of the visual's on-visual menu of the
     * QuickSight console.</p>
     */
    inline const Aws::String& GetSheetId() const { return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    template<typename SheetIdT = Aws::String>
    void SetSheetId(SheetIdT&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::forward<SheetIdT>(value); }
    template<typename SheetIdT = Aws::String>
    DashboardVisualId& WithSheetId(SheetIdT&& value) { SetSheetId(std::forward<SheetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the visual that you want to embed. The <code>VisualID</code> can be
     * found in the <code>IDs for developers</code> section of the <code>Embed
     * visual</code> pane of the visual's on-visual menu of the QuickSight console.</p>
     */
    inline const Aws::String& GetVisualId() const { return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    template<typename VisualIdT = Aws::String>
    void SetVisualId(VisualIdT&& value) { m_visualIdHasBeenSet = true; m_visualId = std::forward<VisualIdT>(value); }
    template<typename VisualIdT = Aws::String>
    DashboardVisualId& WithVisualId(VisualIdT&& value) { SetVisualId(std::forward<VisualIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
