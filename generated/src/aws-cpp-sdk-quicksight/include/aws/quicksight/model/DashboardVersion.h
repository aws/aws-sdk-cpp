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


    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline DashboardVersion& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline DashboardVersion& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline const Aws::Vector<DashboardError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline void SetErrors(const Aws::Vector<DashboardError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline void SetErrors(Aws::Vector<DashboardError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DashboardVersion& WithErrors(const Aws::Vector<DashboardError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DashboardVersion& WithErrors(Aws::Vector<DashboardError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DashboardVersion& AddErrors(const DashboardError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with this dashboard version.</p>
     */
    inline DashboardVersion& AddErrors(DashboardError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>Version number for this version of the dashboard.</p>
     */
    inline DashboardVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DashboardVersion& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DashboardVersion& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Source entity ARN.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const{ return m_sourceEntityArn; }

    /**
     * <p>Source entity ARN.</p>
     */
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }

    /**
     * <p>Source entity ARN.</p>
     */
    inline void SetSourceEntityArn(const Aws::String& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = value; }

    /**
     * <p>Source entity ARN.</p>
     */
    inline void SetSourceEntityArn(Aws::String&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::move(value); }

    /**
     * <p>Source entity ARN.</p>
     */
    inline void SetSourceEntityArn(const char* value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn.assign(value); }

    /**
     * <p>Source entity ARN.</p>
     */
    inline DashboardVersion& WithSourceEntityArn(const Aws::String& value) { SetSourceEntityArn(value); return *this;}

    /**
     * <p>Source entity ARN.</p>
     */
    inline DashboardVersion& WithSourceEntityArn(Aws::String&& value) { SetSourceEntityArn(std::move(value)); return *this;}

    /**
     * <p>Source entity ARN.</p>
     */
    inline DashboardVersion& WithSourceEntityArn(const char* value) { SetSourceEntityArn(value); return *this;}


    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetArns() const{ return m_dataSetArns; }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline bool DataSetArnsHasBeenSet() const { return m_dataSetArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline void SetDataSetArns(const Aws::Vector<Aws::String>& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = value; }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline void SetDataSetArns(Aws::Vector<Aws::String>&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = std::move(value); }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline DashboardVersion& WithDataSetArns(const Aws::Vector<Aws::String>& value) { SetDataSetArns(value); return *this;}

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline DashboardVersion& WithDataSetArns(Aws::Vector<Aws::String>&& value) { SetDataSetArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline DashboardVersion& AddDataSetArns(const Aws::String& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline DashboardVersion& AddDataSetArns(Aws::String&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Numbers (ARNs) for the datasets that are associated with
     * this version of the dashboard.</p>
     */
    inline DashboardVersion& AddDataSetArns(const char* value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }


    /**
     * <p>Description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description.</p>
     */
    inline DashboardVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description.</p>
     */
    inline DashboardVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description.</p>
     */
    inline DashboardVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline DashboardVersion& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline DashboardVersion& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the theme associated with a version of the dashboard.</p>
     */
    inline DashboardVersion& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline const Aws::Vector<Sheet>& GetSheets() const{ return m_sheets; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline void SetSheets(const Aws::Vector<Sheet>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline void SetSheets(Aws::Vector<Sheet>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline DashboardVersion& WithSheets(const Aws::Vector<Sheet>& value) { SetSheets(value); return *this;}

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline DashboardVersion& WithSheets(Aws::Vector<Sheet>&& value) { SetSheets(std::move(value)); return *this;}

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline DashboardVersion& AddSheets(const Sheet& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline DashboardVersion& AddSheets(Sheet&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }

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
