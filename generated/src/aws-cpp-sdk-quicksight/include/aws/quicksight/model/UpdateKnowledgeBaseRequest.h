/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlConfiguration.h>
#include <aws/quicksight/model/KnowledgeBaseConfiguration.h>
#include <aws/quicksight/model/MediaExtractionConfiguration.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateKnowledgeBaseRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateKnowledgeBaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateKnowledgeBase"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the knowledge
   * base.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateKnowledgeBaseRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  UpdateKnowledgeBaseRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the knowledge base. If you don't specify a name, the existing
   * name is retained.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateKnowledgeBaseRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the knowledge base. If you don't specify a description, the
   * existing description is retained.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateKnowledgeBaseRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
  inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    m_knowledgeBaseConfigurationHasBeenSet = true;
    m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value);
  }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  UpdateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
  inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    m_mediaExtractionConfigurationHasBeenSet = true;
    m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value);
  }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  UpdateKnowledgeBaseRequest& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether email notifications are enabled for ingestion failures.</p>
   */
  inline bool GetIsEmailNotificationOptedForIngestionFailures() const { return m_isEmailNotificationOptedForIngestionFailures; }
  inline bool IsEmailNotificationOptedForIngestionFailuresHasBeenSet() const {
    return m_isEmailNotificationOptedForIngestionFailuresHasBeenSet;
  }
  inline void SetIsEmailNotificationOptedForIngestionFailures(bool value) {
    m_isEmailNotificationOptedForIngestionFailuresHasBeenSet = true;
    m_isEmailNotificationOptedForIngestionFailures = value;
  }
  inline UpdateKnowledgeBaseRequest& WithIsEmailNotificationOptedForIngestionFailures(bool value) {
    SetIsEmailNotificationOptedForIngestionFailures(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access control configuration for the knowledge base. If you don't specify
   * this parameter, the existing setting is retained.</p>
   */
  inline const AccessControlConfiguration& GetAccessControlConfiguration() const { return m_accessControlConfiguration; }
  inline bool AccessControlConfigurationHasBeenSet() const { return m_accessControlConfigurationHasBeenSet; }
  template <typename AccessControlConfigurationT = AccessControlConfiguration>
  void SetAccessControlConfiguration(AccessControlConfigurationT&& value) {
    m_accessControlConfigurationHasBeenSet = true;
    m_accessControlConfiguration = std::forward<AccessControlConfigurationT>(value);
  }
  template <typename AccessControlConfigurationT = AccessControlConfiguration>
  UpdateKnowledgeBaseRequest& WithAccessControlConfiguration(AccessControlConfigurationT&& value) {
    SetAccessControlConfiguration(std::forward<AccessControlConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_knowledgeBaseId;

  Aws::String m_name;

  Aws::String m_description;

  KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;

  MediaExtractionConfiguration m_mediaExtractionConfiguration;

  bool m_isEmailNotificationOptedForIngestionFailures{false};

  AccessControlConfiguration m_accessControlConfiguration;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_knowledgeBaseConfigurationHasBeenSet = false;
  bool m_mediaExtractionConfigurationHasBeenSet = false;
  bool m_isEmailNotificationOptedForIngestionFailuresHasBeenSet = false;
  bool m_accessControlConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
