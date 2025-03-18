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
    AWS_VERIFIEDPERMISSIONS_API EntityItem() = default;
    AWS_VERIFIEDPERMISSIONS_API EntityItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EntityItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the entity.</p>
     */
    inline const EntityIdentifier& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = EntityIdentifier>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = EntityIdentifier>
    EntityItem& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of attributes for the entity.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeValue>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, AttributeValue>>
    EntityItem& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = AttributeValue>
    EntityItem& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The parent entities in the hierarchy that contains the entity. A principal or
     * resource entity can be defined with at most 99 <i>transitive parents</i> per
     * authorization request. </p> <p>A transitive parent is an entity in the hierarchy
     * of entities including all direct parents, and parents of parents. For example, a
     * user can be a member of 91 groups if one of those groups is a member of eight
     * groups, for a total of 100: one entity, 91 entity parents, and eight parents of
     * parents. </p>
     */
    inline const Aws::Vector<EntityIdentifier>& GetParents() const { return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    template<typename ParentsT = Aws::Vector<EntityIdentifier>>
    void SetParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents = std::forward<ParentsT>(value); }
    template<typename ParentsT = Aws::Vector<EntityIdentifier>>
    EntityItem& WithParents(ParentsT&& value) { SetParents(std::forward<ParentsT>(value)); return *this;}
    template<typename ParentsT = EntityIdentifier>
    EntityItem& AddParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents.emplace_back(std::forward<ParentsT>(value)); return *this; }
    ///@}
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
