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
    AWS_MEMORYDB_API ACLPendingChanges() = default;
    AWS_MEMORYDB_API ACLPendingChanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ACLPendingChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of user names being removed from the ACL</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToRemove() const { return m_userNamesToRemove; }
    inline bool UserNamesToRemoveHasBeenSet() const { return m_userNamesToRemoveHasBeenSet; }
    template<typename UserNamesToRemoveT = Aws::Vector<Aws::String>>
    void SetUserNamesToRemove(UserNamesToRemoveT&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove = std::forward<UserNamesToRemoveT>(value); }
    template<typename UserNamesToRemoveT = Aws::Vector<Aws::String>>
    ACLPendingChanges& WithUserNamesToRemove(UserNamesToRemoveT&& value) { SetUserNamesToRemove(std::forward<UserNamesToRemoveT>(value)); return *this;}
    template<typename UserNamesToRemoveT = Aws::String>
    ACLPendingChanges& AddUserNamesToRemove(UserNamesToRemoveT&& value) { m_userNamesToRemoveHasBeenSet = true; m_userNamesToRemove.emplace_back(std::forward<UserNamesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users being added to the ACL</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNamesToAdd() const { return m_userNamesToAdd; }
    inline bool UserNamesToAddHasBeenSet() const { return m_userNamesToAddHasBeenSet; }
    template<typename UserNamesToAddT = Aws::Vector<Aws::String>>
    void SetUserNamesToAdd(UserNamesToAddT&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd = std::forward<UserNamesToAddT>(value); }
    template<typename UserNamesToAddT = Aws::Vector<Aws::String>>
    ACLPendingChanges& WithUserNamesToAdd(UserNamesToAddT&& value) { SetUserNamesToAdd(std::forward<UserNamesToAddT>(value)); return *this;}
    template<typename UserNamesToAddT = Aws::String>
    ACLPendingChanges& AddUserNamesToAdd(UserNamesToAddT&& value) { m_userNamesToAddHasBeenSet = true; m_userNamesToAdd.emplace_back(std::forward<UserNamesToAddT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_userNamesToRemove;
    bool m_userNamesToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNamesToAdd;
    bool m_userNamesToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
