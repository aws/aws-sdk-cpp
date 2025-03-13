/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateClusterSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateClusterSecurityGroupRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateClusterSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClusterSecurityGroup"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name for the security group. Amazon Redshift stores the value as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain no more than
     * 255 alphanumeric characters or hyphens.</p> </li> <li> <p>Must not be
     * "Default".</p> </li> <li> <p>Must be unique for all security groups that are
     * created by your Amazon Web Services account.</p> </li> </ul> <p>Example:
     * <code>examplesecuritygroup</code> </p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const { return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    void SetClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::forward<ClusterSecurityGroupNameT>(value); }
    template<typename ClusterSecurityGroupNameT = Aws::String>
    CreateClusterSecurityGroupRequest& WithClusterSecurityGroupName(ClusterSecurityGroupNameT&& value) { SetClusterSecurityGroupName(std::forward<ClusterSecurityGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the security group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateClusterSecurityGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateClusterSecurityGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateClusterSecurityGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
