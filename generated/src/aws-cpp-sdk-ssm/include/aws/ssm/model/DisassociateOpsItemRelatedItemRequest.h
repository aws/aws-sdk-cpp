/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DisassociateOpsItemRelatedItemRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DisassociateOpsItemRelatedItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateOpsItemRelatedItem"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the OpsItem for which you want to delete an association between the
     * OpsItem and a related item.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }
    inline DisassociateOpsItemRelatedItemRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline DisassociateOpsItemRelatedItemRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline DisassociateOpsItemRelatedItemRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association for which you want to delete an association between
     * the OpsItem and a related item.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline DisassociateOpsItemRelatedItemRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline DisassociateOpsItemRelatedItemRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline DisassociateOpsItemRelatedItemRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}
  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
