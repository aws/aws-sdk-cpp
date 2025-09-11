/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Parameters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DashboardSourceEntity.h>
#include <aws/quicksight/model/DashboardPublishOptions.h>
#include <aws/quicksight/model/DashboardVersionDefinition.h>
#include <aws/quicksight/model/ValidationStrategy.h>
#include <aws/quicksight/model/LinkSharingConfiguration.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateDashboardRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDashboard"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateDashboardRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    CreateDashboardRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDashboardRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Parameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Parameters>
    CreateDashboardRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    CreateDashboardRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    CreateDashboardRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any QuickSight-supported Amazon
     * Web Services Region. </p> <p>Use the <code>DataSetReferences</code> entity
     * within <code>SourceTemplate</code> to list the replacement datasets for the
     * placeholders listed in the original. The schema in each dataset must match its
     * placeholder. </p> <p>Either a <code>SourceEntity</code> or a
     * <code>Definition</code> must be provided in order for the request to be
     * valid.</p>
     */
    inline const DashboardSourceEntity& GetSourceEntity() const { return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    template<typename SourceEntityT = DashboardSourceEntity>
    void SetSourceEntity(SourceEntityT&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::forward<SourceEntityT>(value); }
    template<typename SourceEntityT = DashboardSourceEntity>
    CreateDashboardRequest& WithSourceEntity(SourceEntityT&& value) { SetSourceEntity(std::forward<SourceEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDashboardRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDashboardRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    CreateDashboardRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for publishing the dashboard when you create it:</p> <ul> <li> <p>
     * <code>AvailabilityStatus</code> for <code>AdHocFilteringOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. When this is
     * set to <code>DISABLED</code>, QuickSight disables the left filter pane on the
     * published dashboard, which can be used for ad hoc (one-time) filtering. This
     * option is <code>ENABLED</code> by default. </p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>ExportToCSVOption</code> - This status
     * can be either <code>ENABLED</code> or <code>DISABLED</code>. The visual option
     * to export data to .CSV format isn't enabled when this is set to
     * <code>DISABLED</code>. This option is <code>ENABLED</code> by default. </p>
     * </li> <li> <p> <code>VisibilityState</code> for <code>SheetControlsOption</code>
     * - This visibility state can be either <code>COLLAPSED</code> or
     * <code>EXPANDED</code>. This option is <code>COLLAPSED</code> by default. </p>
     * </li> <li> <p> <code>AvailabilityStatus</code> for
     * <code>ExecutiveSummaryOption</code> - This status can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The option to build an executive
     * summary is disabled when this is set to <code>DISABLED</code>. This option is
     * <code>ENABLED</code> by default.</p> </li> <li> <p>
     * <code>AvailabilityStatus</code> for <code>DataStoriesSharingOption</code> - This
     * status can be either <code>ENABLED</code> or <code>DISABLED</code>. The option
     * to share a data story is disabled when this is set to <code>DISABLED</code>.
     * This option is <code>ENABLED</code> by default.</p> </li> </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const { return m_dashboardPublishOptions; }
    inline bool DashboardPublishOptionsHasBeenSet() const { return m_dashboardPublishOptionsHasBeenSet; }
    template<typename DashboardPublishOptionsT = DashboardPublishOptions>
    void SetDashboardPublishOptions(DashboardPublishOptionsT&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::forward<DashboardPublishOptionsT>(value); }
    template<typename DashboardPublishOptionsT = DashboardPublishOptions>
    CreateDashboardRequest& WithDashboardPublishOptions(DashboardPublishOptionsT&& value) { SetDashboardPublishOptions(std::forward<DashboardPublishOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const { return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    template<typename ThemeArnT = Aws::String>
    void SetThemeArn(ThemeArnT&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::forward<ThemeArnT>(value); }
    template<typename ThemeArnT = Aws::String>
    CreateDashboardRequest& WithThemeArn(ThemeArnT&& value) { SetThemeArn(std::forward<ThemeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p> <p>Either a
     * <code>SourceEntity</code> or a <code>Definition</code> must be provided in order
     * for the request to be valid.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = DashboardVersionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = DashboardVersionDefinition>
    CreateDashboardRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to create a dashboard with
     * definition objects. This option skips the validation step for specific
     * errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const { return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    template<typename ValidationStrategyT = ValidationStrategy>
    void SetValidationStrategy(ValidationStrategyT&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::forward<ValidationStrategyT>(value); }
    template<typename ValidationStrategyT = ValidationStrategy>
    CreateDashboardRequest& WithValidationStrategy(ValidationStrategyT&& value) { SetValidationStrategy(std::forward<ValidationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you create the dashboard, QuickSight adds the dashboard to these
     * folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    void SetFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::forward<FolderArnsT>(value); }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    CreateDashboardRequest& WithFolderArns(FolderArnsT&& value) { SetFolderArns(std::forward<FolderArnsT>(value)); return *this;}
    template<typename FolderArnsT = Aws::String>
    CreateDashboardRequest& AddFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns.emplace_back(std::forward<FolderArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the permissions of a shareable link to the
     * dashboard.</p>
     */
    inline const LinkSharingConfiguration& GetLinkSharingConfiguration() const { return m_linkSharingConfiguration; }
    inline bool LinkSharingConfigurationHasBeenSet() const { return m_linkSharingConfigurationHasBeenSet; }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    void SetLinkSharingConfiguration(LinkSharingConfigurationT&& value) { m_linkSharingConfigurationHasBeenSet = true; m_linkSharingConfiguration = std::forward<LinkSharingConfigurationT>(value); }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    CreateDashboardRequest& WithLinkSharingConfiguration(LinkSharingConfigurationT&& value) { SetLinkSharingConfiguration(std::forward<LinkSharingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const { return m_linkEntities; }
    inline bool LinkEntitiesHasBeenSet() const { return m_linkEntitiesHasBeenSet; }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    void SetLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = std::forward<LinkEntitiesT>(value); }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    CreateDashboardRequest& WithLinkEntities(LinkEntitiesT&& value) { SetLinkEntities(std::forward<LinkEntitiesT>(value)); return *this;}
    template<typename LinkEntitiesT = Aws::String>
    CreateDashboardRequest& AddLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.emplace_back(std::forward<LinkEntitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Parameters m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    DashboardSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

    Aws::Vector<Aws::String> m_folderArns;
    bool m_folderArnsHasBeenSet = false;

    LinkSharingConfiguration m_linkSharingConfiguration;
    bool m_linkSharingConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkEntities;
    bool m_linkEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
