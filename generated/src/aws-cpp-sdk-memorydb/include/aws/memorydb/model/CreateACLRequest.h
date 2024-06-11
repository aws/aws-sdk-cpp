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
    AWS_MEMORYDB_API CreateACLRequest();

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
    inline const Aws::String& GetACLName() const{ return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }
    inline CreateACLRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}
    inline CreateACLRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}
    inline CreateACLRequest& WithACLName(const char* value) { SetACLName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of users that belong to the Access Control List.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNames() const{ return m_userNames; }
    inline bool UserNamesHasBeenSet() const { return m_userNamesHasBeenSet; }
    inline void SetUserNames(const Aws::Vector<Aws::String>& value) { m_userNamesHasBeenSet = true; m_userNames = value; }
    inline void SetUserNames(Aws::Vector<Aws::String>&& value) { m_userNamesHasBeenSet = true; m_userNames = std::move(value); }
    inline CreateACLRequest& WithUserNames(const Aws::Vector<Aws::String>& value) { SetUserNames(value); return *this;}
    inline CreateACLRequest& WithUserNames(Aws::Vector<Aws::String>&& value) { SetUserNames(std::move(value)); return *this;}
    inline CreateACLRequest& AddUserNames(const Aws::String& value) { m_userNamesHasBeenSet = true; m_userNames.push_back(value); return *this; }
    inline CreateACLRequest& AddUserNames(Aws::String&& value) { m_userNamesHasBeenSet = true; m_userNames.push_back(std::move(value)); return *this; }
    inline CreateACLRequest& AddUserNames(const char* value) { m_userNamesHasBeenSet = true; m_userNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateACLRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateACLRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateACLRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateACLRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
