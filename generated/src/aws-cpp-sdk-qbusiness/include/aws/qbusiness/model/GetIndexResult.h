/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IndexStatus.h>
#include <aws/qbusiness/model/IndexType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/IndexCapacityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/qbusiness/model/IndexStatistics.h>
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


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application associated with the
     * index.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetIndexResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetIndexResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetIndexResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }
    inline GetIndexResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline GetIndexResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline GetIndexResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetIndexResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetIndexResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetIndexResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q Business index. </p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }
    inline GetIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}
    inline GetIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}
    inline GetIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline const IndexStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IndexStatus& value) { m_status = value; }
    inline void SetStatus(IndexStatus&& value) { m_status = std::move(value); }
    inline GetIndexResult& WithStatus(const IndexStatus& value) { SetStatus(value); return *this;}
    inline GetIndexResult& WithStatus(IndexStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of index attached to your Amazon Q Business application.</p>
     */
    inline const IndexType& GetType() const{ return m_type; }
    inline void SetType(const IndexType& value) { m_type = value; }
    inline void SetType(IndexType&& value) { m_type = std::move(value); }
    inline GetIndexResult& WithType(const IndexType& value) { SetType(value); return *this;}
    inline GetIndexResult& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetIndexResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetIndexResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetIndexResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetIndexResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetIndexResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetIndexResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetIndexResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity units chosen for your Amazon Q Business index.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }
    inline void SetCapacityConfiguration(const IndexCapacityConfiguration& value) { m_capacityConfiguration = value; }
    inline void SetCapacityConfiguration(IndexCapacityConfiguration&& value) { m_capacityConfiguration = std::move(value); }
    inline GetIndexResult& WithCapacityConfiguration(const IndexCapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}
    inline GetIndexResult& WithCapacityConfiguration(IndexCapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline const Aws::Vector<DocumentAttributeConfiguration>& GetDocumentAttributeConfigurations() const{ return m_documentAttributeConfigurations; }
    inline void SetDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { m_documentAttributeConfigurations = value; }
    inline void SetDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { m_documentAttributeConfigurations = std::move(value); }
    inline GetIndexResult& WithDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { SetDocumentAttributeConfigurations(value); return *this;}
    inline GetIndexResult& WithDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { SetDocumentAttributeConfigurations(std::move(value)); return *this;}
    inline GetIndexResult& AddDocumentAttributeConfigurations(const DocumentAttributeConfiguration& value) { m_documentAttributeConfigurations.push_back(value); return *this; }
    inline GetIndexResult& AddDocumentAttributeConfigurations(DocumentAttributeConfiguration&& value) { m_documentAttributeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline void SetError(const ErrorDetail& value) { m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_error = std::move(value); }
    inline GetIndexResult& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline GetIndexResult& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline const IndexStatistics& GetIndexStatistics() const{ return m_indexStatistics; }
    inline void SetIndexStatistics(const IndexStatistics& value) { m_indexStatistics = value; }
    inline void SetIndexStatistics(IndexStatistics&& value) { m_indexStatistics = std::move(value); }
    inline GetIndexResult& WithIndexStatistics(const IndexStatistics& value) { SetIndexStatistics(value); return *this;}
    inline GetIndexResult& WithIndexStatistics(IndexStatistics&& value) { SetIndexStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_indexId;

    Aws::String m_displayName;

    Aws::String m_indexArn;

    IndexStatus m_status;

    IndexType m_type;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    IndexCapacityConfiguration m_capacityConfiguration;

    Aws::Vector<DocumentAttributeConfiguration> m_documentAttributeConfigurations;

    ErrorDetail m_error;

    IndexStatistics m_indexStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
