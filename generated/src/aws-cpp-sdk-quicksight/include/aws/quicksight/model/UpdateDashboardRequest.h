/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardSourceEntity.h>
#include <aws/quicksight/model/Parameters.h>
#include <aws/quicksight/model/DashboardPublishOptions.h>
#include <aws/quicksight/model/DashboardVersionDefinition.h>
#include <aws/quicksight/model/ValidationStrategy.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateDashboardRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboard"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the dashboard that
     * you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateDashboardRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateDashboardRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline UpdateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDashboardRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDashboardRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that you are using as a source when you update the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only update a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to update a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code> ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline const DashboardSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    inline void SetSourceEntity(const DashboardSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }
    inline void SetSourceEntity(DashboardSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }
    inline UpdateDashboardRequest& WithSourceEntity(const DashboardSourceEntity& value) { SetSourceEntity(value); return *this;}
    inline UpdateDashboardRequest& WithSourceEntity(DashboardSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the parameters of the dashboard. These are
     * parameter overrides for a dashboard. A dashboard can have any type of
     * parameters, and some parameters might accept multiple values.</p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateDashboardRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}
    inline UpdateDashboardRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline UpdateDashboardRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline UpdateDashboardRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, Amazon QuickSight disables the left filter pane on
     * the published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .CSV format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. This option is <code>COLLAPSED</code> by default. </p>
     * </li> </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const{ return m_dashboardPublishOptions; }
    inline bool DashboardPublishOptionsHasBeenSet() const { return m_dashboardPublishOptionsHasBeenSet; }
    inline void SetDashboardPublishOptions(const DashboardPublishOptions& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = value; }
    inline void SetDashboardPublishOptions(DashboardPublishOptions&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::move(value); }
    inline UpdateDashboardRequest& WithDashboardPublishOptions(const DashboardPublishOptions& value) { SetDashboardPublishOptions(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardPublishOptions(DashboardPublishOptions&& value) { SetDashboardPublishOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that was
     * originally associated with the entity. The theme ARN must exist in the same
     * Amazon Web Services account where you create the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }
    inline UpdateDashboardRequest& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}
    inline UpdateDashboardRequest& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const DashboardVersionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(DashboardVersionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline UpdateDashboardRequest& WithDefinition(const DashboardVersionDefinition& value) { SetDefinition(value); return *this;}
    inline UpdateDashboardRequest& WithDefinition(DashboardVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to update a dashboard with
     * definition objects. This skips the validation step for specific errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const{ return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    inline void SetValidationStrategy(const ValidationStrategy& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = value; }
    inline void SetValidationStrategy(ValidationStrategy&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::move(value); }
    inline UpdateDashboardRequest& WithValidationStrategy(const ValidationStrategy& value) { SetValidationStrategy(value); return *this;}
    inline UpdateDashboardRequest& WithValidationStrategy(ValidationStrategy&& value) { SetValidationStrategy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DashboardSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Parameters m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    DashboardPublishOptions m_dashboardPublishOptions;
    bool m_dashboardPublishOptionsHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    DashboardVersionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    ValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
