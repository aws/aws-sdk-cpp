/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A resource group that contains Amazon Web Services resources. You can assign
   * resources to the group by associating either of the following elements with the
   * group:</p> <ul> <li> <p> <a>ResourceQuery</a> - Use a resource query to specify
   * a set of tag keys and values. All resources in the same Amazon Web Services
   * Region and Amazon Web Services account that have those keys with the same values
   * are included in the group. You can add a resource query when you create the
   * group, or later by using the <a>PutGroupConfiguration</a> operation.</p> </li>
   * <li> <p> <a>GroupConfiguration</a> - Use a service configuration to associate
   * the group with an Amazon Web Services service. The configuration specifies which
   * resource types can be included in the group.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_RESOURCEGROUPS_API Group() = default;
    AWS_RESOURCEGROUPS_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline const Aws::String& GetGroupArn() const { return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    template<typename GroupArnT = Aws::String>
    void SetGroupArn(GroupArnT&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::forward<GroupArnT>(value); }
    template<typename GroupArnT = Aws::String>
    Group& WithGroupArn(GroupArnT&& value) { SetGroupArn(std::forward<GroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Group& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Group& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The critical rank of the application group on a scale of 1 to 10, with a rank
     * of 1 being the most critical, and a rank of 10 being least critical.</p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline Group& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name, email address or other identifier for the person or group who is
     * considered as the owner of this application group within your organization. </p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Group& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group, which you can change at any time. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Group& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag that defines the application group membership. This tag is only
     * supported for application groups. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetApplicationTag() const { return m_applicationTag; }
    inline bool ApplicationTagHasBeenSet() const { return m_applicationTagHasBeenSet; }
    template<typename ApplicationTagT = Aws::Map<Aws::String, Aws::String>>
    void SetApplicationTag(ApplicationTagT&& value) { m_applicationTagHasBeenSet = true; m_applicationTag = std::forward<ApplicationTagT>(value); }
    template<typename ApplicationTagT = Aws::Map<Aws::String, Aws::String>>
    Group& WithApplicationTag(ApplicationTagT&& value) { SetApplicationTag(std::forward<ApplicationTagT>(value)); return *this;}
    template<typename ApplicationTagKeyT = Aws::String, typename ApplicationTagValueT = Aws::String>
    Group& AddApplicationTag(ApplicationTagKeyT&& key, ApplicationTagValueT&& value) {
      m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::forward<ApplicationTagKeyT>(key), std::forward<ApplicationTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_criticality{0};
    bool m_criticalityHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_applicationTag;
    bool m_applicationTagHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
