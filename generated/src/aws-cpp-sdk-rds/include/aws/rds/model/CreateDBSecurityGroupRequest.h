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
    AWS_RDS_API CreateDBSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBSecurityGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name for the DB security group. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Can't end with a hyphen or contain two consecutive hyphens</p> </li> <li>
     * <p>Must not be "Default"</p> </li> </ul> <p>Example:
     * <code>mysecuritygroup</code> </p>
     */
    inline const Aws::String& GetDBSecurityGroupName() const { return m_dBSecurityGroupName; }
    inline bool DBSecurityGroupNameHasBeenSet() const { return m_dBSecurityGroupNameHasBeenSet; }
    template<typename DBSecurityGroupNameT = Aws::String>
    void SetDBSecurityGroupName(DBSecurityGroupNameT&& value) { m_dBSecurityGroupNameHasBeenSet = true; m_dBSecurityGroupName = std::forward<DBSecurityGroupNameT>(value); }
    template<typename DBSecurityGroupNameT = Aws::String>
    CreateDBSecurityGroupRequest& WithDBSecurityGroupName(DBSecurityGroupNameT&& value) { SetDBSecurityGroupName(std::forward<DBSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the DB security group.</p>
     */
    inline const Aws::String& GetDBSecurityGroupDescription() const { return m_dBSecurityGroupDescription; }
    inline bool DBSecurityGroupDescriptionHasBeenSet() const { return m_dBSecurityGroupDescriptionHasBeenSet; }
    template<typename DBSecurityGroupDescriptionT = Aws::String>
    void SetDBSecurityGroupDescription(DBSecurityGroupDescriptionT&& value) { m_dBSecurityGroupDescriptionHasBeenSet = true; m_dBSecurityGroupDescription = std::forward<DBSecurityGroupDescriptionT>(value); }
    template<typename DBSecurityGroupDescriptionT = Aws::String>
    CreateDBSecurityGroupRequest& WithDBSecurityGroupDescription(DBSecurityGroupDescriptionT&& value) { SetDBSecurityGroupDescription(std::forward<DBSecurityGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the DB security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBSecurityGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBSecurityGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
