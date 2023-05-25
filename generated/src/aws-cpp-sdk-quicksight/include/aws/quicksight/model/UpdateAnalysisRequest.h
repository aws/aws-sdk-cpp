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


    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline UpdateAnalysisRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline UpdateAnalysisRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the analysis that
     * you're updating.</p>
     */
    inline UpdateAnalysisRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline UpdateAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline UpdateAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID for the analysis that you're updating. This ID displays in the URL of
     * the analysis.</p>
     */
    inline UpdateAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline UpdateAnalysisRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline UpdateAnalysisRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the analysis that you're updating. This name displays
     * for the analysis in the Amazon QuickSight console.</p>
     */
    inline UpdateAnalysisRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateAnalysisRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameter names and override values that you want to use. An analysis can
     * have any parameter type, and some parameters might accept multiple values. </p>
     */
    inline UpdateAnalysisRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline const AnalysisSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline void SetSourceEntity(const AnalysisSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline void SetSourceEntity(AnalysisSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline UpdateAnalysisRequest& WithSourceEntity(const AnalysisSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>A source entity to use for the analysis that you're updating. This metadata
     * structure contains details that describe a source template and one or more
     * datasets.</p>
     */
    inline UpdateAnalysisRequest& WithSourceEntity(AnalysisSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline UpdateAnalysisRequest& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline UpdateAnalysisRequest& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the theme to apply to the analysis that
     * you're creating. To see the theme in the Amazon QuickSight console, make sure
     * that you have access to it.</p>
     */
    inline UpdateAnalysisRequest& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


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
    inline UpdateAnalysisRequest& WithDefinition(const AnalysisDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline UpdateAnalysisRequest& WithDefinition(AnalysisDefinition&& value) { SetDefinition(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
