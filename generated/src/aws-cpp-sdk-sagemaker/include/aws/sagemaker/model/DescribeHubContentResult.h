/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubContentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HubContentDependency.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeHubContentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeHubContentResult() = default;
    AWS_SAGEMAKER_API DescribeHubContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHubContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    DescribeHubContentResult& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
    template<typename HubContentArnT = Aws::String>
    void SetHubContentArn(HubContentArnT&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::forward<HubContentArnT>(value); }
    template<typename HubContentArnT = Aws::String>
    DescribeHubContentResult& WithHubContentArn(HubContentArnT&& value) { SetHubContentArn(std::forward<HubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content.</p>
     */
    inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
    template<typename HubContentVersionT = Aws::String>
    void SetHubContentVersion(HubContentVersionT&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::forward<HubContentVersionT>(value); }
    template<typename HubContentVersionT = Aws::String>
    DescribeHubContentResult& WithHubContentVersion(HubContentVersionT&& value) { SetHubContentVersion(std::forward<HubContentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline DescribeHubContentResult& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const { return m_documentSchemaVersion; }
    template<typename DocumentSchemaVersionT = Aws::String>
    void SetDocumentSchemaVersion(DocumentSchemaVersionT&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::forward<DocumentSchemaVersionT>(value); }
    template<typename DocumentSchemaVersionT = Aws::String>
    DescribeHubContentResult& WithDocumentSchemaVersion(DocumentSchemaVersionT&& value) { SetDocumentSchemaVersion(std::forward<DocumentSchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    DescribeHubContentResult& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline const Aws::String& GetHubArn() const { return m_hubArn; }
    template<typename HubArnT = Aws::String>
    void SetHubArn(HubArnT&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::forward<HubArnT>(value); }
    template<typename HubArnT = Aws::String>
    DescribeHubContentResult& WithHubArn(HubArnT&& value) { SetHubArn(std::forward<HubArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const { return m_hubContentDisplayName; }
    template<typename HubContentDisplayNameT = Aws::String>
    void SetHubContentDisplayName(HubContentDisplayNameT&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::forward<HubContentDisplayNameT>(value); }
    template<typename HubContentDisplayNameT = Aws::String>
    DescribeHubContentResult& WithHubContentDisplayName(HubContentDisplayNameT&& value) { SetHubContentDisplayName(std::forward<HubContentDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const { return m_hubContentDescription; }
    template<typename HubContentDescriptionT = Aws::String>
    void SetHubContentDescription(HubContentDescriptionT&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::forward<HubContentDescriptionT>(value); }
    template<typename HubContentDescriptionT = Aws::String>
    DescribeHubContentResult& WithHubContentDescription(HubContentDescriptionT&& value) { SetHubContentDescription(std::forward<HubContentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formating.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const { return m_hubContentMarkdown; }
    template<typename HubContentMarkdownT = Aws::String>
    void SetHubContentMarkdown(HubContentMarkdownT&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::forward<HubContentMarkdownT>(value); }
    template<typename HubContentMarkdownT = Aws::String>
    DescribeHubContentResult& WithHubContentMarkdown(HubContentMarkdownT&& value) { SetHubContentMarkdown(std::forward<HubContentMarkdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const { return m_hubContentDocument; }
    template<typename HubContentDocumentT = Aws::String>
    void SetHubContentDocument(HubContentDocumentT&& value) { m_hubContentDocumentHasBeenSet = true; m_hubContentDocument = std::forward<HubContentDocumentT>(value); }
    template<typename HubContentDocumentT = Aws::String>
    DescribeHubContentResult& WithHubContentDocument(HubContentDocumentT&& value) { SetHubContentDocument(std::forward<HubContentDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const { return m_sageMakerPublicHubContentArn; }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    void SetSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = std::forward<SageMakerPublicHubContentArnT>(value); }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    DescribeHubContentResult& WithSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { SetSageMakerPublicHubContentArn(std::forward<SageMakerPublicHubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum version of the hub content.</p>
     */
    inline const Aws::String& GetReferenceMinVersion() const { return m_referenceMinVersion; }
    template<typename ReferenceMinVersionT = Aws::String>
    void SetReferenceMinVersion(ReferenceMinVersionT&& value) { m_referenceMinVersionHasBeenSet = true; m_referenceMinVersion = std::forward<ReferenceMinVersionT>(value); }
    template<typename ReferenceMinVersionT = Aws::String>
    DescribeHubContentResult& WithReferenceMinVersion(ReferenceMinVersionT&& value) { SetReferenceMinVersion(std::forward<ReferenceMinVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support status of the hub content.</p>
     */
    inline HubContentSupportStatus GetSupportStatus() const { return m_supportStatus; }
    inline void SetSupportStatus(HubContentSupportStatus value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline DescribeHubContentResult& WithSupportStatus(HubContentSupportStatus value) { SetSupportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const { return m_hubContentSearchKeywords; }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::forward<HubContentSearchKeywordsT>(value); }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    DescribeHubContentResult& WithHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { SetHubContentSearchKeywords(std::forward<HubContentSearchKeywordsT>(value)); return *this;}
    template<typename HubContentSearchKeywordsT = Aws::String>
    DescribeHubContentResult& AddHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.emplace_back(std::forward<HubContentSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline const Aws::Vector<HubContentDependency>& GetHubContentDependencies() const { return m_hubContentDependencies; }
    template<typename HubContentDependenciesT = Aws::Vector<HubContentDependency>>
    void SetHubContentDependencies(HubContentDependenciesT&& value) { m_hubContentDependenciesHasBeenSet = true; m_hubContentDependencies = std::forward<HubContentDependenciesT>(value); }
    template<typename HubContentDependenciesT = Aws::Vector<HubContentDependency>>
    DescribeHubContentResult& WithHubContentDependencies(HubContentDependenciesT&& value) { SetHubContentDependencies(std::forward<HubContentDependenciesT>(value)); return *this;}
    template<typename HubContentDependenciesT = HubContentDependency>
    DescribeHubContentResult& AddHubContentDependencies(HubContentDependenciesT&& value) { m_hubContentDependenciesHasBeenSet = true; m_hubContentDependencies.emplace_back(std::forward<HubContentDependenciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub content.</p>
     */
    inline HubContentStatus GetHubContentStatus() const { return m_hubContentStatus; }
    inline void SetHubContentStatus(HubContentStatus value) { m_hubContentStatusHasBeenSet = true; m_hubContentStatus = value; }
    inline DescribeHubContentResult& WithHubContentStatus(HubContentStatus value) { SetHubContentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeHubContentResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeHubContentResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the hub content.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeHubContentResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHubContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentArn;
    bool m_hubContentArnHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_documentSchemaVersion;
    bool m_documentSchemaVersionHasBeenSet = false;

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet = false;

    Aws::String m_hubContentDisplayName;
    bool m_hubContentDisplayNameHasBeenSet = false;

    Aws::String m_hubContentDescription;
    bool m_hubContentDescriptionHasBeenSet = false;

    Aws::String m_hubContentMarkdown;
    bool m_hubContentMarkdownHasBeenSet = false;

    Aws::String m_hubContentDocument;
    bool m_hubContentDocumentHasBeenSet = false;

    Aws::String m_sageMakerPublicHubContentArn;
    bool m_sageMakerPublicHubContentArnHasBeenSet = false;

    Aws::String m_referenceMinVersion;
    bool m_referenceMinVersionHasBeenSet = false;

    HubContentSupportStatus m_supportStatus{HubContentSupportStatus::NOT_SET};
    bool m_supportStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    Aws::Vector<HubContentDependency> m_hubContentDependencies;
    bool m_hubContentDependenciesHasBeenSet = false;

    HubContentStatus m_hubContentStatus{HubContentStatus::NOT_SET};
    bool m_hubContentStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
