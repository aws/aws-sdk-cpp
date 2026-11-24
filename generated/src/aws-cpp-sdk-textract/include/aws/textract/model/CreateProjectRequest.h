/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreateProjectRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API CreateProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you use the same token for a
   * request that matches a previous request, the service ignores the request, but
   * does not return an error.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateProjectRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique name for the project.</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  CreateProjectRequest& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the project.</p>
   */
  inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
  inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
  template <typename ProjectDescriptionT = Aws::String>
  void SetProjectDescription(ProjectDescriptionT&& value) {
    m_projectDescriptionHasBeenSet = true;
    m_projectDescription = std::forward<ProjectDescriptionT>(value);
  }
  template <typename ProjectDescriptionT = Aws::String>
  CreateProjectRequest& WithProjectDescription(ProjectDescriptionT&& value) {
    SetProjectDescription(std::forward<ProjectDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls how Amazon Textract extracts content from the
   * document, including bounding boxes, granularity, and output format.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  inline bool ExtractionConfigurationHasBeenSet() const { return m_extractionConfigurationHasBeenSet; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  CreateProjectRequest& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
    SetExtractionConfiguration(std::forward<ExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls generative capabilities such as summarization
   * and figure captioning.</p>
   */
  inline const GenerativeConfiguration& GetGenerativeConfiguration() const { return m_generativeConfiguration; }
  inline bool GenerativeConfigurationHasBeenSet() const { return m_generativeConfigurationHasBeenSet; }
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  void SetGenerativeConfiguration(GenerativeConfigurationT&& value) {
    m_generativeConfigurationHasBeenSet = true;
    m_generativeConfiguration = std::forward<GenerativeConfigurationT>(value);
  }
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  CreateProjectRequest& WithGenerativeConfiguration(GenerativeConfigurationT&& value) {
    SetGenerativeConfiguration(std::forward<GenerativeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that associates blueprints with the project for custom
   * output extraction.</p>
   */
  inline const CustomConfiguration& GetCustomConfiguration() const { return m_customConfiguration; }
  inline bool CustomConfigurationHasBeenSet() const { return m_customConfigurationHasBeenSet; }
  template <typename CustomConfigurationT = CustomConfiguration>
  void SetCustomConfiguration(CustomConfigurationT&& value) {
    m_customConfigurationHasBeenSet = true;
    m_customConfiguration = std::forward<CustomConfigurationT>(value);
  }
  template <typename CustomConfigurationT = CustomConfiguration>
  CreateProjectRequest& WithCustomConfiguration(CustomConfigurationT&& value) {
    SetCustomConfiguration(std::forward<CustomConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls whether multi-document packets are split into
   * individual documents.</p>
   */
  inline const SplitterConfiguration& GetSplitterConfiguration() const { return m_splitterConfiguration; }
  inline bool SplitterConfigurationHasBeenSet() const { return m_splitterConfigurationHasBeenSet; }
  template <typename SplitterConfigurationT = SplitterConfiguration>
  void SetSplitterConfiguration(SplitterConfigurationT&& value) {
    m_splitterConfigurationHasBeenSet = true;
    m_splitterConfiguration = std::forward<SplitterConfigurationT>(value);
  }
  template <typename SplitterConfigurationT = SplitterConfiguration>
  CreateProjectRequest& WithSplitterConfiguration(SplitterConfigurationT&& value) {
    SetSplitterConfiguration(std::forward<SplitterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls detection and redaction of sensitive data,
   * such as personally identifiable information (PII).</p>
   */
  inline const SensitiveDataConfiguration& GetSensitiveDataConfiguration() const { return m_sensitiveDataConfiguration; }
  inline bool SensitiveDataConfigurationHasBeenSet() const { return m_sensitiveDataConfigurationHasBeenSet; }
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  void SetSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    m_sensitiveDataConfigurationHasBeenSet = true;
    m_sensitiveDataConfiguration = std::forward<SensitiveDataConfigurationT>(value);
  }
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  CreateProjectRequest& WithSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    SetSensitiveDataConfiguration(std::forward<SensitiveDataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS encryption configuration used to encrypt the project at rest. If
   * you don't specify a value, Amazon Textract encrypts the project using an AWS
   * owned key.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateProjectRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of tags (key-value pairs) to assign to the project.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateProjectRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateProjectRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_projectName;

  Aws::String m_projectDescription;

  ExtractionConfiguration m_extractionConfiguration;

  GenerativeConfiguration m_generativeConfiguration;

  CustomConfiguration m_customConfiguration;

  SplitterConfiguration m_splitterConfiguration;

  SensitiveDataConfiguration m_sensitiveDataConfiguration;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_projectNameHasBeenSet = false;
  bool m_projectDescriptionHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_generativeConfigurationHasBeenSet = false;
  bool m_customConfigurationHasBeenSet = false;
  bool m_splitterConfigurationHasBeenSet = false;
  bool m_sensitiveDataConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
