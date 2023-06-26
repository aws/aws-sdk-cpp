/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBSecurityGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBSecurityGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBSecurityGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const{ return m_dBSecurityGroupName; }

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetDBSecurityGroupName(const Aws::String& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = value; }

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetDBSecurityGroupName(Aws::String&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::move(value); }

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline void SetDBSecurityGroupName(const char* value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName.assign(value); }

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(const Aws::String& value) { SetDBSecurityGroupName(value); return *this;}

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(Aws::String&& value) { SetDBSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupName(const char* value) { SetDBSecurityGroupName(value); return *this;}


    /**
     * <p>The description for the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupDescription() const{ return m_dBSecurityGroupDescription; }

    /**
     * <p>The description for the DB security group.</p>
     */
    inline bool DBSecurityGroupDescriptionHasBeenSet() const { return m_dBSecurityGroupDescriptionHasBeenSet; }

    /**
     * <p>The description for the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(const Aws::String& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = value; }

    /**
     * <p>The description for the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(Aws::String&& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = std::move(value); }

    /**
     * <p>The description for the DB security group.</p>
     */
    inline void SetDBSecurityGroupDescription(const char* value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription.assign(value); }

    /**
     * <p>The description for the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(const Aws::String& value) { SetDBSecurityGroupDescription(value); return *this;}

    /**
     * <p>The description for the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(Aws::String&& value) { SetDBSecurityGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(const char* value) { SetDBSecurityGroupDescription(value); return *this;}


    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline CreateDBSecurityGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBSecurityGroupName;
    bool m_dBSecurityGroupNameHasBeenSet = false;

    Aws::String m_dBSecurityGroupDescription;
    bool m_dBSecurityGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
