/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class UpdateACLRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API UpdateACLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateACL"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Access Control List.</p>
     */
    inline const Aws::String& GetACLName() const { return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    template<typename ACLNameT = Aws::String>
    void SetACLName(ACLNameT&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::forward<ACLNameT>(value); }
    template<typename ACLNameT = Aws::String>
    UpdateACLRequest& WithACLName(ACLNameT&& value) { SetACLName(std::forward<ACLNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users to add to the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToAdd() const { return m_userNamesToAdd; }
    inline bool UserNamesToAddHasBeenSet() const { return m_userNamesToAddHasBeenSet; }
    template<typename UserNamesToAddT = Aws::Vector<Aws::String>>
    void SetUserNamesToAdd(UserNamesToAddT&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = std::forward<UserNamesToAddT>(value); }
    template<typename UserNamesToAddT = Aws::Vector<Aws::String>>
    UpdateACLRequest& WithUserNamesToAdd(UserNamesToAddT&& value) { SetUserNamesToAdd(std::forward<UserNamesToAddT>(value)); return *this;}
    template<typename UserNamesToAddT = Aws::String>
    UpdateACLRequest& AddUserNamesToAdd(UserNamesToAddT&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.emplace_back(std::forward<UserNamesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of users to remove from the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToRemove() const { return m_userNamesToRemove; }
    inline bool UserNamesToRemoveHasBeenSet() const { return m_userNamesToRemoveHasBeenSet; }
    template<typename UserNamesToRemoveT = Aws::Vector<Aws::String>>
    void SetUserNamesToRemove(UserNamesToRemoveT&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = std::forward<UserNamesToRemoveT>(value); }
    template<typename UserNamesToRemoveT = Aws::Vector<Aws::String>>
    UpdateACLRequest& WithUserNamesToRemove(UserNamesToRemoveT&& value) { SetUserNamesToRemove(std::forward<UserNamesToRemoveT>(value)); return *this;}
    template<typename UserNamesToRemoveT = Aws::String>
    UpdateACLRequest& AddUserNamesToRemove(UserNamesToRemoveT&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.emplace_back(std::forward<UserNamesToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNamesToAdd;
    bool m_userNamesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNamesToRemove;
    bool m_userNamesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
