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


    /**
     * <p>The name of the Access Control List</p>
     */
    inline const Aws::String& GetACLName() const{ return m_aCLName; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }

    /**
     * <p>The name of the Access Control List</p>
     */
    inline UpdateACLRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}

    /**
     * <p>The name of the Access Control List</p>
     */
    inline UpdateACLRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}

    /**
     * <p>The name of the Access Control List</p>
     */
    inline UpdateACLRequest& WithACLName(const char* value) { SetACLName(value); return *this;}


    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToAdd() const{ return m_userNamesToAdd; }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline bool UserNamesToAddHasBeenSet() const { return m_userNamesToAddHasBeenSet; }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline void SetUserNamesToAdd(const Aws::Vector<Aws::String>& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = value; }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline void SetUserNamesToAdd(Aws::Vector<Aws::String>&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = std::move(value); }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline UpdateACLRequest& WithUserNamesToAdd(const Aws::Vector<Aws::String>& value) { SetUserNamesToAdd(value); return *this;}

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline UpdateACLRequest& WithUserNamesToAdd(Aws::Vector<Aws::String>&& value) { SetUserNamesToAdd(std::move(value)); return *this;}

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToAdd(const Aws::String& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToAdd(Aws::String&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of users to add to the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToAdd(const char* value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }


    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToRemove() const{ return m_userNamesToRemove; }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline bool UserNamesToRemoveHasBeenSet() const { return m_userNamesToRemoveHasBeenSet; }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline void SetUserNamesToRemove(const Aws::Vector<Aws::String>& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = value; }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline void SetUserNamesToRemove(Aws::Vector<Aws::String>&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = std::move(value); }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline UpdateACLRequest& WithUserNamesToRemove(const Aws::Vector<Aws::String>& value) { SetUserNamesToRemove(value); return *this;}

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline UpdateACLRequest& WithUserNamesToRemove(Aws::Vector<Aws::String>&& value) { SetUserNamesToRemove(std::move(value)); return *this;}

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToRemove(const Aws::String& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToRemove(Aws::String&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of users to remove from the Access Control List</p>
     */
    inline UpdateACLRequest& AddUserNamesToRemove(const char* value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }

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
