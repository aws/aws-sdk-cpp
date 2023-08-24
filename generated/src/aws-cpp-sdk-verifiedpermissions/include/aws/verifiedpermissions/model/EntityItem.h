/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/AttributeValue.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains information about an entity that can be referenced in a Cedar
   * policy.</p> <p>This data type is used as one of the fields in the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_EntitiesDefinition.html">EntitiesDefinition</a>
   * structure.</p> <p> <code>{ "identifier": { "entityType": "Photo", "entityId":
   * "VacationPhoto94.jpg" }, "attributes": {}, "parents": [ { "entityType": "Album",
   * "entityId": "alice_folder" } ] }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EntityItem">AWS
   * API Reference</a></p>
   */
  class EntityItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API EntityItem();
    AWS_VERIFIEDPERMISSIONS_API EntityItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EntityItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the entity.</p>
     */
    inline const EntityIdentifier& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the entity.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the entity.</p>
     */
    inline void SetIdentifier(const EntityIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the entity.</p>
     */
    inline void SetIdentifier(EntityIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the entity.</p>
     */
    inline EntityItem& WithIdentifier(const EntityIdentifier& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the entity.</p>
     */
    inline EntityItem& WithIdentifier(EntityIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}


    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(const char* key, AttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline EntityItem& AddAttributes(const char* key, const AttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline const Aws::Vector<EntityIdentifier>& GetParents() const{ return m_parents; }

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline void SetParents(const Aws::Vector<EntityIdentifier>& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline void SetParents(Aws::Vector<EntityIdentifier>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline EntityItem& WithParents(const Aws::Vector<EntityIdentifier>& value) { SetParents(value); return *this;}

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline EntityItem& WithParents(Aws::Vector<EntityIdentifier>&& value) { SetParents(std::move(value)); return *this;}

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline EntityItem& AddParents(const EntityIdentifier& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>The parents in the hierarchy that contains the entity.</p>
     */
    inline EntityItem& AddParents(EntityIdentifier&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }

  private:

    EntityIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<EntityIdentifier> m_parents;
    bool m_parentsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
