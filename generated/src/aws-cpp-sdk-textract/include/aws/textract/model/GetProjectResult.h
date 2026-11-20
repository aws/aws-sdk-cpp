/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/CustomConfiguration.h>
#include <aws/textract/model/EncryptionConfiguration.h>
#include <aws/textract/model/ExtractionConfiguration.h>
#include <aws/textract/model/GenerativeConfiguration.h>
#include <aws/textract/model/ProjectStatus.h>
#include <aws/textract/model/SensitiveDataConfiguration.h>
#include <aws/textract/model/SplitterConfiguration.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {
class GetProjectResult {
 public:
  AWS_TEXTRACT_API GetProjectResult() = default;
  AWS_TEXTRACT_API GetProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_TEXTRACT_API GetProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  GetProjectResult& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the project.</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  GetProjectResult& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the project.</p>
   */
  inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
  template <typename ProjectDescriptionT = Aws::String>
  void SetProjectDescription(ProjectDescriptionT&& value) {
    m_projectDescriptionHasBeenSet = true;
    m_projectDescription = std::forward<ProjectDescriptionT>(value);
  }
  template <typename ProjectDescriptionT = Aws::String>
  GetProjectResult& WithProjectDescription(ProjectDescriptionT&& value) {
    SetProjectDescription(std::forward<ProjectDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the project, indicating whether it was created successfully or
   * failed.</p>
   */
  inline ProjectStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProjectStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetProjectResult& WithStatus(ProjectStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that controls how Amazon Textract extracts content from the
   * document, including bounding boxes, granularity, and output format.</p>
   */
  inline const ExtractionConfiguration& GetExtractionConfiguration() const { return m_extractionConfiguration; }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  void SetExtractionConfiguration(ExtractionConfigurationT&& value) {
    m_extractionConfigurationHasBeenSet = true;
    m_extractionConfiguration = std::forward<ExtractionConfigurationT>(value);
  }
  template <typename ExtractionConfigurationT = ExtractionConfiguration>
  GetProjectResult& WithExtractionConfiguration(ExtractionConfigurationT&& value) {
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
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  void SetGenerativeConfiguration(GenerativeConfigurationT&& value) {
    m_generativeConfigurationHasBeenSet = true;
    m_generativeConfiguration = std::forward<GenerativeConfigurationT>(value);
  }
  template <typename GenerativeConfigurationT = GenerativeConfiguration>
  GetProjectResult& WithGenerativeConfiguration(GenerativeConfigurationT&& value) {
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
  template <typename CustomConfigurationT = CustomConfiguration>
  void SetCustomConfiguration(CustomConfigurationT&& value) {
    m_customConfigurationHasBeenSet = true;
    m_customConfiguration = std::forward<CustomConfigurationT>(value);
  }
  template <typename CustomConfigurationT = CustomConfiguration>
  GetProjectResult& WithCustomConfiguration(CustomConfigurationT&& value) {
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
  template <typename SplitterConfigurationT = SplitterConfiguration>
  void SetSplitterConfiguration(SplitterConfigurationT&& value) {
    m_splitterConfigurationHasBeenSet = true;
    m_splitterConfiguration = std::forward<SplitterConfigurationT>(value);
  }
  template <typename SplitterConfigurationT = SplitterConfiguration>
  GetProjectResult& WithSplitterConfiguration(SplitterConfigurationT&& value) {
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
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  void SetSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    m_sensitiveDataConfigurationHasBeenSet = true;
    m_sensitiveDataConfiguration = std::forward<SensitiveDataConfigurationT>(value);
  }
  template <typename SensitiveDataConfigurationT = SensitiveDataConfiguration>
  GetProjectResult& WithSensitiveDataConfiguration(SensitiveDataConfigurationT&& value) {
    SetSensitiveDataConfiguration(std::forward<SensitiveDataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS encryption configuration used to encrypt the project at rest.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  GetProjectResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the project was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetProjectResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the project was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  GetProjectResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetProjectResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_projectArn;

  Aws::String m_projectName;

  Aws::String m_projectDescription;

  ProjectStatus m_status{ProjectStatus::NOT_SET};

  ExtractionConfiguration m_extractionConfiguration;

  GenerativeConfiguration m_generativeConfiguration;

  CustomConfiguration m_customConfiguration;

  SplitterConfiguration m_splitterConfiguration;

  SensitiveDataConfiguration m_sensitiveDataConfiguration;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_projectArnHasBeenSet = false;
  bool m_projectNameHasBeenSet = false;
  bool m_projectDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_extractionConfigurationHasBeenSet = false;
  bool m_generativeConfigurationHasBeenSet = false;
  bool m_customConfigurationHasBeenSet = false;
  bool m_splitterConfigurationHasBeenSet = false;
  bool m_sensitiveDataConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
