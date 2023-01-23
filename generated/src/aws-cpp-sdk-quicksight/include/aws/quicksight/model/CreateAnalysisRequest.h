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
#include <aws/quicksight/model/AnalysisSourceEntity.h>
#include <aws/quicksight/model/AnalysisDefinition.h>
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
  class CreateAnalysisRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnalysis"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline CreateAnalysisRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline CreateAnalysisRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline CreateAnalysisRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline CreateAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline CreateAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline CreateAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline CreateAnalysisRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline CreateAnalysisRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the Amazon QuickSight console. </p>
     */
    inline CreateAnalysisRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline CreateAnalysisRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline CreateAnalysisRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline CreateAnalysisRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline CreateAnalysisRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline CreateAnalysisRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline CreateAnalysisRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline const AnalysisSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline void SetSourceEntity(const AnalysisSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline void SetSourceEntity(AnalysisSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline CreateAnalysisRequest& WithSourceEntity(const AnalysisSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline CreateAnalysisRequest& WithSourceEntity(AnalysisSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline CreateAnalysisRequest& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline CreateAnalysisRequest& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the Amazon QuickSight console, make sure that you have access to
     * it.</p>
     */
    inline CreateAnalysisRequest& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline CreateAnalysisRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline CreateAnalysisRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline CreateAnalysisRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline CreateAnalysisRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const AnalysisDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(const AnalysisDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline void SetDefinition(AnalysisDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateAnalysisRequest& WithDefinition(const AnalysisDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline CreateAnalysisRequest& WithDefinition(AnalysisDefinition&& value) { SetDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Parameters m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    AnalysisSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AnalysisDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
