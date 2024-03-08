/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IndexCapacityConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/IndexStatistics.h>
#include <aws/qbusiness/model/IndexStatus.h>
#include <aws/qbusiness/model/DocumentAttributeConfiguration.h>
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
namespace QBusiness
{
namespace Model
{
  class GetIndexResult
  {
  public:
    AWS_QBUSINESS_API GetIndexResult();
    AWS_QBUSINESS_API GetIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline GetIndexResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline GetIndexResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application associated with the index.</p>
     */
    inline GetIndexResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The storage capacity units chosen for your Amazon Q index.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }

    /**
     * <p>The storage capacity units chosen for your Amazon Q index.</p>
     */
    inline void SetCapacityConfiguration(const IndexCapacityConfiguration& value) { m_capacityConfiguration = value; }

    /**
     * <p>The storage capacity units chosen for your Amazon Q index.</p>
     */
    inline void SetCapacityConfiguration(IndexCapacityConfiguration&& value) { m_capacityConfiguration = std::move(value); }

    /**
     * <p>The storage capacity units chosen for your Amazon Q index.</p>
     */
    inline GetIndexResult& WithCapacityConfiguration(const IndexCapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}

    /**
     * <p>The storage capacity units chosen for your Amazon Q index.</p>
     */
    inline GetIndexResult& WithCapacityConfiguration(IndexCapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q index was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q index was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q index was created.</p>
     */
    inline GetIndexResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q index was created.</p>
     */
    inline GetIndexResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline const Aws::Vector<DocumentAttributeConfiguration>& GetDocumentAttributeConfigurations() const{ return m_documentAttributeConfigurations; }

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline void SetDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { m_documentAttributeConfigurations = value; }

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline void SetDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { m_documentAttributeConfigurations = std::move(value); }

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline GetIndexResult& WithDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { SetDocumentAttributeConfigurations(value); return *this;}

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline GetIndexResult& WithDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { SetDocumentAttributeConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline GetIndexResult& AddDocumentAttributeConfigurations(const DocumentAttributeConfiguration& value) { m_documentAttributeConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline GetIndexResult& AddDocumentAttributeConfigurations(DocumentAttributeConfiguration&& value) { m_documentAttributeConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_error = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline GetIndexResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline GetIndexResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline GetIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline GetIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q index. </p>
     */
    inline GetIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q index.</p>
     */
    inline GetIndexResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline const IndexStatistics& GetIndexStatistics() const{ return m_indexStatistics; }

    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline void SetIndexStatistics(const IndexStatistics& value) { m_indexStatistics = value; }

    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline void SetIndexStatistics(IndexStatistics&& value) { m_indexStatistics = std::move(value); }

    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline GetIndexResult& WithIndexStatistics(const IndexStatistics& value) { SetIndexStatistics(value); return *this;}

    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline GetIndexResult& WithIndexStatistics(IndexStatistics&& value) { SetIndexStatistics(std::move(value)); return *this;}


    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline const IndexStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline void SetStatus(const IndexStatus& value) { m_status = value; }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline void SetStatus(IndexStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline GetIndexResult& WithStatus(const IndexStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline GetIndexResult& WithStatus(IndexStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the Amazon Q index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the Amazon Q index was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the Amazon Q index was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the Amazon Q index was last updated.</p>
     */
    inline GetIndexResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the Amazon Q index was last updated.</p>
     */
    inline GetIndexResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationId;

    IndexCapacityConfiguration m_capacityConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_displayName;

    Aws::Vector<DocumentAttributeConfiguration> m_documentAttributeConfigurations;

    ErrorDetail m_error;

    Aws::String m_indexArn;

    Aws::String m_indexId;

    IndexStatistics m_indexStatistics;

    IndexStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
