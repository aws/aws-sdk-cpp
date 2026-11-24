/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/CustomConfiguration.h>
#include <aws/textract/model/EncryptionConfiguration.h>
#include <aws/textract/model/ExtractionConfiguration.h>
#include <aws/textract/model/GenerativeConfiguration.h>
#include <aws/textract/model/SensitiveDataConfiguration.h>
#include <aws/textract/model/SplitterConfiguration.h>

#include <utility>

namespace Aws {
namespace Textract {
namespace Model {

/**
 */
class UpdateProjectRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API UpdateProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project to update.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  UpdateProjectRequest& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the project.</p>
   */
  inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
  inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
  template <typename ProjectDescriptionT = Aws::String>
  void SetProjectDescription(ProjectDescriptionT&& value) {
    m_projectDescriptionHasBeenSet = true;
    m_projectDescription = std::forward<ProjectDescriptionT>(value);
  }
  template <typename ProjectDescriptionT = Aws::String>
  UpdateProjectRequest& WithProjectDescription(ProjectDescriptionT&& value) {
    SetProjectDescription(std::forward<ProjectDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls how Amazon Textract extracts content from the
   * document, including bounding boxes, granularity, and output format. Replaces the
   * stored extraction configuration.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  inline bool ExtractionConfigurationHasBeenSet() const { return m_extractionConfigurationHasBeenSet; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  UpdateProjectRequest& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
    SetExtractionConfiguration(std::forward<ExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls generative capabilities such as summarization
   * and figure captioning. Replaces the stored generative configuration, so a
   * capability that you omit is turned off.</p>
   */
  inline const GenerativeConfiguration& GetGenerativeConfiguration() const { return m_generativeConfiguration; }
  inline bool GenerativeConfigurationHasBeenSet() const { return m_generativeConfigurationHasBeenSet; }
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  void SetGenerativeConfiguration(GenerativeConfigurationT&& value) {
    m_generativeConfigurationHasBeenSet = true;
    m_generativeConfiguration = std::forward<GenerativeConfigurationT>(value);
  }
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  UpdateProjectRequest& WithGenerativeConfiguration(GenerativeConfigurationT&& value) {
    SetGenerativeConfiguration(std::forward<GenerativeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that associates blueprints with the project for custom
   * output extraction. Replaces the stored custom configuration. To disable custom
   * configuration, specify an empty <code>Blueprints</code> list.</p>
   */
  inline const CustomConfiguration& GetCustomConfiguration() const { return m_customConfiguration; }
  inline bool CustomConfigurationHasBeenSet() const { return m_customConfigurationHasBeenSet; }
  template <typename CustomConfigurationT = CustomConfiguration>
  void SetCustomConfiguration(CustomConfigurationT&& value) {
    m_customConfigurationHasBeenSet = true;
    m_customConfiguration = std::forward<CustomConfigurationT>(value);
  }
  template <typename CustomConfigurationT = CustomConfiguration>
  UpdateProjectRequest& WithCustomConfiguration(CustomConfigurationT&& value) {
    SetCustomConfiguration(std::forward<CustomConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls whether multi-document packets are split into
   * individual documents. Replaces the stored splitter configuration.</p>
   */
  inline const SplitterConfiguration& GetSplitterConfiguration() const { return m_splitterConfiguration; }
  inline bool SplitterConfigurationHasBeenSet() const { return m_splitterConfigurationHasBeenSet; }
  template <typename SplitterConfigurationT = SplitterConfiguration>
  void SetSplitterConfiguration(SplitterConfigurationT&& value) {
    m_splitterConfigurationHasBeenSet = true;
    m_splitterConfiguration = std::forward<SplitterConfigurationT>(value);
  }
  template <typename SplitterConfigurationT = SplitterConfiguration>
  UpdateProjectRequest& WithSplitterConfiguration(SplitterConfigurationT&& value) {
    SetSplitterConfiguration(std::forward<SplitterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls detection and redaction of sensitive data,
   * such as personally identifiable information (PII). Replaces the stored sensitive
   * data configuration. To turn off detection, set <code>DetectionMode</code> to
   * <code>DISABLED</code>.</p>
   */
  inline const SensitiveDataConfiguration& GetSensitiveDataConfiguration() const { return m_sensitiveDataConfiguration; }
  inline bool SensitiveDataConfigurationHasBeenSet() const { return m_sensitiveDataConfigurationHasBeenSet; }
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  void SetSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    m_sensitiveDataConfigurationHasBeenSet = true;
    m_sensitiveDataConfiguration = std::forward<SensitiveDataConfigurationT>(value);
  }
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  UpdateProjectRequest& WithSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    SetSensitiveDataConfiguration(std::forward<SensitiveDataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS encryption configuration used to encrypt the project at rest.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  UpdateProjectRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectArn;

  Aws::String m_projectDescription;

  ExtractionConfiguration m_extractionConfiguration;

  GenerativeConfiguration m_generativeConfiguration;

  CustomConfiguration m_customConfiguration;

  SplitterConfiguration m_splitterConfiguration;

  SensitiveDataConfiguration m_sensitiveDataConfiguration;

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_projectArnHasBeenSet = false;
  bool m_projectDescriptionHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_generativeConfigurationHasBeenSet = false;
  bool m_customConfigurationHasBeenSet = false;
  bool m_splitterConfigurationHasBeenSet = false;
  bool m_sensitiveDataConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
