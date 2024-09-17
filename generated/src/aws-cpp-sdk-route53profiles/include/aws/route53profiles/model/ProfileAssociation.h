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
   * <p> An association between a Route 53 Profile and a VPC. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/ProfileAssociation">AWS
   * API Reference</a></p>
   */
  class ProfileAssociation
  {
  public:
    AWS_ROUTE53PROFILES_API ProfileAssociation();
    AWS_ROUTE53PROFILES_API ProfileAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API ProfileAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The date and time that the Profile association was created, in Unix time
     * format and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ProfileAssociation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ProfileAssociation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the Profile association. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProfileAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProfileAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProfileAssociation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the Profile association was modified, in Unix time
     * format and Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetModificationTime() const{ return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    inline void SetModificationTime(const Aws::Utils::DateTime& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }
    inline void SetModificationTime(Aws::Utils::DateTime&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }
    inline ProfileAssociation& WithModificationTime(const Aws::Utils::DateTime& value) { SetModificationTime(value); return *this;}
    inline ProfileAssociation& WithModificationTime(Aws::Utils::DateTime&& value) { SetModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the Profile association. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProfileAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProfileAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProfileAssociation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Amazon Web Services account ID of the Profile association owner. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline ProfileAssociation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline ProfileAssociation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline ProfileAssociation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> ID of the Profile. </p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline ProfileAssociation& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline ProfileAssociation& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline ProfileAssociation& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the VPC. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ProfileAssociation& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ProfileAssociation& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ProfileAssociation& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Status of the Profile association. </p>
     */
    inline const ProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProfileAssociation& WithStatus(const ProfileStatus& value) { SetStatus(value); return *this;}
    inline ProfileAssociation& WithStatus(ProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional information about the Profile association. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProfileAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProfileAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProfileAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
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

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
