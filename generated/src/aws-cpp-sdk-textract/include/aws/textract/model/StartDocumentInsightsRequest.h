/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/BlueprintItem.h>
#include <aws/textract/model/EncryptionConfiguration.h>
#include <aws/textract/model/InputConfiguration.h>
#include <aws/textract/model/NotificationConfiguration.h>
#include <aws/textract/model/OutputConfiguration.h>

#include <utility>

namespace Aws {
namespace Textract {
namespace Model {

/**
 */
class StartDocumentInsightsRequest : public TextractRequest {
 public:
  AWS_TEXTRACT_API StartDocumentInsightsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartDocumentInsights"; }

  AWS_TEXTRACT_API Aws::String SerializePayload() const override;

  AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon S3 location of the input document to analyze.</p>
   */
  inline const InputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
  inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
  template <typename InputConfigurationT = InputConfiguration>
  void SetInputConfiguration(InputConfigurationT&& value) {
    m_inputConfigurationHasBeenSet = true;
    m_inputConfiguration = std::forward<InputConfigurationT>(value);
  }
  template <typename InputConfigurationT = InputConfiguration>
  StartDocumentInsightsRequest& WithInputConfiguration(InputConfigurationT&& value) {
    SetInputConfiguration(std::forward<InputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where the analysis results are written.</p>
   */
  inline const OutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = OutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = OutputConfiguration>
  StartDocumentInsightsRequest& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project whose configuration is used to
   * analyze the document.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  StartDocumentInsightsRequest& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The blueprints used to extract custom structured output from the
   * document.</p>
   */
  inline const Aws::Vector<BlueprintItem>& GetBlueprints() const { return m_blueprints; }
  inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
  template <typename BlueprintsT = Aws::Vector<BlueprintItem>>
  void SetBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints = std::forward<BlueprintsT>(value);
  }
  template <typename BlueprintsT = Aws::Vector<BlueprintItem>>
  StartDocumentInsightsRequest& WithBlueprints(BlueprintsT&& value) {
    SetBlueprints(std::forward<BlueprintsT>(value));
    return *this;
  }
  template <typename BlueprintsT = BlueprintItem>
  StartDocumentInsightsRequest& AddBlueprints(BlueprintsT&& value) {
    m_blueprintsHasBeenSet = true;
    m_blueprints.emplace_back(std::forward<BlueprintsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS encryption configuration used to encrypt the analysis output. If
   * you don't specify a value, Amazon Textract encrypts the output using an AWS
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
  StartDocumentInsightsRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Notification settings for the job.</p>
   */
  inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
  inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
  template <typename NotificationConfigurationT = NotificationConfiguration>
  void SetNotificationConfiguration(NotificationConfigurationT&& value) {
    m_notificationConfigurationHasBeenSet = true;
    m_notificationConfiguration = std::forward<NotificationConfigurationT>(value);
  }
  template <typename NotificationConfigurationT = NotificationConfiguration>
  StartDocumentInsightsRequest& WithNotificationConfiguration(NotificationConfigurationT&& value) {
    SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of tags (key-value pairs) to assign to the document insights job.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartDocumentInsightsRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartDocumentInsightsRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  InputConfiguration m_inputConfiguration;

  OutputConfiguration m_outputConfiguration;

  Aws::String m_projectArn;

  Aws::Vector<BlueprintItem> m_blueprints;

  EncryptionConfiguration m_encryptionConfiguration;

  NotificationConfiguration m_notificationConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_inputConfigurationHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_projectArnHasBeenSet = false;
  bool m_blueprintsHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_notificationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
