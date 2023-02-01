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
    AWS_QUICKSIGHT_API CreateDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDashboard"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you want to create the
     * dashboard.</p>
     */
    inline CreateDashboardRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard, also added to the IAM policy.</p>
     */
    inline CreateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline CreateDashboardRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline CreateDashboardRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the creation of the dashboard, which you want to use to
     * override the default settings. A dashboard can have any type of parameters, and
     * some parameters might accept multiple values. </p>
     */
    inline CreateDashboardRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline CreateDashboardRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline CreateDashboardRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline CreateDashboardRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that contains the permissions of the dashboard. You can use this
     * structure for granting permissions by providing a list of IAM action information
     * for each principal ARN. </p> <p>To specify no permissions, omit the permissions
     * list.</p>
     */
    inline CreateDashboardRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline const DashboardSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline void SetSourceEntity(const DashboardSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline void SetSourceEntity(DashboardSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline CreateDashboardRequest& WithSourceEntity(const DashboardSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The entity that you are using as a source when you create the dashboard. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source. You can only create a dashboard from a template, so you use a
     * <code>SourceTemplate</code> entity. If you need to create a dashboard from an
     * analysis, first convert the analysis to a template by using the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>
     * </code> API operation. For <code>SourceTemplate</code>, specify the Amazon
     * Resource Name (ARN) of the source template. The <code>SourceTemplate</code>ARN
     * can contain any Amazon Web Services account and any Amazon QuickSight-supported
     * Amazon Web Services Region. </p> <p>Use the <code>DataSetReferences</code>
     * entity within <code>SourceTemplate</code> to list the replacement datasets for
     * the placeholders listed in the original. The schema in each dataset must match
     * its placeholder. </p>
     */
    inline CreateDashboardRequest& WithSourceEntity(DashboardSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the dashboard.</p>
     */
    inline CreateDashboardRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline CreateDashboardRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


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
    inline bool DashboardPublishOptionsHasBeenSet() const { return m_dashboardPublishOptionsHasBeenSet; }

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
    inline void SetDashboardPublishOptions(const DashboardPublishOptions& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = value; }

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
    inline void SetDashboardPublishOptions(DashboardPublishOptions&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::move(value); }

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
    inline CreateDashboardRequest& WithDashboardPublishOptions(const DashboardPublishOptions& value) { SetDashboardPublishOptions(value); return *this;}

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
    inline CreateDashboardRequest& WithDashboardPublishOptions(DashboardPublishOptions&& value) { SetDashboardPublishOptions(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the theme that is being used for this
     * dashboard. If you add a value for this field, it overrides the value that is
     * used in the source entity. The theme ARN must exist in the same Amazon Web
     * Services account where you create the dashboard.</p>
     */
    inline CreateDashboardRequest& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const DashboardVersionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const DashboardVersionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(DashboardVersionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateDashboardRequest& WithDefinition(const DashboardVersionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of a dashboard.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateDashboardRequest& WithDefinition(DashboardVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
