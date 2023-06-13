/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
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
   * <p>Contains information about a principal or resource that can be referenced in
   * a Cedar policy.</p> <p>This data type is used as part of the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_PolicyFilter.html">PolicyFilter</a>
   * structure that is used as a request parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListPolicies.html">ListPolicies</a>
   * operation..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/EntityReference">AWS
   * API Reference</a></p>
   */
  class EntityReference
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API EntityReference();
    AWS_VERIFIEDPERMISSIONS_API EntityReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API EntityReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to indicate that a principal or resource is not specified. This can be
     * used to search for policies that are not associated with a specific principal or
     * resource.</p>
     */
    inline bool GetUnspecified() const{ return m_unspecified; }

    /**
     * <p>Used to indicate that a principal or resource is not specified. This can be
     * used to search for policies that are not associated with a specific principal or
     * resource.</p>
     */
    inline bool UnspecifiedHasBeenSet() const { return m_unspecifiedHasBeenSet; }

    /**
     * <p>Used to indicate that a principal or resource is not specified. This can be
     * used to search for policies that are not associated with a specific principal or
     * resource.</p>
     */
    inline void SetUnspecified(bool value) { m_unspecifiedHasBeenSet = true; m_unspecified = value; }

    /**
     * <p>Used to indicate that a principal or resource is not specified. This can be
     * used to search for policies that are not associated with a specific principal or
     * resource.</p>
     */
    inline EntityReference& WithUnspecified(bool value) { SetUnspecified(value); return *this;}


    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline const EntityIdentifier& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline void SetIdentifier(const EntityIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline void SetIdentifier(EntityIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline EntityReference& WithIdentifier(const EntityIdentifier& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the entity. It can consist of either an EntityType and
     * EntityId, a principal, or a resource.</p>
     */
    inline EntityReference& WithIdentifier(EntityIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}

  private:

    bool m_unspecified;
    bool m_unspecifiedHasBeenSet = false;

    EntityIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
