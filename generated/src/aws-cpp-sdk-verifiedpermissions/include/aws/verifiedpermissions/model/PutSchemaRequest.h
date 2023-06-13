/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/SchemaDefinition.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class PutSchemaRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PutSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSchema"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline PutSchemaRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline PutSchemaRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store in which to place the schema.</p>
     */
    inline PutSchemaRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline const SchemaDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline void SetDefinition(const SchemaDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline void SetDefinition(SchemaDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline PutSchemaRequest& WithDefinition(const SchemaDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>Specifies the definition of the schema to be stored. The schema definition
     * must be written in Cedar schema JSON.</p>
     */
    inline PutSchemaRequest& WithDefinition(SchemaDefinition&& value) { SetDefinition(std::move(value)); return *this;}

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    SchemaDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
