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
    AWS_SAGEMAKER_API DescribeHubContentResult();
    AWS_SAGEMAKER_API DescribeHubContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHubContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentName.assign(value); }
    inline DescribeHubContentResult& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline DescribeHubContentResult& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArn = value; }
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArn = std::move(value); }
    inline void SetHubContentArn(const char* value) { m_hubContentArn.assign(value); }
    inline DescribeHubContentResult& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}
    inline DescribeHubContentResult& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersion = value; }
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersion = std::move(value); }
    inline void SetHubContentVersion(const char* value) { m_hubContentVersion.assign(value); }
    inline DescribeHubContentResult& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}
    inline DescribeHubContentResult& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentType = std::move(value); }
    inline DescribeHubContentResult& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline DescribeHubContentResult& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const{ return m_documentSchemaVersion; }
    inline void SetDocumentSchemaVersion(const Aws::String& value) { m_documentSchemaVersion = value; }
    inline void SetDocumentSchemaVersion(Aws::String&& value) { m_documentSchemaVersion = std::move(value); }
    inline void SetDocumentSchemaVersion(const char* value) { m_documentSchemaVersion.assign(value); }
    inline DescribeHubContentResult& WithDocumentSchemaVersion(const Aws::String& value) { SetDocumentSchemaVersion(value); return *this;}
    inline DescribeHubContentResult& WithDocumentSchemaVersion(Aws::String&& value) { SetDocumentSchemaVersion(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithDocumentSchemaVersion(const char* value) { SetDocumentSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline void SetHubName(const Aws::String& value) { m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubName.assign(value); }
    inline DescribeHubContentResult& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline DescribeHubContentResult& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }
    inline DescribeHubContentResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}
    inline DescribeHubContentResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const{ return m_hubContentDisplayName; }
    inline void SetHubContentDisplayName(const Aws::String& value) { m_hubContentDisplayName = value; }
    inline void SetHubContentDisplayName(Aws::String&& value) { m_hubContentDisplayName = std::move(value); }
    inline void SetHubContentDisplayName(const char* value) { m_hubContentDisplayName.assign(value); }
    inline DescribeHubContentResult& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}
    inline DescribeHubContentResult& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescription = value; }
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescription = std::move(value); }
    inline void SetHubContentDescription(const char* value) { m_hubContentDescription.assign(value); }
    inline DescribeHubContentResult& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}
    inline DescribeHubContentResult& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formating.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const{ return m_hubContentMarkdown; }
    inline void SetHubContentMarkdown(const Aws::String& value) { m_hubContentMarkdown = value; }
    inline void SetHubContentMarkdown(Aws::String&& value) { m_hubContentMarkdown = std::move(value); }
    inline void SetHubContentMarkdown(const char* value) { m_hubContentMarkdown.assign(value); }
    inline DescribeHubContentResult& WithHubContentMarkdown(const Aws::String& value) { SetHubContentMarkdown(value); return *this;}
    inline DescribeHubContentResult& WithHubContentMarkdown(Aws::String&& value) { SetHubContentMarkdown(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentMarkdown(const char* value) { SetHubContentMarkdown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const{ return m_hubContentDocument; }
    inline void SetHubContentDocument(const Aws::String& value) { m_hubContentDocument = value; }
    inline void SetHubContentDocument(Aws::String&& value) { m_hubContentDocument = std::move(value); }
    inline void SetHubContentDocument(const char* value) { m_hubContentDocument.assign(value); }
    inline DescribeHubContentResult& WithHubContentDocument(const Aws::String& value) { SetHubContentDocument(value); return *this;}
    inline DescribeHubContentResult& WithHubContentDocument(Aws::String&& value) { SetHubContentDocument(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithHubContentDocument(const char* value) { SetHubContentDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const{ return m_sageMakerPublicHubContentArn; }
    inline void SetSageMakerPublicHubContentArn(const Aws::String& value) { m_sageMakerPublicHubContentArn = value; }
    inline void SetSageMakerPublicHubContentArn(Aws::String&& value) { m_sageMakerPublicHubContentArn = std::move(value); }
    inline void SetSageMakerPublicHubContentArn(const char* value) { m_sageMakerPublicHubContentArn.assign(value); }
    inline DescribeHubContentResult& WithSageMakerPublicHubContentArn(const Aws::String& value) { SetSageMakerPublicHubContentArn(value); return *this;}
    inline DescribeHubContentResult& WithSageMakerPublicHubContentArn(Aws::String&& value) { SetSageMakerPublicHubContentArn(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithSageMakerPublicHubContentArn(const char* value) { SetSageMakerPublicHubContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum version of the hub content.</p>
     */
    inline const Aws::String& GetReferenceMinVersion() const{ return m_referenceMinVersion; }
    inline void SetReferenceMinVersion(const Aws::String& value) { m_referenceMinVersion = value; }
    inline void SetReferenceMinVersion(Aws::String&& value) { m_referenceMinVersion = std::move(value); }
    inline void SetReferenceMinVersion(const char* value) { m_referenceMinVersion.assign(value); }
    inline DescribeHubContentResult& WithReferenceMinVersion(const Aws::String& value) { SetReferenceMinVersion(value); return *this;}
    inline DescribeHubContentResult& WithReferenceMinVersion(Aws::String&& value) { SetReferenceMinVersion(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithReferenceMinVersion(const char* value) { SetReferenceMinVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support status of the hub content.</p>
     */
    inline const HubContentSupportStatus& GetSupportStatus() const{ return m_supportStatus; }
    inline void SetSupportStatus(const HubContentSupportStatus& value) { m_supportStatus = value; }
    inline void SetSupportStatus(HubContentSupportStatus&& value) { m_supportStatus = std::move(value); }
    inline DescribeHubContentResult& WithSupportStatus(const HubContentSupportStatus& value) { SetSupportStatus(value); return *this;}
    inline DescribeHubContentResult& WithSupportStatus(HubContentSupportStatus&& value) { SetSupportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywords = value; }
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywords = std::move(value); }
    inline DescribeHubContentResult& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}
    inline DescribeHubContentResult& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}
    inline DescribeHubContentResult& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywords.push_back(value); return *this; }
    inline DescribeHubContentResult& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }
    inline DescribeHubContentResult& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline const Aws::Vector<HubContentDependency>& GetHubContentDependencies() const{ return m_hubContentDependencies; }
    inline void SetHubContentDependencies(const Aws::Vector<HubContentDependency>& value) { m_hubContentDependencies = value; }
    inline void SetHubContentDependencies(Aws::Vector<HubContentDependency>&& value) { m_hubContentDependencies = std::move(value); }
    inline DescribeHubContentResult& WithHubContentDependencies(const Aws::Vector<HubContentDependency>& value) { SetHubContentDependencies(value); return *this;}
    inline DescribeHubContentResult& WithHubContentDependencies(Aws::Vector<HubContentDependency>&& value) { SetHubContentDependencies(std::move(value)); return *this;}
    inline DescribeHubContentResult& AddHubContentDependencies(const HubContentDependency& value) { m_hubContentDependencies.push_back(value); return *this; }
    inline DescribeHubContentResult& AddHubContentDependencies(HubContentDependency&& value) { m_hubContentDependencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub content.</p>
     */
    inline const HubContentStatus& GetHubContentStatus() const{ return m_hubContentStatus; }
    inline void SetHubContentStatus(const HubContentStatus& value) { m_hubContentStatus = value; }
    inline void SetHubContentStatus(HubContentStatus&& value) { m_hubContentStatus = std::move(value); }
    inline DescribeHubContentResult& WithHubContentStatus(const HubContentStatus& value) { SetHubContentStatus(value); return *this;}
    inline DescribeHubContentResult& WithHubContentStatus(HubContentStatus&& value) { SetHubContentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeHubContentResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeHubContentResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeHubContentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeHubContentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHubContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHubContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHubContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hubContentName;

    Aws::String m_hubContentArn;

    Aws::String m_hubContentVersion;

    HubContentType m_hubContentType;

    Aws::String m_documentSchemaVersion;

    Aws::String m_hubName;

    Aws::String m_hubArn;

    Aws::String m_hubContentDisplayName;

    Aws::String m_hubContentDescription;

    Aws::String m_hubContentMarkdown;

    Aws::String m_hubContentDocument;

    Aws::String m_sageMakerPublicHubContentArn;

    Aws::String m_referenceMinVersion;

    HubContentSupportStatus m_supportStatus;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;

    Aws::Vector<HubContentDependency> m_hubContentDependencies;

    HubContentStatus m_hubContentStatus;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
