﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventorySchemaDeleteOption.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteInventoryRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteInventoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInventory"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the custom inventory type for which you want to delete either all
     * previously collected data or the inventory type itself. </p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    DeleteInventoryRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>SchemaDeleteOption</code> to delete a custom inventory type
     * (schema). If you don't choose this option, the system only deletes existing
     * inventory data associated with the custom inventory type. Choose one of the
     * following options:</p> <p>DisableSchema: If you choose this option, the system
     * ignores all inventory data for the specified version, and any earlier versions.
     * To enable this schema again, you must call the <code>PutInventory</code>
     * operation for a version greater than the disabled version.</p> <p>DeleteSchema:
     * This option deletes the specified custom type from the Inventory service. You
     * can recreate the schema later, if you want.</p>
     */
    inline InventorySchemaDeleteOption GetSchemaDeleteOption() const { return m_schemaDeleteOption; }
    inline bool SchemaDeleteOptionHasBeenSet() const { return m_schemaDeleteOptionHasBeenSet; }
    inline void SetSchemaDeleteOption(InventorySchemaDeleteOption value) { m_schemaDeleteOptionHasBeenSet = true; m_schemaDeleteOption = value; }
    inline DeleteInventoryRequest& WithSchemaDeleteOption(InventorySchemaDeleteOption value) { SetSchemaDeleteOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this option to view a summary of the deletion request without deleting
     * any data or the data type. This option is useful when you only want to
     * understand what will be deleted. Once you validate that the data to be deleted
     * is what you intend to delete, you can run the same command without specifying
     * the <code>DryRun</code> option.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeleteInventoryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DeleteInventoryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    InventorySchemaDeleteOption m_schemaDeleteOption{InventorySchemaDeleteOption::NOT_SET};
    bool m_schemaDeleteOptionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
