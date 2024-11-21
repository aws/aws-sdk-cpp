/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notificationscontacts/model/EmailContactStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace NotificationsContacts
{
namespace Model
{

  /**
   * <p>An email contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/EmailContact">AWS
   * API Reference</a></p>
   */
  class EmailContact
  {
  public:
    AWS_NOTIFICATIONSCONTACTS_API EmailContact();
    AWS_NOTIFICATIONSCONTACTS_API EmailContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONSCONTACTS_API EmailContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONSCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email contact.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EmailContact& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EmailContact& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EmailContact& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the email contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EmailContact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EmailContact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EmailContact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address this email contact points to. The activation email and any
     * subscribed emails are sent here.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline EmailContact& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline EmailContact& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline EmailContact& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the email contact. Only activated email contacts receive
     * emails.</p>
     */
    inline const EmailContactStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EmailContactStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EmailContactStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EmailContact& WithStatus(const EmailContactStatus& value) { SetStatus(value); return *this;}
    inline EmailContact& WithStatus(EmailContactStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EmailContact& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EmailContact& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the resource was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline EmailContact& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline EmailContact& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    EmailContactStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
