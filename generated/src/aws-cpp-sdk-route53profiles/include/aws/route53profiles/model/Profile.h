/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53profiles/model/ShareStatus.h>
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
   * <p> A complex type that includes settings for a Route 53 Profile. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53profiles-2018-05-10/Profile">AWS
   * API Reference</a></p>
   */
  class Profile
  {
  public:
    AWS_ROUTE53PROFILES_API Profile();
    AWS_ROUTE53PROFILES_API Profile(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API Profile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53PROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline Profile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline Profile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Profile. </p>
     */
    inline Profile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline Profile& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline Profile& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The <code>ClientToken</code> value that was assigned when the Profile was
     * created. </p>
     */
    inline Profile& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline Profile& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The date and time that the Profile was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline Profile& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> ID of the Profile. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> ID of the Profile. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> ID of the Profile. </p>
     */
    inline Profile& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> ID of the Profile. </p>
     */
    inline Profile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> ID of the Profile. </p>
     */
    inline Profile& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::Utils::DateTime& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(const Aws::Utils::DateTime& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetModificationTime(Aws::Utils::DateTime&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline Profile& WithModificationTime(const Aws::Utils::DateTime& value) { SetModificationTime(value); return *this;}

    /**
     * <p> The date and time that the Profile was modified, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline Profile& WithModificationTime(Aws::Utils::DateTime&& value) { SetModificationTime(std::move(value)); return *this;}


    /**
     * <p> Name of the Profile. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the Profile. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the Profile. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the Profile. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the Profile. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the Profile. </p>
     */
    inline Profile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the Profile. </p>
     */
    inline Profile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the Profile. </p>
     */
    inline Profile& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline Profile& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline Profile& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p> Amazon Web Services account ID of the Profile owner. </p>
     */
    inline Profile& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }

    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }

    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }

    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }

    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline Profile& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}

    /**
     * <p> Sharing status for the Profile. </p>
     */
    inline Profile& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}


    /**
     * <p> The status for the Profile. </p>
     */
    inline const ProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status for the Profile. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status for the Profile. </p>
     */
    inline void SetStatus(const ProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status for the Profile. </p>
     */
    inline void SetStatus(ProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status for the Profile. </p>
     */
    inline Profile& WithStatus(const ProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status for the Profile. </p>
     */
    inline Profile& WithStatus(ProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline Profile& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline Profile& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Status message that includes additiona information about the Profile. </p>
     */
    inline Profile& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    ProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
