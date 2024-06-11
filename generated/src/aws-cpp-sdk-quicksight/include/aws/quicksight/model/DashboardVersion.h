/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardError.h>
#include <aws/quicksight/model/Sheet.h>
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
   * <p>Dashboard version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVersion">AWS
   * API Reference</a></p>
   */
  class DashboardVersion
  {
  public:
    AWS_QUICKSIGHT_API DashboardVersion();
    AWS_QUICKSIGHT_API DashboardVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DashboardVersion& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DashboardVersion& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Vector<DashboardError>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Vector<DashboardError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline DashboardVersion& WithErrors(const Aws::Vector<DashboardError>& value) { SetErrors(value); return *this;}
    inline DashboardVersion& WithErrors(Aws::Vector<DashboardError>&& value) { SetErrors(std::move(value)); return *this;}
    inline DashboardVersion& AddErrors(const DashboardError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    inline DashboardVersion& AddErrors(DashboardError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DashboardVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DashboardVersion& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline DashboardVersion& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DashboardVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DashboardVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DashboardVersion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source entity ARN.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const{ return m_sourceEntityArn; }
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }
    inline void SetSourceEntityArn(const Aws::String& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = value; }
    inline void SetSourceEntityArn(Aws::String&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::move(value); }
    inline void SetSourceEntityArn(const char* value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn.assign(value); }
    inline DashboardVersion& WithSourceEntityArn(const Aws::String& value) { SetSourceEntityArn(value); return *this;}
    inline DashboardVersion& WithSourceEntityArn(Aws::String&& value) { SetSourceEntityArn(std::move(value)); return *this;}
    inline DashboardVersion& WithSourceEntityArn(const char* value) { SetSourceEntityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetArns() const{ return m_dataSetArns; }
    inline bool DataSetArnsHasBeenSet() const { return m_dataSetArnsHasBeenSet; }
    inline void SetDataSetArns(const Aws::Vector<Aws::String>& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = value; }
    inline void SetDataSetArns(Aws::Vector<Aws::String>&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = std::move(value); }
    inline DashboardVersion& WithDataSetArns(const Aws::Vector<Aws::String>& value) { SetDataSetArns(value); return *this;}
    inline DashboardVersion& WithDataSetArns(Aws::Vector<Aws::String>&& value) { SetDataSetArns(std::move(value)); return *this;}
    inline DashboardVersion& AddDataSetArns(const Aws::String& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }
    inline DashboardVersion& AddDataSetArns(Aws::String&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(std::move(value)); return *this; }
    inline DashboardVersion& AddDataSetArns(const char* value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DashboardVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DashboardVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DashboardVersion& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }
    inline DashboardVersion& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}
    inline DashboardVersion& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}
    inline DashboardVersion& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline const Aws::Vector<Sheet>& GetSheets() const{ return m_sheets; }
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }
    inline void SetSheets(const Aws::Vector<Sheet>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }
    inline void SetSheets(Aws::Vector<Sheet>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }
    inline DashboardVersion& WithSheets(const Aws::Vector<Sheet>& value) { SetSheets(value); return *this;}
    inline DashboardVersion& WithSheets(Aws::Vector<Sheet>&& value) { SetSheets(std::move(value)); return *this;}
    inline DashboardVersion& AddSheets(const Sheet& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }
    inline DashboardVersion& AddSheets(Sheet&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<DashboardError> m_errors;
    bool m_errorsHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sourceEntityArn;
    bool m_sourceEntityArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSetArns;
    bool m_dataSetArnsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    Aws::Vector<Sheet> m_sheets;
    bool m_sheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
