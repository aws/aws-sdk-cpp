/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/Entity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
#include <aws/marketplace-catalog/model/Tag.h>
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
   * <p>An object that contains the <code>ChangeType</code>, <code>Details</code>,
   * and <code>Entity</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/Change">AWS
   * API Reference</a></p>
   */
  class Change
  {
  public:
    AWS_MARKETPLACECATALOG_API Change() = default;
    AWS_MARKETPLACECATALOG_API Change(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Change& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Change types are single string values that describe your intention for the
     * change. Each change type is unique for each <code>EntityType</code> provided in
     * the change's scope. For more information about change types available for
     * single-AMI products, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/ami-products.html#working-with-single-AMI-products">Working
     * with single-AMI products</a>. Also, for more information about change types
     * available for container-based products, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/container-products.html#working-with-container-products">Working
     * with container products</a>.</p>
     */
    inline const Aws::String& GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    template<typename ChangeTypeT = Aws::String>
    void SetChangeType(ChangeTypeT&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::forward<ChangeTypeT>(value); }
    template<typename ChangeTypeT = Aws::String>
    Change& WithChangeType(ChangeTypeT&& value) { SetChangeType(std::forward<ChangeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to be changed.</p>
     */
    inline const Entity& GetEntity() const { return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    template<typename EntityT = Entity>
    void SetEntity(EntityT&& value) { m_entityHasBeenSet = true; m_entity = std::forward<EntityT>(value); }
    template<typename EntityT = Entity>
    Change& WithEntity(EntityT&& value) { SetEntity(std::forward<EntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the change.</p>
     */
    inline const Aws::Vector<Tag>& GetEntityTags() const { return m_entityTags; }
    inline bool EntityTagsHasBeenSet() const { return m_entityTagsHasBeenSet; }
    template<typename EntityTagsT = Aws::Vector<Tag>>
    void SetEntityTags(EntityTagsT&& value) { m_entityTagsHasBeenSet = true; m_entityTags = std::forward<EntityTagsT>(value); }
    template<typename EntityTagsT = Aws::Vector<Tag>>
    Change& WithEntityTags(EntityTagsT&& value) { SetEntityTags(std::forward<EntityTagsT>(value)); return *this;}
    template<typename EntityTagsT = Tag>
    Change& AddEntityTags(EntityTagsT&& value) { m_entityTagsHasBeenSet = true; m_entityTags.emplace_back(std::forward<EntityTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This object contains details specific to the change type of the requested
     * change. For more information about change types available for single-AMI
     * products, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/ami-products.html#working-with-single-AMI-products">Working
     * with single-AMI products</a>. Also, for more information about change types
     * available for container-based products, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/container-products.html#working-with-container-products">Working
     * with container products</a>.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    Change& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Alternative field that accepts a JSON value instead of a string for
     * <code>ChangeType</code> details. You can use either <code>Details</code> or
     * <code>DetailsDocument</code>, but not both.</p> <p>To download the
     * "DetailsDocument" shapes, see the <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-python">Python</a>
     * and <a
     * href="https://github.com/awslabs/aws-marketplace-catalog-api-shapes-for-java/tree/main">Java</a>
     * shapes on GitHub.</p>
     */
    inline Aws::Utils::DocumentView GetDetailsDocument() const { return m_detailsDocument; }
    inline bool DetailsDocumentHasBeenSet() const { return m_detailsDocumentHasBeenSet; }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    void SetDetailsDocument(DetailsDocumentT&& value) { m_detailsDocumentHasBeenSet = true; m_detailsDocument = std::forward<DetailsDocumentT>(value); }
    template<typename DetailsDocumentT = Aws::Utils::Document>
    Change& WithDetailsDocument(DetailsDocumentT&& value) { SetDetailsDocument(std::forward<DetailsDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional name for the change.</p>
     */
    inline const Aws::String& GetChangeName() const { return m_changeName; }
    inline bool ChangeNameHasBeenSet() const { return m_changeNameHasBeenSet; }
    template<typename ChangeNameT = Aws::String>
    void SetChangeName(ChangeNameT&& value) { m_changeNameHasBeenSet = true; m_changeName = std::forward<ChangeNameT>(value); }
    template<typename ChangeNameT = Aws::String>
    Change& WithChangeName(ChangeNameT&& value) { SetChangeName(std::forward<ChangeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Entity m_entity;
    bool m_entityHasBeenSet = false;

    Aws::Vector<Tag> m_entityTags;
    bool m_entityTagsHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Utils::Document m_detailsDocument;
    bool m_detailsDocumentHasBeenSet = false;

    Aws::String m_changeName;
    bool m_changeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
