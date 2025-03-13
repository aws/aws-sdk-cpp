/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateConnectionAliasRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateConnectionAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectionAlias"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A connection string in the form of a fully qualified domain name (FQDN), such
     * as <code>www.example.com</code>.</p>  <p>After you create a
     * connection string, it is always associated to your Amazon Web Services account.
     * You cannot recreate the same connection string with a different account, even if
     * you delete all instances of it from the original account. The connection string
     * is globally reserved for your account.</p> 
     */
    inline const Aws::String& GetConnectionString() const { return m_connectionString; }
    inline bool ConnectionStringHasBeenSet() const { return m_connectionStringHasBeenSet; }
    template<typename ConnectionStringT = Aws::String>
    void SetConnectionString(ConnectionStringT&& value) { m_connectionStringHasBeenSet = true; m_connectionString = std::forward<ConnectionStringT>(value); }
    template<typename ConnectionStringT = Aws::String>
    CreateConnectionAliasRequest& WithConnectionString(ConnectionStringT&& value) { SetConnectionString(std::forward<ConnectionStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the connection alias.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateConnectionAliasRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateConnectionAliasRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_connectionString;
    bool m_connectionStringHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
