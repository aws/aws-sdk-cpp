/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class DescribeEntityResult
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeEntityResult() = default;
    AWS_MARKETPLACECATALOG_API DescribeEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API DescribeEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    DescribeEntityResult& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    DescribeEntityResult& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    DescribeEntityResult& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    DescribeEntityResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    DescribeEntityResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON value of the details specific to the entity.</p> <p>To download
     * "DetailsDocument" shapes, see the <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-python">Python</a>
     * and <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-java/tree/main">Java</a>
     * shapes on GitHub.</p>
     */
    inline Aws::Utils::DocumentView GetDetailsDocument() const { return m_detailsDocument; }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    void SetDetailsDocument(DetailsDocumentT&& value) { m_detailsDocumentHasBeenSet = true; m_detailsDocument = std::forward<DetailsDocumentT>(value); }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    DescribeEntityResult& WithDetailsDocument(DetailsDocumentT&& value) { SetDetailsDocument(std::forward<DetailsDocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEntityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Utils::Document m_detailsDocument;
    bool m_detailsDocumentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
