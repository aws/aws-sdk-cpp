/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/EntityItem.h>
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
   * <p>Contains the list of entities to be considered during an authorization
   * request. This includes all principals, resources, and actions required to
   * successfully evaluate the request.</p> <p>This data type is used as a field in
   * the response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EntitiesDefinition">AWS
   * API Reference</a></p>
   */
  class EntitiesDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API EntitiesDefinition();
    AWS_VERIFIEDPERMISSIONS_API EntitiesDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EntitiesDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline const Aws::Vector<EntityItem>& GetEntityList() const{ return m_entityList; }

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline bool EntityListHasBeenSet() const { return m_entityListHasBeenSet; }

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline void SetEntityList(const Aws::Vector<EntityItem>& value) { m_entityListHasBeenSet = true; m_entityList = value; }

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline void SetEntityList(Aws::Vector<EntityItem>&& value) { m_entityListHasBeenSet = true; m_entityList = std::move(value); }

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline EntitiesDefinition& WithEntityList(const Aws::Vector<EntityItem>& value) { SetEntityList(value); return *this;}

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline EntitiesDefinition& WithEntityList(Aws::Vector<EntityItem>&& value) { SetEntityList(std::move(value)); return *this;}

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline EntitiesDefinition& AddEntityList(const EntityItem& value) { m_entityListHasBeenSet = true; m_entityList.push_back(value); return *this; }

    /**
     * <p>An array of entities that are needed to successfully evaluate an
     * authorization request. Each entity in this array must include an identifier for
     * the entity, the attributes of the entity, and a list of any parent entities.</p>
     */
    inline EntitiesDefinition& AddEntityList(EntityItem&& value) { m_entityListHasBeenSet = true; m_entityList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EntityItem> m_entityList;
    bool m_entityListHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
