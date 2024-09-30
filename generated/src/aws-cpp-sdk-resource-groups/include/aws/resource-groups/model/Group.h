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
    AWS_RESOURCEGROUPS_API Group();
    AWS_RESOURCEGROUPS_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }
    inline Group& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline Group& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline Group& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Group& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Group& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Group& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the resource group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Group& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Group& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Group& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The critical rank of the application group on a scale of 1 to 10, with a rank
     * of 1 being the most critical, and a rank of 10 being least critical.</p>
     */
    inline int GetCriticality() const{ return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline Group& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name, email address or other identifier for the person or group who is
     * considered as the owner of this application group within your organization. </p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Group& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Group& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Group& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group, which you can change at any time. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Group& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Group& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Group& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag that defines the application group membership. This tag is only
     * supported for application groups. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetApplicationTag() const{ return m_applicationTag; }
    inline bool ApplicationTagHasBeenSet() const { return m_applicationTagHasBeenSet; }
    inline void SetApplicationTag(const Aws::Map<Aws::String, Aws::String>& value) { m_applicationTagHasBeenSet = true; m_applicationTag = value; }
    inline void SetApplicationTag(Aws::Map<Aws::String, Aws::String>&& value) { m_applicationTagHasBeenSet = true; m_applicationTag = std::move(value); }
    inline Group& WithApplicationTag(const Aws::Map<Aws::String, Aws::String>& value) { SetApplicationTag(value); return *this;}
    inline Group& WithApplicationTag(Aws::Map<Aws::String, Aws::String>&& value) { SetApplicationTag(std::move(value)); return *this;}
    inline Group& AddApplicationTag(const Aws::String& key, const Aws::String& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, value); return *this; }
    inline Group& AddApplicationTag(Aws::String&& key, const Aws::String& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), value); return *this; }
    inline Group& AddApplicationTag(const Aws::String& key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, std::move(value)); return *this; }
    inline Group& AddApplicationTag(Aws::String&& key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), std::move(value)); return *this; }
    inline Group& AddApplicationTag(const char* key, Aws::String&& value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, std::move(value)); return *this; }
    inline Group& AddApplicationTag(Aws::String&& key, const char* value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(std::move(key), value); return *this; }
    inline Group& AddApplicationTag(const char* key, const char* value) { m_applicationTagHasBeenSet = true; m_applicationTag.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_criticality;
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
