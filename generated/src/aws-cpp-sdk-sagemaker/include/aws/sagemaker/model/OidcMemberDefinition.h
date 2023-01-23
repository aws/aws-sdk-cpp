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
    AWS_SAGEMAKER_API OidcMemberDefinition();
    AWS_SAGEMAKER_API OidcMemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OidcMemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline OidcMemberDefinition& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline OidcMemberDefinition& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline OidcMemberDefinition& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline OidcMemberDefinition& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of comma seperated strings that identifies user groups in your OIDC
     * IdP. Each user group is made up of a group of private workers.</p>
     */
    inline OidcMemberDefinition& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
