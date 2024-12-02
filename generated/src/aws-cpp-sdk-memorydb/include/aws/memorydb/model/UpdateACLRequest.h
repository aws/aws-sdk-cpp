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
    AWS_MEMORYDB_API UpdateACLRequest();

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
    inline const Aws::String& GetACLName() const{ return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }
    inline UpdateACLRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}
    inline UpdateACLRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}
    inline UpdateACLRequest& WithACLName(const char* value) { SetACLName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users to add to the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToAdd() const{ return m_userNamesToAdd; }
    inline bool UserNamesToAddHasBeenSet() const { return m_userNamesToAddHasBeenSet; }
    inline void SetUserNamesToAdd(const Aws::Vector<Aws::String>& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = value; }
    inline void SetUserNamesToAdd(Aws::Vector<Aws::String>&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = std::move(value); }
    inline UpdateACLRequest& WithUserNamesToAdd(const Aws::Vector<Aws::String>& value) { SetUserNamesToAdd(value); return *this;}
    inline UpdateACLRequest& WithUserNamesToAdd(Aws::Vector<Aws::String>&& value) { SetUserNamesToAdd(std::move(value)); return *this;}
    inline UpdateACLRequest& AddUserNamesToAdd(const Aws::String& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }
    inline UpdateACLRequest& AddUserNamesToAdd(Aws::String&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateACLRequest& AddUserNamesToAdd(const char* value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of users to remove from the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToRemove() const{ return m_userNamesToRemove; }
    inline bool UserNamesToRemoveHasBeenSet() const { return m_userNamesToRemoveHasBeenSet; }
    inline void SetUserNamesToRemove(const Aws::Vector<Aws::String>& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = value; }
    inline void SetUserNamesToRemove(Aws::Vector<Aws::String>&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = std::move(value); }
    inline UpdateACLRequest& WithUserNamesToRemove(const Aws::Vector<Aws::String>& value) { SetUserNamesToRemove(value); return *this;}
    inline UpdateACLRequest& WithUserNamesToRemove(Aws::Vector<Aws::String>&& value) { SetUserNamesToRemove(std::move(value)); return *this;}
    inline UpdateACLRequest& AddUserNamesToRemove(const Aws::String& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }
    inline UpdateACLRequest& AddUserNamesToRemove(Aws::String&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateACLRequest& AddUserNamesToRemove(const char* value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }
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
