/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Parameters.h>
#include <aws/quicksight/model/AnalysisSourceEntity.h>
#include <aws/quicksight/model/AnalysisDefinition.h>
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
  class UpdateAnalysisRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnalysis"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateAnalysisRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateAnalysisRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateAnalysisRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }
    inline UpdateAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline UpdateAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline UpdateAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAnalysisRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAnalysisRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAnalysisRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateAnalysisRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}
    inline UpdateAnalysisRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline const AnalysisSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }
    inline void SetSourceEntity(const AnalysisSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }
    inline void SetSourceEntity(AnalysisSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }
    inline UpdateAnalysisRequest& WithSourceEntity(const AnalysisSourceEntity& value) { SetSourceEntity(value); return *this;}
    inline UpdateAnalysisRequest& WithSourceEntity(AnalysisSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }
    inline UpdateAnalysisRequest& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}
    inline UpdateAnalysisRequest& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}
    inline UpdateAnalysisRequest& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const AnalysisDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const AnalysisDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(AnalysisDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline UpdateAnalysisRequest& WithDefinition(const AnalysisDefinition& value) { SetDefinition(value); return *this;}
    inline UpdateAnalysisRequest& WithDefinition(AnalysisDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to relax the validation needed to update an analysis with
     * definition objects. This skips the validation step for specific errors.</p>
     */
    inline const ValidationStrategy& GetValidationStrategy() const{ return m_validationStrategy; }
    inline bool ValidationStrategyHasBeenSet() const { return m_validationStrategyHasBeenSet; }
    inline void SetValidationStrategy(const ValidationStrategy& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = value; }
    inline void SetValidationStrategy(ValidationStrategy&& value) { m_validationStrategyHasBeenSet = true; m_validationStrategy = std::move(value); }
    inline UpdateAnalysisRequest& WithValidationStrategy(const ValidationStrategy& value) { SetValidationStrategy(value); return *this;}
    inline UpdateAnalysisRequest& WithValidationStrategy(ValidationStrategy&& value) { SetValidationStrategy(std::move(value)); return *this;}
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

    AnalysisSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    AnalysisDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    ValidationStrategy m_validationStrategy;
    bool m_validationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
