/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of user groups that exist in your OIDC Identity Provider (IdP). One to
   * ten groups can be used to create a single private work team. When you add a user
   * group to the list of <code>Groups</code>, you can add that user group to one or
   * more private work teams. If you add a user group to a private work team, all
   * workers in that user group are added to the work team.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OidcMemberDefinition">AWS
   * API Reference</a></p>
   */
  class OidcMemberDefinition
  {
  public:
    AWS_SAGEMAKER_API OidcMemberDefinition() = default;
    AWS_SAGEMAKER_API OidcMemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OidcMemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    OidcMemberDefinition& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    OidcMemberDefinition& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
