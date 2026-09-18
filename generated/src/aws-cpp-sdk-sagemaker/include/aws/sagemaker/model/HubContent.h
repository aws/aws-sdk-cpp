/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/HubContentDependency.h>
#include <aws/sagemaker/model/HubContentStatus.h>
#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Contains information about a hub content resource, including its name,
 * version, type, associated documents, dependencies, and status, as returned by a
 * search result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubContent">AWS
 * API Reference</a></p>
 */
class HubContent {
 public:
  AWS_SAGEMAKER_API HubContent() = default;
  AWS_SAGEMAKER_API HubContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API HubContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the hub content.</p>
   */
  inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
  inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
  template <typename HubContentNameT = Aws::String>
  void SetHubContentName(HubContentNameT&& value) {
    m_hubContentNameHasBeenSet = true;
    m_hubContentName = std::forward<HubContentNameT>(value);
  }
  template <typename HubContentNameT = Aws::String>
  HubContent& WithHubContentName(HubContentNameT&& value) {
    SetHubContentName(std::forward<HubContentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the hub content.</p>
   */
  inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
  inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
  template <typename HubContentArnT = Aws::String>
  void SetHubContentArn(HubContentArnT&& value) {
    m_hubContentArnHasBeenSet = true;
    m_hubContentArn = std::forward<HubContentArnT>(value);
  }
  template <typename HubContentArnT = Aws::String>
  HubContent& WithHubContentArn(HubContentArnT&& value) {
    SetHubContentArn(std::forward<HubContentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the hub content.</p>
   */
  inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
  inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
  template <typename HubContentVersionT = Aws::String>
  void SetHubContentVersion(HubContentVersionT&& value) {
    m_hubContentVersionHasBeenSet = true;
    m_hubContentVersion = std::forward<HubContentVersionT>(value);
  }
  template <typename HubContentVersionT = Aws::String>
  HubContent& WithHubContentVersion(HubContentVersionT&& value) {
    SetHubContentVersion(std::forward<HubContentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of hub content.</p>
   */
  inline HubContentType GetHubContentType() const { return m_hubContentType; }
  inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
  inline void SetHubContentType(HubContentType value) {
    m_hubContentTypeHasBeenSet = true;
    m_hubContentType = value;
  }
  inline HubContent& WithHubContentType(HubContentType value) {
    SetHubContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The document schema version for the hub content.</p>
   */
  inline const Aws::String& GetDocumentSchemaVersion() const { return m_documentSchemaVersion; }
  inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }
  template <typename DocumentSchemaVersionT = Aws::String>
  void SetDocumentSchemaVersion(DocumentSchemaVersionT&& value) {
    m_documentSchemaVersionHasBeenSet = true;
    m_documentSchemaVersion = std::forward<DocumentSchemaVersionT>(value);
  }
  template <typename DocumentSchemaVersionT = Aws::String>
  HubContent& WithDocumentSchemaVersion(DocumentSchemaVersionT&& value) {
    SetDocumentSchemaVersion(std::forward<DocumentSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the hub that contains the content.</p>
   */
  inline const Aws::String& GetHubName() const { return m_hubName; }
  inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
  template <typename HubNameT = Aws::String>
  void SetHubName(HubNameT&& value) {
    m_hubNameHasBeenSet = true;
    m_hubName = std::forward<HubNameT>(value);
  }
  template <typename HubNameT = Aws::String>
  HubContent& WithHubName(HubNameT&& value) {
    SetHubName(std::forward<HubNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the hub that contains the content.</p>
   */
  inline const Aws::String& GetHubArn() const { return m_hubArn; }
  inline bool HubArnHasBeenSet() const { return m_hubArnHasBeenSet; }
  template <typename HubArnT = Aws::String>
  void SetHubArn(HubArnT&& value) {
    m_hubArnHasBeenSet = true;
    m_hubArn = std::forward<HubArnT>(value);
  }
  template <typename HubArnT = Aws::String>
  HubContent& WithHubArn(HubArnT&& value) {
    SetHubArn(std::forward<HubArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the hub content.</p>
   */
  inline const Aws::String& GetHubContentDisplayName() const { return m_hubContentDisplayName; }
  inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }
  template <typename HubContentDisplayNameT = Aws::String>
  void SetHubContentDisplayName(HubContentDisplayNameT&& value) {
    m_hubContentDisplayNameHasBeenSet = true;
    m_hubContentDisplayName = std::forward<HubContentDisplayNameT>(value);
  }
  template <typename HubContentDisplayNameT = Aws::String>
  HubContent& WithHubContentDisplayName(HubContentDisplayNameT&& value) {
    SetHubContentDisplayName(std::forward<HubContentDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the hub content.</p>
   */
  inline const Aws::String& GetHubContentDescription() const { return m_hubContentDescription; }
  inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
  template <typename HubContentDescriptionT = Aws::String>
  void SetHubContentDescription(HubContentDescriptionT&& value) {
    m_hubContentDescriptionHasBeenSet = true;
    m_hubContentDescription = std::forward<HubContentDescriptionT>(value);
  }
  template <typename HubContentDescriptionT = Aws::String>
  HubContent& WithHubContentDescription(HubContentDescriptionT&& value) {
    SetHubContentDescription(std::forward<HubContentDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string that provides a description of the hub content. This string can
   * include links, tables, and standard markdown formatting.</p>
   */
  inline const Aws::String& GetHubContentMarkdown() const { return m_hubContentMarkdown; }
  inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }
  template <typename HubContentMarkdownT = Aws::String>
  void SetHubContentMarkdown(HubContentMarkdownT&& value) {
    m_hubContentMarkdownHasBeenSet = true;
    m_hubContentMarkdown = std::forward<HubContentMarkdownT>(value);
  }
  template <typename HubContentMarkdownT = Aws::String>
  HubContent& WithHubContentMarkdown(HubContentMarkdownT&& value) {
    SetHubContentMarkdown(std::forward<HubContentMarkdownT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hub content document that describes information about the hub content
   * such as type, associated containers, scripts, and more.</p>
   */
  inline const Aws::String& GetHubContentDocument() const { return m_hubContentDocument; }
  inline bool HubContentDocumentHasBeenSet() const { return m_hubContentDocumentHasBeenSet; }
  template <typename HubContentDocumentT = Aws::String>
  void SetHubContentDocument(HubContentDocumentT&& value) {
    m_hubContentDocumentHasBeenSet = true;
    m_hubContentDocument = std::forward<HubContentDocumentT>(value);
  }
  template <typename HubContentDocumentT = Aws::String>
  HubContent& WithHubContentDocument(HubContentDocumentT&& value) {
    SetHubContentDocument(std::forward<HubContentDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the public hub content.</p>
   */
  inline const Aws::String& GetSageMakerPublicHubContentArn() const { return m_sageMakerPublicHubContentArn; }
  inline bool SageMakerPublicHubContentArnHasBeenSet() const { return m_sageMakerPublicHubContentArnHasBeenSet; }
  template <typename SageMakerPublicHubContentArnT = Aws::String>
  void SetSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) {
    m_sageMakerPublicHubContentArnHasBeenSet = true;
    m_sageMakerPublicHubContentArn = std::forward<SageMakerPublicHubContentArnT>(value);
  }
  template <typename SageMakerPublicHubContentArnT = Aws::String>
  HubContent& WithSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) {
    SetSageMakerPublicHubContentArn(std::forward<SageMakerPublicHubContentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum version of the hub content.</p>
   */
  inline const Aws::String& GetReferenceMinVersion() const { return m_referenceMinVersion; }
  inline bool ReferenceMinVersionHasBeenSet() const { return m_referenceMinVersionHasBeenSet; }
  template <typename ReferenceMinVersionT = Aws::String>
  void SetReferenceMinVersion(ReferenceMinVersionT&& value) {
    m_referenceMinVersionHasBeenSet = true;
    m_referenceMinVersion = std::forward<ReferenceMinVersionT>(value);
  }
  template <typename ReferenceMinVersionT = Aws::String>
  HubContent& WithReferenceMinVersion(ReferenceMinVersionT&& value) {
    SetReferenceMinVersion(std::forward<ReferenceMinVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The support status of the hub content.</p>
   */
  inline HubContentSupportStatus GetSupportStatus() const { return m_supportStatus; }
  inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
  inline void SetSupportStatus(HubContentSupportStatus value) {
    m_supportStatusHasBeenSet = true;
    m_supportStatus = value;
  }
  inline HubContent& WithSupportStatus(HubContentSupportStatus value) {
    SetSupportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The searchable keywords for the hub content.</p>
   */
  inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const { return m_hubContentSearchKeywords; }
  inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
  template <typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
  void SetHubContentSearchKeywords(HubContentSearchKeywordsT&& value) {
    m_hubContentSearchKeywordsHasBeenSet = true;
    m_hubContentSearchKeywords = std::forward<HubContentSearchKeywordsT>(value);
  }
  template <typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
  HubContent& WithHubContentSearchKeywords(HubContentSearchKeywordsT&& value) {
    SetHubContentSearchKeywords(std::forward<HubContentSearchKeywordsT>(value));
    return *this;
  }
  template <typename HubContentSearchKeywordsT = Aws::String>
  HubContent& AddHubContentSearchKeywords(HubContentSearchKeywordsT&& value) {
    m_hubContentSearchKeywordsHasBeenSet = true;
    m_hubContentSearchKeywords.emplace_back(std::forward<HubContentSearchKeywordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of any dependencies that the hub content has, such as scripts,
   * model artifacts, datasets, or notebooks.</p>
   */
  inline const Aws::Vector<HubContentDependency>& GetHubContentDependencies() const { return m_hubContentDependencies; }
  inline bool HubContentDependenciesHasBeenSet() const { return m_hubContentDependenciesHasBeenSet; }
  template <typename HubContentDependenciesT = Aws::Vector<HubContentDependency>>
  void SetHubContentDependencies(HubContentDependenciesT&& value) {
    m_hubContentDependenciesHasBeenSet = true;
    m_hubContentDependencies = std::forward<HubContentDependenciesT>(value);
  }
  template <typename HubContentDependenciesT = Aws::Vector<HubContentDependency>>
  HubContent& WithHubContentDependencies(HubContentDependenciesT&& value) {
    SetHubContentDependencies(std::forward<HubContentDependenciesT>(value));
    return *this;
  }
  template <typename HubContentDependenciesT = HubContentDependency>
  HubContent& AddHubContentDependencies(HubContentDependenciesT&& value) {
    m_hubContentDependenciesHasBeenSet = true;
    m_hubContentDependencies.emplace_back(std::forward<HubContentDependenciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the hub content.</p>
   */
  inline HubContentStatus GetHubContentStatus() const { return m_hubContentStatus; }
  inline bool HubContentStatusHasBeenSet() const { return m_hubContentStatusHasBeenSet; }
  inline void SetHubContentStatus(HubContentStatus value) {
    m_hubContentStatusHasBeenSet = true;
    m_hubContentStatus = value;
  }
  inline HubContent& WithHubContentStatus(HubContentStatus value) {
    SetHubContentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure reason if importing hub content failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  HubContent& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that hub content was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  HubContent& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last modified time of the hub content.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  HubContent& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags associated with the hub content.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  HubContent& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  HubContent& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hubContentName;

  Aws::String m_hubContentArn;

  Aws::String m_hubContentVersion;

  HubContentType m_hubContentType{HubContentType::NOT_SET};

  Aws::String m_documentSchemaVersion;

  Aws::String m_hubName;

  Aws::String m_hubArn;

  Aws::String m_hubContentDisplayName;

  Aws::String m_hubContentDescription;

  Aws::String m_hubContentMarkdown;

  Aws::String m_hubContentDocument;

  Aws::String m_sageMakerPublicHubContentArn;

  Aws::String m_referenceMinVersion;

  HubContentSupportStatus m_supportStatus{HubContentSupportStatus::NOT_SET};

  Aws::Vector<Aws::String> m_hubContentSearchKeywords;

  Aws::Vector<HubContentDependency> m_hubContentDependencies;

  HubContentStatus m_hubContentStatus{HubContentStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Vector<Tag> m_tags;
  bool m_hubContentNameHasBeenSet = false;
  bool m_hubContentArnHasBeenSet = false;
  bool m_hubContentVersionHasBeenSet = false;
  bool m_hubContentTypeHasBeenSet = false;
  bool m_documentSchemaVersionHasBeenSet = false;
  bool m_hubNameHasBeenSet = false;
  bool m_hubArnHasBeenSet = false;
  bool m_hubContentDisplayNameHasBeenSet = false;
  bool m_hubContentDescriptionHasBeenSet = false;
  bool m_hubContentMarkdownHasBeenSet = false;
  bool m_hubContentDocumentHasBeenSet = false;
  bool m_sageMakerPublicHubContentArnHasBeenSet = false;
  bool m_referenceMinVersionHasBeenSet = false;
  bool m_supportStatusHasBeenSet = false;
  bool m_hubContentSearchKeywordsHasBeenSet = false;
  bool m_hubContentDependenciesHasBeenSet = false;
  bool m_hubContentStatusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
