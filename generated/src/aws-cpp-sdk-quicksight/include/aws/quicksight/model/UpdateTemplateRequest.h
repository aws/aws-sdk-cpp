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
    AWS_QUICKSIGHT_API UpdateTemplateRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateTemplateRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateTemplateRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateTemplateRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline UpdateTemplateRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline UpdateTemplateRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline UpdateTemplateRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
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
     * Services account and any Amazon QuickSight-supported Amazon Web Services
     * Region;. </p> <p>Use the <code>DataSetReferences</code> entity within
     * <code>SourceTemplate</code> or <code>SourceAnalysis</code> to list the
     * replacement datasets for the placeholders listed in the original. The schema in
     * each dataset must match its placeholder. </p>
     */
    inline const TemplateSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    inline void SetSourceEntity(const TemplateSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }
    inline void SetSourceEntity(TemplateSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }
    inline UpdateTemplateRequest& WithSourceEntity(const TemplateSourceEntity& value) { SetSourceEntity(value); return *this;}
    inline UpdateTemplateRequest& WithSourceEntity(TemplateSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the current template version that is being updated. Every
     * time you call <code>UpdateTemplate</code>, you create a new version of the
     * template. Each version of the template maintains a description of the version in
     * the <code>VersionDescription</code> field.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline UpdateTemplateRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline UpdateTemplateRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline UpdateTemplateRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a template.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const TemplateVersionDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const TemplateVersionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(TemplateVersionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline UpdateTemplateRequest& WithDefinition(const TemplateVersionDefinition& value) { SetDefinition(value); return *this;}
    inline UpdateTemplateRequest& WithDefinition(TemplateVersionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to update a template with
     * definition objects. This skips the validation step for specific errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const{ return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    inline void SetValidationStrategy(const ValidationStrategy& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = value; }
    inline void SetValidationStrategy(ValidationStrategy&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::move(value); }
    inline UpdateTemplateRequest& WithValidationStrategy(const ValidationStrategy& value) { SetValidationStrategy(value); return *this;}
    inline UpdateTemplateRequest& WithValidationStrategy(ValidationStrategy&& value) { SetValidationStrategy(std::move(value)); return *this;}
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
