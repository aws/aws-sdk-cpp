/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the identifier of an entity, including its ID and type.</p> <p>This
   * data type is used as a request parameter for <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>
   * operation, and as a response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>,
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetPolicy.html">GetPolicy</a>,
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicy.html">UpdatePolicy</a>
   * operations.</p> <p>Example:
   * <code>{"entityId":"<i>string</i>","entityType":"<i>string</i>"}</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EntityIdentifier">AWS
   * API Reference</a></p>
   */
  class EntityIdentifier
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API EntityIdentifier();
    AWS_VERIFIEDPERMISSIONS_API EntityIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EntityIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline void SetEntityType(const char* value) { m_entityTypeHasBeenSet = true; m_entityType.assign(value); }

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The type of an entity.</p> <p>Example:
     * <code>"entityType":"<i>typeName</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an entity.</p> <p>
     * <code>"entityId":"<i>identifier</i>"</code> </p>
     */
    inline EntityIdentifier& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
