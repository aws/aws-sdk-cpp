/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53profiles/model/ProfileStatus.h>
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
namespace Route53Profiles
{
namespace Model
{

  /**
   * <p> The association between a Route 53 Profile and resources. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ProfileResourceAssociation">AWS
   * API Reference</a></p>
   */
  class ProfileResourceAssociation
  {
  public:
    AWS_ROUTE53PROFILES_API ProfileResourceAssociation();
    AWS_ROUTE53PROFILES_API ProfileResourceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API ProfileResourceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline ProfileResourceAssociation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The date and time that the Profile resource association was created, in Unix
     * time format and Coordinated Universal Time (UTC). </p>
     */
    inline ProfileResourceAssociation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> ID of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(const Aws::Utils::DateTime& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(Aws::Utils::DateTime&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline ProfileResourceAssociation& WithModificationTime(const Aws::Utils::DateTime& value) { SetModificationTime(value); return *this;}

    /**
     * <p> The date and time that the Profile resource association was modified, in
     * Unix time format and Coordinated Universal Time (UTC). </p>
     */
    inline ProfileResourceAssociation& WithModificationTime(Aws::Utils::DateTime&& value) { SetModificationTime(std::move(value)); return *this;}


    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline ProfileResourceAssociation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline ProfileResourceAssociation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p> Amazon Web Services account ID of the Profile resource association owner.
     * </p>
     */
    inline ProfileResourceAssociation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline ProfileResourceAssociation& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline ProfileResourceAssociation& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p> Profile ID of the Profile that the resources are associated with. </p>
     */
    inline ProfileResourceAssociation& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline ProfileResourceAssociation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline ProfileResourceAssociation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the resource association. </p>
     */
    inline ProfileResourceAssociation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline const Aws::String& GetResourceProperties() const{ return m_resourceProperties; }

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline bool ResourcePropertiesHasBeenSet() const { return m_resourcePropertiesHasBeenSet; }

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline void SetResourceProperties(const Aws::String& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = value; }

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline void SetResourceProperties(Aws::String&& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = std::move(value); }

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline void SetResourceProperties(const char* value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties.assign(value); }

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline ProfileResourceAssociation& WithResourceProperties(const Aws::String& value) { SetResourceProperties(value); return *this;}

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline ProfileResourceAssociation& WithResourceProperties(Aws::String&& value) { SetResourceProperties(std::move(value)); return *this;}

    /**
     * <p> If the DNS resource is a DNS Firewall rule group, this indicates the
     * priority. </p>
     */
    inline ProfileResourceAssociation& WithResourceProperties(const char* value) { SetResourceProperties(value); return *this;}


    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline ProfileResourceAssociation& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline ProfileResourceAssociation& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p> Resource type, such as a private hosted zone, or DNS Firewall rule group.
     * </p>
     */
    inline ProfileResourceAssociation& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline const ProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline void SetStatus(const ProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline void SetStatus(ProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithStatus(const ProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithStatus(ProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Additional information about the Profile resource association. </p>
     */
    inline ProfileResourceAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceProperties;
    bool m_resourcePropertiesHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
