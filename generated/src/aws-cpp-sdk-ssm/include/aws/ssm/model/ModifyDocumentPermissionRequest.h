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
    AWS_SSM_API ModifyDocumentPermissionRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ModifyDocumentPermissionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline DocumentPermissionType GetPermissionType() const { return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(DocumentPermissionType value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline ModifyDocumentPermissionRequest& WithPermissionType(DocumentPermissionType value) { SetPermissionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services users that should have access to the document. The
     * account IDs can either be a group of account IDs or <i>All</i>. You must specify
     * a value for this parameter or the <code>AccountIdsToRemove</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToAdd() const { return m_accountIdsToAdd; }
    inline bool AccountIdsToAddHasBeenSet() const { return m_accountIdsToAddHasBeenSet; }
    template<typename AccountIdsToAddT = Aws::Vector<Aws::String>>
    void SetAccountIdsToAdd(AccountIdsToAddT&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd = std::forward<AccountIdsToAddT>(value); }
    template<typename AccountIdsToAddT = Aws::Vector<Aws::String>>
    ModifyDocumentPermissionRequest& WithAccountIdsToAdd(AccountIdsToAddT&& value) { SetAccountIdsToAdd(std::forward<AccountIdsToAddT>(value)); return *this;}
    template<typename AccountIdsToAddT = Aws::String>
    ModifyDocumentPermissionRequest& AddAccountIdsToAdd(AccountIdsToAddT&& value) { m_accountIdsToAddHasBeenSet = true; m_accountIdsToAdd.emplace_back(std::forward<AccountIdsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services users that should no longer have access to the
     * document. The Amazon Web Services user can either be a group of account IDs or
     * <i>All</i>. This action has a higher priority than <code>AccountIdsToAdd</code>.
     * If you specify an ID to add and the same ID to remove, the system removes access
     * to the document. You must specify a value for this parameter or the
     * <code>AccountIdsToAdd</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdsToRemove() const { return m_accountIdsToRemove; }
    inline bool AccountIdsToRemoveHasBeenSet() const { return m_accountIdsToRemoveHasBeenSet; }
    template<typename AccountIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetAccountIdsToRemove(AccountIdsToRemoveT&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove = std::forward<AccountIdsToRemoveT>(value); }
    template<typename AccountIdsToRemoveT = Aws::Vector<Aws::String>>
    ModifyDocumentPermissionRequest& WithAccountIdsToRemove(AccountIdsToRemoveT&& value) { SetAccountIdsToRemove(std::forward<AccountIdsToRemoveT>(value)); return *this;}
    template<typename AccountIdsToRemoveT = Aws::String>
    ModifyDocumentPermissionRequest& AddAccountIdsToRemove(AccountIdsToRemoveT&& value) { m_accountIdsToRemoveHasBeenSet = true; m_accountIdsToRemove.emplace_back(std::forward<AccountIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) The version of the document to share. If it isn't specified, the
     * system choose the <code>Default</code> version to share.</p>
     */
    inline const Aws::String& GetSharedDocumentVersion() const { return m_sharedDocumentVersion; }
    inline bool SharedDocumentVersionHasBeenSet() const { return m_sharedDocumentVersionHasBeenSet; }
    template<typename SharedDocumentVersionT = Aws::String>
    void SetSharedDocumentVersion(SharedDocumentVersionT&& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = std::forward<SharedDocumentVersionT>(value); }
    template<typename SharedDocumentVersionT = Aws::String>
    ModifyDocumentPermissionRequest& WithSharedDocumentVersion(SharedDocumentVersionT&& value) { SetSharedDocumentVersion(std::forward<SharedDocumentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentPermissionType m_permissionType{DocumentPermissionType::NOT_SET};
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
