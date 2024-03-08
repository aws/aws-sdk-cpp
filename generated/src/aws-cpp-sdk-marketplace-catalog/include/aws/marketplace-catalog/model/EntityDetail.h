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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>An object that contains metadata and details about the entity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntityDetail">AWS
   * API Reference</a></p>
   */
  class EntityDetail
  {
  public:
    AWS_MARKETPLACECATALOG_API EntityDetail();
    AWS_MARKETPLACECATALOG_API EntityDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline EntityDetail& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline EntityDetail& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The entity type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline EntityDetail& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline EntityDetail& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline EntityDetail& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline EntityDetail& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline EntityDetail& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline EntityDetail& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity, in the format of <code>EntityId@RevisionId</code>.</p>
     */
    inline EntityDetail& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}


    /**
     * <p>The last time the entity was modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline EntityDetail& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline EntityDetail& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The last time the entity was modified.</p>
     */
    inline EntityDetail& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline Aws::Utils::DocumentView GetDetailsDocument() const{ return m_detailsDocument; }

    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline bool DetailsDocumentHasBeenSet() const { return m_detailsDocumentHasBeenSet; }

    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline void SetDetailsDocument(const Aws::Utils::Document& value) { m_detailsDocumentHasBeenSet = true; m_detailsDocument = value; }

    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline void SetDetailsDocument(Aws::Utils::Document&& value) { m_detailsDocumentHasBeenSet = true; m_detailsDocument = std::move(value); }

    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline EntityDetail& WithDetailsDocument(const Aws::Utils::Document& value) { SetDetailsDocument(value); return *this;}

    /**
     * <p>An object that contains all the details of the entity.</p>
     */
    inline EntityDetail& WithDetailsDocument(Aws::Utils::Document&& value) { SetDetailsDocument(std::move(value)); return *this;}

  private:

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::Document m_detailsDocument;
    bool m_detailsDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
