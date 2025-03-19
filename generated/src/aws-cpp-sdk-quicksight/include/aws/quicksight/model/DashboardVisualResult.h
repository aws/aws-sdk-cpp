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
   * <p>The QA result that is made from dashboard visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVisualResult">AWS
   * API Reference</a></p>
   */
  class DashboardVisualResult
  {
  public:
    AWS_QUICKSIGHT_API DashboardVisualResult() = default;
    AWS_QUICKSIGHT_API DashboardVisualResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVisualResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DashboardVisualResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    DashboardVisualResult& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sheet.</p>
     */
    inline const Aws::String& GetSheetId() const { return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    template<typename SheetIdT = Aws::String>
    void SetSheetId(SheetIdT&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::forward<SheetIdT>(value); }
    template<typename SheetIdT = Aws::String>
    DashboardVisualResult& WithSheetId(SheetIdT&& value) { SetSheetId(std::forward<SheetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sheet.</p>
     */
    inline const Aws::String& GetSheetName() const { return m_sheetName; }
    inline bool SheetNameHasBeenSet() const { return m_sheetNameHasBeenSet; }
    template<typename SheetNameT = Aws::String>
    void SetSheetName(SheetNameT&& value) { m_sheetNameHasBeenSet = true; m_sheetName = std::forward<SheetNameT>(value); }
    template<typename SheetNameT = Aws::String>
    DashboardVisualResult& WithSheetName(SheetNameT&& value) { SetSheetName(std::forward<SheetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the visual.</p>
     */
    inline const Aws::String& GetVisualId() const { return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    template<typename VisualIdT = Aws::String>
    void SetVisualId(VisualIdT&& value) { m_visualIdHasBeenSet = true; m_visualId = std::forward<VisualIdT>(value); }
    template<typename VisualIdT = Aws::String>
    DashboardVisualResult& WithVisualId(VisualIdT&& value) { SetVisualId(std::forward<VisualIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the visual.</p>
     */
    inline const Aws::String& GetVisualTitle() const { return m_visualTitle; }
    inline bool VisualTitleHasBeenSet() const { return m_visualTitleHasBeenSet; }
    template<typename VisualTitleT = Aws::String>
    void SetVisualTitle(VisualTitleT&& value) { m_visualTitleHasBeenSet = true; m_visualTitle = std::forward<VisualTitleT>(value); }
    template<typename VisualTitleT = Aws::String>
    DashboardVisualResult& WithVisualTitle(VisualTitleT&& value) { SetVisualTitle(std::forward<VisualTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle of the visual.</p>
     */
    inline const Aws::String& GetVisualSubtitle() const { return m_visualSubtitle; }
    inline bool VisualSubtitleHasBeenSet() const { return m_visualSubtitleHasBeenSet; }
    template<typename VisualSubtitleT = Aws::String>
    void SetVisualSubtitle(VisualSubtitleT&& value) { m_visualSubtitleHasBeenSet = true; m_visualSubtitle = std::forward<VisualSubtitleT>(value); }
    template<typename VisualSubtitleT = Aws::String>
    DashboardVisualResult& WithVisualSubtitle(VisualSubtitleT&& value) { SetVisualSubtitle(std::forward<VisualSubtitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardUrl() const { return m_dashboardUrl; }
    inline bool DashboardUrlHasBeenSet() const { return m_dashboardUrlHasBeenSet; }
    template<typename DashboardUrlT = Aws::String>
    void SetDashboardUrl(DashboardUrlT&& value) { m_dashboardUrlHasBeenSet = true; m_dashboardUrl = std::forward<DashboardUrlT>(value); }
    template<typename DashboardUrlT = Aws::String>
    DashboardVisualResult& WithDashboardUrl(DashboardUrlT&& value) { SetDashboardUrl(std::forward<DashboardUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    Aws::String m_sheetName;
    bool m_sheetNameHasBeenSet = false;

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    Aws::String m_visualTitle;
    bool m_visualTitleHasBeenSet = false;

    Aws::String m_visualSubtitle;
    bool m_visualSubtitleHasBeenSet = false;

    Aws::String m_dashboardUrl;
    bool m_dashboardUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
