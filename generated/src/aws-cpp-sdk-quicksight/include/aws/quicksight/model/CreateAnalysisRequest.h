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
#include <aws/quicksight/model/ValidationStrategy.h>
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
    AWS_QUICKSIGHT_API CreateAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnalysis"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where you are creating an
     * analysis.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateAnalysisRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the analysis that you're creating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    CreateAnalysisRequest& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the analysis that you're creating. This name displays
     * for the analysis in the QuickSight console. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAnalysisRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Parameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Parameters>
    CreateAnalysisRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * on an analysis. You can use the <code>Permissions</code> structure to grant
     * permissions by providing a list of Identity and Access Management (IAM) action
     * information for each principal listed by Amazon Resource Name (ARN). </p> <p>To
     * specify no permissions, omit <code>Permissions</code>.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    CreateAnalysisRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    CreateAnalysisRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A source entity to use for the analysis that you're creating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p> <p>Either a <code>SourceEntity</code> or a <code>Definition</code>
     * must be provided in order for the request to be valid.</p>
     */
    inline const AnalysisSourceEntity& GetSourceEntity() const { return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    template<typename SourceEntityT = AnalysisSourceEntity>
    void SetSourceEntity(SourceEntityT&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::forward<SourceEntityT>(value); }
    template<typename SourceEntityT = AnalysisSourceEntity>
    CreateAnalysisRequest& WithSourceEntity(SourceEntityT&& value) { SetSourceEntity(std::forward<SourceEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the theme to apply to the analysis that you're creating. To see
     * the theme in the QuickSight console, make sure that you have access to it.</p>
     */
    inline const Aws::String& GetThemeArn() const { return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    template<typename ThemeArnT = Aws::String>
    void SetThemeArn(ThemeArnT&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::forward<ThemeArnT>(value); }
    template<typename ThemeArnT = Aws::String>
    CreateAnalysisRequest& WithThemeArn(ThemeArnT&& value) { SetThemeArn(std::forward<ThemeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a map of the key-value pairs for the resource tag or tags assigned
     * to the analysis.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAnalysisRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAnalysisRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p> <p>Either a
     * <code>SourceEntity</code> or a <code>Definition</code> must be provided in order
     * for the request to be valid.</p>
     */
    inline const AnalysisDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = AnalysisDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = AnalysisDefinition>
    CreateAnalysisRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to create an analysis with
     * definition objects. This skips the validation step for specific errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const { return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    template<typename ValidationStrategyT = ValidationStrategy>
    void SetValidationStrategy(ValidationStrategyT&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::forward<ValidationStrategyT>(value); }
    template<typename ValidationStrategyT = ValidationStrategy>
    CreateAnalysisRequest& WithValidationStrategy(ValidationStrategyT&& value) { SetValidationStrategy(std::forward<ValidationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you create the analysis, QuickSight adds the analysis to these
     * folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderArns() const { return m_folderArns; }
    inline bool FolderArnsHasBeenSet() const { return m_folderArnsHasBeenSet; }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    void SetFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns = std::forward<FolderArnsT>(value); }
    template<typename FolderArnsT = Aws::Vector<Aws::String>>
    CreateAnalysisRequest& WithFolderArns(FolderArnsT&& value) { SetFolderArns(std::forward<FolderArnsT>(value)); return *this;}
    template<typename FolderArnsT = Aws::String>
    CreateAnalysisRequest& AddFolderArns(FolderArnsT&& value) { m_folderArnsHasBeenSet = true; m_folderArns.emplace_back(std::forward<FolderArnsT>(value)); return *this; }
    ///@}
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

    ValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderArns;
    bool m_folderArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
