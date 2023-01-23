/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
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


    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }

    /**
     * <p>The name of the hub content.</p>
     */
    inline void SetHubContentName(const Aws::String& value) { m_hubContentName = value; }

    /**
     * <p>The name of the hub content.</p>
     */
    inline void SetHubContentName(Aws::String&& value) { m_hubContentName = std::move(value); }

    /**
     * <p>The name of the hub content.</p>
     */
    inline void SetHubContentName(const char* value) { m_hubContentName.assign(value); }

    /**
     * <p>The name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}

    /**
     * <p>The name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline void SetHubContentArn(const char* value) { m_hubContentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}


    /**
     * <p>The version of the hub content.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }

    /**
     * <p>The version of the hub content.</p>
     */
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersion = value; }

    /**
     * <p>The version of the hub content.</p>
     */
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersion = std::move(value); }

    /**
     * <p>The version of the hub content.</p>
     */
    inline void SetHubContentVersion(const char* value) { m_hubContentVersion.assign(value); }

    /**
     * <p>The version of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}

    /**
     * <p>The version of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}


    /**
     * <p>The type of hub content.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }

    /**
     * <p>The type of hub content.</p>
     */
    inline void SetHubContentType(const HubContentType& value) { m_hubContentType = value; }

    /**
     * <p>The type of hub content.</p>
     */
    inline void SetHubContentType(HubContentType&& value) { m_hubContentType = std::move(value); }

    /**
     * <p>The type of hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}

    /**
     * <p>The type of hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}


    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const{ return m_documentSchemaVersion; }

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline void SetDocumentSchemaVersion(const Aws::String& value) { m_documentSchemaVersion = value; }

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline void SetDocumentSchemaVersion(Aws::String&& value) { m_documentSchemaVersion = std::move(value); }

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline void SetDocumentSchemaVersion(const char* value) { m_documentSchemaVersion.assign(value); }

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline DescribeHubContentResult& WithDocumentSchemaVersion(const Aws::String& value) { SetDocumentSchemaVersion(value); return *this;}

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline DescribeHubContentResult& WithDocumentSchemaVersion(Aws::String&& value) { SetDocumentSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The document schema version for the hub content.</p>
     */
    inline DescribeHubContentResult& WithDocumentSchemaVersion(const char* value) { SetDocumentSchemaVersion(value); return *this;}


    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubName = value; }

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubName = std::move(value); }

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline void SetHubName(const char* value) { m_hubName.assign(value); }

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline DescribeHubContentResult& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline DescribeHubContentResult& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub that contains the content.</p>
     */
    inline DescribeHubContentResult& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline DescribeHubContentResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline DescribeHubContentResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub that contains the content. </p>
     */
    inline DescribeHubContentResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}


    /**
     * <p>The display name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const{ return m_hubContentDisplayName; }

    /**
     * <p>The display name of the hub content.</p>
     */
    inline void SetHubContentDisplayName(const Aws::String& value) { m_hubContentDisplayName = value; }

    /**
     * <p>The display name of the hub content.</p>
     */
    inline void SetHubContentDisplayName(Aws::String&& value) { m_hubContentDisplayName = std::move(value); }

    /**
     * <p>The display name of the hub content.</p>
     */
    inline void SetHubContentDisplayName(const char* value) { m_hubContentDisplayName.assign(value); }

    /**
     * <p>The display name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}

    /**
     * <p>The display name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}


    /**
     * <p>A description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }

    /**
     * <p>A description of the hub content.</p>
     */
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescription = value; }

    /**
     * <p>A description of the hub content.</p>
     */
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescription = std::move(value); }

    /**
     * <p>A description of the hub content.</p>
     */
    inline void SetHubContentDescription(const char* value) { m_hubContentDescription.assign(value); }

    /**
     * <p>A description of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}

    /**
     * <p>A description of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}


    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const{ return m_hubContentMarkdown; }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(const Aws::String& value) { m_hubContentMarkdown = value; }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(Aws::String&& value) { m_hubContentMarkdown = std::move(value); }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline void SetHubContentMarkdown(const char* value) { m_hubContentMarkdown.assign(value); }

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline DescribeHubContentResult& WithHubContentMarkdown(const Aws::String& value) { SetHubContentMarkdown(value); return *this;}

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline DescribeHubContentResult& WithHubContentMarkdown(Aws::String&& value) { SetHubContentMarkdown(std::move(value)); return *this;}

    /**
     * <p>Markdown files associated with the hub content to import.</p>
     */
    inline DescribeHubContentResult& WithHubContentMarkdown(const char* value) { SetHubContentMarkdown(value); return *this;}


    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline const Aws::String& GetHubContentDocument() const{ return m_hubContentDocument; }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(const Aws::String& value) { m_hubContentDocument = value; }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(Aws::String&& value) { m_hubContentDocument = std::move(value); }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline void SetHubContentDocument(const char* value) { m_hubContentDocument.assign(value); }

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline DescribeHubContentResult& WithHubContentDocument(const Aws::String& value) { SetHubContentDocument(value); return *this;}

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline DescribeHubContentResult& WithHubContentDocument(Aws::String&& value) { SetHubContentDocument(std::move(value)); return *this;}

    /**
     * <p>The hub content document that describes information about the hub content
     * such as type, associated containers, scripts, and more.</p>
     */
    inline DescribeHubContentResult& WithHubContentDocument(const char* value) { SetHubContentDocument(value); return *this;}


    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywords = value; }

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywords = std::move(value); }

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline DescribeHubContentResult& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywords.push_back(value); return *this; }

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline DescribeHubContentResult& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline DescribeHubContentResult& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywords.push_back(value); return *this; }


    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline const Aws::Vector<HubContentDependency>& GetHubContentDependencies() const{ return m_hubContentDependencies; }

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline void SetHubContentDependencies(const Aws::Vector<HubContentDependency>& value) { m_hubContentDependencies = value; }

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline void SetHubContentDependencies(Aws::Vector<HubContentDependency>&& value) { m_hubContentDependencies = std::move(value); }

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline DescribeHubContentResult& WithHubContentDependencies(const Aws::Vector<HubContentDependency>& value) { SetHubContentDependencies(value); return *this;}

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline DescribeHubContentResult& WithHubContentDependencies(Aws::Vector<HubContentDependency>&& value) { SetHubContentDependencies(std::move(value)); return *this;}

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline DescribeHubContentResult& AddHubContentDependencies(const HubContentDependency& value) { m_hubContentDependencies.push_back(value); return *this; }

    /**
     * <p>The location of any dependencies that the hub content has, such as scripts,
     * model artifacts, datasets, or notebooks.</p>
     */
    inline DescribeHubContentResult& AddHubContentDependencies(HubContentDependency&& value) { m_hubContentDependencies.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the hub content.</p>
     */
    inline const HubContentStatus& GetHubContentStatus() const{ return m_hubContentStatus; }

    /**
     * <p>The status of the hub content.</p>
     */
    inline void SetHubContentStatus(const HubContentStatus& value) { m_hubContentStatus = value; }

    /**
     * <p>The status of the hub content.</p>
     */
    inline void SetHubContentStatus(HubContentStatus&& value) { m_hubContentStatus = std::move(value); }

    /**
     * <p>The status of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentStatus(const HubContentStatus& value) { SetHubContentStatus(value); return *this;}

    /**
     * <p>The status of the hub content.</p>
     */
    inline DescribeHubContentResult& WithHubContentStatus(HubContentStatus&& value) { SetHubContentStatus(std::move(value)); return *this;}


    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubContentResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubContentResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubContentResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline DescribeHubContentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that hub content was created.</p>
     */
    inline DescribeHubContentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

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

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;

    Aws::Vector<HubContentDependency> m_hubContentDependencies;

    HubContentStatus m_hubContentStatus;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
