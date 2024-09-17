/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentPermissionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ModifyDocumentPermissionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ModifyDocumentPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDocumentPermission"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the document that you want to share.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ModifyDocumentPermissionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ModifyDocumentPermissionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ModifyDocumentPermissionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline const DocumentPermissionType& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const DocumentPermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(DocumentPermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline ModifyDocumentPermissionRequest& WithPermissionType(const DocumentPermissionType& value) { SetPermissionType(value); return *this;}
    inline ModifyDocumentPermissionRequest& WithPermissionType(DocumentPermissionType&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services users that should have access to the document. The
     * account IDs can either be a group of account IDs or <i>All</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToAdd() const{ return m_accountIdsToAdd; }
    inline bool AccountIdsToAddHasBeenSet() const { return m_accountIdsToAddHasBeenSet; }
    inline void SetAccountIdsToAdd(const Aws::Vector<Aws::String>& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd = value; }
    inline void SetAccountIdsToAdd(Aws::Vector<Aws::String>&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd = std::move(value); }
    inline ModifyDocumentPermissionRequest& WithAccountIdsToAdd(const Aws::Vector<Aws::String>& value) { SetAccountIdsToAdd(value); return *this;}
    inline ModifyDocumentPermissionRequest& WithAccountIdsToAdd(Aws::Vector<Aws::String>&& value) { SetAccountIdsToAdd(std::move(value)); return *this;}
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(const Aws::String& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(value); return *this; }
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(Aws::String&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(std::move(value)); return *this; }
    inline ModifyDocumentPermissionRequest& AddAccountIdsToAdd(const char* value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services users that should no longer have access to the
     * document. The Amazon Web Services user can either be a group of account IDs or
     * <i>All</i>. This action has a higher priority than <code>AccountIdsToAdd</code>.
     * If you specify an ID to add and the same ID to remove, the system removes access
     * to the document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToRemove() const{ return m_accountIdsToRemove; }
    inline bool AccountIdsToRemoveHasBeenSet() const { return m_accountIdsToRemoveHasBeenSet; }
    inline void SetAccountIdsToRemove(const Aws::Vector<Aws::String>& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove = value; }
    inline void SetAccountIdsToRemove(Aws::Vector<Aws::String>&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove = std::move(value); }
    inline ModifyDocumentPermissionRequest& WithAccountIdsToRemove(const Aws::Vector<Aws::String>& value) { SetAccountIdsToRemove(value); return *this;}
    inline ModifyDocumentPermissionRequest& WithAccountIdsToRemove(Aws::Vector<Aws::String>&& value) { SetAccountIdsToRemove(std::move(value)); return *this;}
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(const Aws::String& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(value); return *this; }
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(Aws::String&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(std::move(value)); return *this; }
    inline ModifyDocumentPermissionRequest& AddAccountIdsToRemove(const char* value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) The version of the document to share. If it isn't specified, the
     * system choose the <code>Default</code> version to share.</p>
     */
    inline const Aws::String& GetSharedDocumentVersion() const{ return m_sharedDocumentVersion; }
    inline bool SharedDocumentVersionHasBeenSet() const { return m_sharedDocumentVersionHasBeenSet; }
    inline void SetSharedDocumentVersion(const Aws::String& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = value; }
    inline void SetSharedDocumentVersion(Aws::String&& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = std::move(value); }
    inline void SetSharedDocumentVersion(const char* value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion.assign(value); }
    inline ModifyDocumentPermissionRequest& WithSharedDocumentVersion(const Aws::String& value) { SetSharedDocumentVersion(value); return *this;}
    inline ModifyDocumentPermissionRequest& WithSharedDocumentVersion(Aws::String&& value) { SetSharedDocumentVersion(std::move(value)); return *this;}
    inline ModifyDocumentPermissionRequest& WithSharedDocumentVersion(const char* value) { SetSharedDocumentVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentPermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIdsToAdd;
    bool m_accountIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIdsToRemove;
    bool m_accountIdsToRemoveHasBeenSet = false;

    Aws::String m_sharedDocumentVersion;
    bool m_sharedDocumentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
