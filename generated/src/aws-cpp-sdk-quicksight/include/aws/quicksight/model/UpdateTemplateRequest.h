/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <aws/quicksight/model/TemplateVersionDefinition.h>
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
  class UpdateTemplateRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the template that
     * you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateTemplateRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    UpdateTemplateRequest& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that you are using as a source when you update the template. In
     * <code>SourceEntity</code>, you specify the type of object you're using as
     * source: <code>SourceTemplate</code> for a template or
     * <code>SourceAnalysis</code> for an analysis. Both of these require an Amazon
     * Resource Name (ARN). For <code>SourceTemplate</code>, specify the ARN of the
     * source template. For <code>SourceAnalysis</code>, specify the ARN of the source
     * analysis. The <code>SourceTemplate</code> ARN can contain any Amazon Web
     * Services account and any QuickSight-supported Amazon Web Services Region;. </p>
     * <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline const TemplateSourceEntity& GetSourceEntity() const { return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    template<typename SourceEntityT = TemplateSourceEntity>
    void SetSourceEntity(SourceEntityT&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::forward<SourceEntityT>(value); }
    template<typename SourceEntityT = TemplateSourceEntity>
    UpdateTemplateRequest& WithSourceEntity(SourceEntityT&& value) { SetSourceEntity(std::forward<SourceEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    UpdateTemplateRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const TemplateVersionDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = TemplateVersionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = TemplateVersionDefinition>
    UpdateTemplateRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to update a template with
     * definition objects. This skips the validation step for specific errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const { return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    template<typename ValidationStrategyT = ValidationStrategy>
    void SetValidationStrategy(ValidationStrategyT&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::forward<ValidationStrategyT>(value); }
    template<typename ValidationStrategyT = ValidationStrategy>
    UpdateTemplateRequest& WithValidationStrategy(ValidationStrategyT&& value) { SetValidationStrategy(std::forward<ValidationStrategyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    TemplateSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TemplateVersionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    ValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
