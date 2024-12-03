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
    AWS_QUICKSIGHT_API DashboardVisualResult();
    AWS_QUICKSIGHT_API DashboardVisualResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVisualResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline DashboardVisualResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline DashboardVisualResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline DashboardVisualResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }
    inline DashboardVisualResult& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}
    inline DashboardVisualResult& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}
    inline DashboardVisualResult& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the sheet.</p>
     */
    inline const Aws::String& GetSheetId() const{ return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    inline void SetSheetId(const Aws::String& value) { m_sheetIdHasBeenSet = true; m_sheetId = value; }
    inline void SetSheetId(Aws::String&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::move(value); }
    inline void SetSheetId(const char* value) { m_sheetIdHasBeenSet = true; m_sheetId.assign(value); }
    inline DashboardVisualResult& WithSheetId(const Aws::String& value) { SetSheetId(value); return *this;}
    inline DashboardVisualResult& WithSheetId(Aws::String&& value) { SetSheetId(std::move(value)); return *this;}
    inline DashboardVisualResult& WithSheetId(const char* value) { SetSheetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sheet.</p>
     */
    inline const Aws::String& GetSheetName() const{ return m_sheetName; }
    inline bool SheetNameHasBeenSet() const { return m_sheetNameHasBeenSet; }
    inline void SetSheetName(const Aws::String& value) { m_sheetNameHasBeenSet = true; m_sheetName = value; }
    inline void SetSheetName(Aws::String&& value) { m_sheetNameHasBeenSet = true; m_sheetName = std::move(value); }
    inline void SetSheetName(const char* value) { m_sheetNameHasBeenSet = true; m_sheetName.assign(value); }
    inline DashboardVisualResult& WithSheetName(const Aws::String& value) { SetSheetName(value); return *this;}
    inline DashboardVisualResult& WithSheetName(Aws::String&& value) { SetSheetName(std::move(value)); return *this;}
    inline DashboardVisualResult& WithSheetName(const char* value) { SetSheetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the visual.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }
    inline DashboardVisualResult& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}
    inline DashboardVisualResult& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}
    inline DashboardVisualResult& WithVisualId(const char* value) { SetVisualId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the visual.</p>
     */
    inline const Aws::String& GetVisualTitle() const{ return m_visualTitle; }
    inline bool VisualTitleHasBeenSet() const { return m_visualTitleHasBeenSet; }
    inline void SetVisualTitle(const Aws::String& value) { m_visualTitleHasBeenSet = true; m_visualTitle = value; }
    inline void SetVisualTitle(Aws::String&& value) { m_visualTitleHasBeenSet = true; m_visualTitle = std::move(value); }
    inline void SetVisualTitle(const char* value) { m_visualTitleHasBeenSet = true; m_visualTitle.assign(value); }
    inline DashboardVisualResult& WithVisualTitle(const Aws::String& value) { SetVisualTitle(value); return *this;}
    inline DashboardVisualResult& WithVisualTitle(Aws::String&& value) { SetVisualTitle(std::move(value)); return *this;}
    inline DashboardVisualResult& WithVisualTitle(const char* value) { SetVisualTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtitle of the visual.</p>
     */
    inline const Aws::String& GetVisualSubtitle() const{ return m_visualSubtitle; }
    inline bool VisualSubtitleHasBeenSet() const { return m_visualSubtitleHasBeenSet; }
    inline void SetVisualSubtitle(const Aws::String& value) { m_visualSubtitleHasBeenSet = true; m_visualSubtitle = value; }
    inline void SetVisualSubtitle(Aws::String&& value) { m_visualSubtitleHasBeenSet = true; m_visualSubtitle = std::move(value); }
    inline void SetVisualSubtitle(const char* value) { m_visualSubtitleHasBeenSet = true; m_visualSubtitle.assign(value); }
    inline DashboardVisualResult& WithVisualSubtitle(const Aws::String& value) { SetVisualSubtitle(value); return *this;}
    inline DashboardVisualResult& WithVisualSubtitle(Aws::String&& value) { SetVisualSubtitle(std::move(value)); return *this;}
    inline DashboardVisualResult& WithVisualSubtitle(const char* value) { SetVisualSubtitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardUrl() const{ return m_dashboardUrl; }
    inline bool DashboardUrlHasBeenSet() const { return m_dashboardUrlHasBeenSet; }
    inline void SetDashboardUrl(const Aws::String& value) { m_dashboardUrlHasBeenSet = true; m_dashboardUrl = value; }
    inline void SetDashboardUrl(Aws::String&& value) { m_dashboardUrlHasBeenSet = true; m_dashboardUrl = std::move(value); }
    inline void SetDashboardUrl(const char* value) { m_dashboardUrlHasBeenSet = true; m_dashboardUrl.assign(value); }
    inline DashboardVisualResult& WithDashboardUrl(const Aws::String& value) { SetDashboardUrl(value); return *this;}
    inline DashboardVisualResult& WithDashboardUrl(Aws::String&& value) { SetDashboardUrl(std::move(value)); return *this;}
    inline DashboardVisualResult& WithDashboardUrl(const char* value) { SetDashboardUrl(value); return *this;}
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
