/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Returns the updates being applied to the ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ACLPendingChanges">AWS
   * API Reference</a></p>
   */
  class ACLPendingChanges
  {
  public:
    AWS_MEMORYDB_API ACLPendingChanges();
    AWS_MEMORYDB_API ACLPendingChanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ACLPendingChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToRemove() const{ return m_userNamesToRemove; }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline bool UserNamesToRemoveHasBeenSet() const { return m_userNamesToRemoveHasBeenSet; }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline void SetUserNamesToRemove(const Aws::Vector<Aws::String>& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = value; }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline void SetUserNamesToRemove(Aws::Vector<Aws::String>&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = std::move(value); }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline ACLPendingChanges& WithUserNamesToRemove(const Aws::Vector<Aws::String>& value) { SetUserNamesToRemove(value); return *this;}

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline ACLPendingChanges& WithUserNamesToRemove(Aws::Vector<Aws::String>&& value) { SetUserNamesToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToRemove(const Aws::String& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToRemove(Aws::String&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToRemove(const char* value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.push_back(value); return *this; }


    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToAdd() const{ return m_userNamesToAdd; }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline bool UserNamesToAddHasBeenSet() const { return m_userNamesToAddHasBeenSet; }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline void SetUserNamesToAdd(const Aws::Vector<Aws::String>& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = value; }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline void SetUserNamesToAdd(Aws::Vector<Aws::String>&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = std::move(value); }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline ACLPendingChanges& WithUserNamesToAdd(const Aws::Vector<Aws::String>& value) { SetUserNamesToAdd(value); return *this;}

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline ACLPendingChanges& WithUserNamesToAdd(Aws::Vector<Aws::String>&& value) { SetUserNamesToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToAdd(const Aws::String& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToAdd(Aws::String&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline ACLPendingChanges& AddUserNamesToAdd(const char* value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userNamesToRemove;
    bool m_userNamesToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNamesToAdd;
    bool m_userNamesToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
