/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class CreateOrganizationalUnitRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API CreateOrganizationalUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrganizationalUnit"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) of the parent root or OU that you want to create
     * the new OU in.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a parent ID string requires one of the following:</p> <ul> <li>
     * <p> <b>Root</b> - A string that begins with "r-" followed by from 4 to 32
     * lowercase letters or digits.</p> </li> <li> <p> <b>Organizational unit (OU)</b>
     * - A string that begins with "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that the OU is in). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline CreateOrganizationalUnitRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline CreateOrganizationalUnitRequest& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline CreateOrganizationalUnitRequest& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name to assign to the new OU.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateOrganizationalUnitRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateOrganizationalUnitRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateOrganizationalUnitRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you want to attach to the newly created OU. For each tag
     * in the list, you must specify both a tag key and a value. You can set the value
     * to an empty string, but you can't set it to <code>null</code>. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tagging.html">Tagging
     * Organizations resources</a> in the Organizations User Guide.</p>  <p>If
     * any one of the tags is not valid or if you exceed the allowed number of tags for
     * an OU, then the entire request fails and the OU is not created.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateOrganizationalUnitRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateOrganizationalUnitRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateOrganizationalUnitRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateOrganizationalUnitRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
