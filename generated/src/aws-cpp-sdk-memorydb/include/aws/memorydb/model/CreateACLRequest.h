/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class CreateACLRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API CreateACLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateACL"; }

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
    CreateACLRequest& WithACLName(ACLNameT&& value) { SetACLName(std::forward<ACLNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users that belong to the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNames() const { return m_userNames; }
    inline bool UserNamesHasBeenSet() const { return m_userNamesHasBeenSet; }
    template<typename UserNamesT = Aws::Vector<Aws::String>>
    void SetUserNames(UserNamesT&& value) { m_userNamesHasBeenSet = true; m_userNames = std::forward<UserNamesT>(value); }
    template<typename UserNamesT = Aws::Vector<Aws::String>>
    CreateACLRequest& WithUserNames(UserNamesT&& value) { SetUserNames(std::forward<UserNamesT>(value)); return *this;}
    template<typename UserNamesT = Aws::String>
    CreateACLRequest& AddUserNames(UserNamesT&& value) { m_userNamesHasBeenSet = true; m_userNames.emplace_back(std::forward<UserNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateACLRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateACLRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNames;
    bool m_userNamesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
