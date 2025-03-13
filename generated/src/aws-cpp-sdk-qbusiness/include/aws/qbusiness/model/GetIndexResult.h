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
    AWS_QBUSINESS_API GetIndexResult() = default;
    AWS_QBUSINESS_API GetIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application associated with the
     * index.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetIndexResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    GetIndexResult& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetIndexResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon Q Business index. </p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    GetIndexResult& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the index. When the value is <code>ACTIVE</code>, the
     * index is ready for use. If the <code>Status</code> field value is
     * <code>FAILED</code>, the <code>ErrorMessage</code> field contains a message that
     * explains why.</p>
     */
    inline IndexStatus GetStatus() const { return m_status; }
    inline void SetStatus(IndexStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetIndexResult& WithStatus(IndexStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of index attached to your Amazon Q Business application.</p>
     */
    inline IndexType GetType() const { return m_type; }
    inline void SetType(IndexType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetIndexResult& WithType(IndexType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetIndexResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetIndexResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetIndexResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity units chosen for your Amazon Q Business index.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const { return m_capacityConfiguration; }
    template<typename CapacityConfigurationT = IndexCapacityConfiguration>
    void SetCapacityConfiguration(CapacityConfigurationT&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::forward<CapacityConfigurationT>(value); }
    template<typename CapacityConfigurationT = IndexCapacityConfiguration>
    GetIndexResult& WithCapacityConfiguration(CapacityConfigurationT&& value) { SetCapacityConfiguration(std::forward<CapacityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for document attributes or metadata. Document
     * metadata are fields associated with your documents. For example, the company
     * department name associated with each document. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline const Aws::Vector<DocumentAttributeConfiguration>& GetDocumentAttributeConfigurations() const { return m_documentAttributeConfigurations; }
    template<typename DocumentAttributeConfigurationsT = Aws::Vector<DocumentAttributeConfiguration>>
    void SetDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations = std::forward<DocumentAttributeConfigurationsT>(value); }
    template<typename DocumentAttributeConfigurationsT = Aws::Vector<DocumentAttributeConfiguration>>
    GetIndexResult& WithDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { SetDocumentAttributeConfigurations(std::forward<DocumentAttributeConfigurationsT>(value)); return *this;}
    template<typename DocumentAttributeConfigurationsT = DocumentAttributeConfiguration>
    GetIndexResult& AddDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations.emplace_back(std::forward<DocumentAttributeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    GetIndexResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the number of documents indexed.</p>
     */
    inline const IndexStatistics& GetIndexStatistics() const { return m_indexStatistics; }
    template<typename IndexStatisticsT = IndexStatistics>
    void SetIndexStatistics(IndexStatisticsT&& value) { m_indexStatisticsHasBeenSet = true; m_indexStatistics = std::forward<IndexStatisticsT>(value); }
    template<typename IndexStatisticsT = IndexStatistics>
    GetIndexResult& WithIndexStatistics(IndexStatisticsT&& value) { SetIndexStatistics(std::forward<IndexStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIndexResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    IndexStatus m_status{IndexStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IndexType m_type{IndexType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    IndexCapacityConfiguration m_capacityConfiguration;
    bool m_capacityConfigurationHasBeenSet = false;

    Aws::Vector<DocumentAttributeConfiguration> m_documentAttributeConfigurations;
    bool m_documentAttributeConfigurationsHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    IndexStatistics m_indexStatistics;
    bool m_indexStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
