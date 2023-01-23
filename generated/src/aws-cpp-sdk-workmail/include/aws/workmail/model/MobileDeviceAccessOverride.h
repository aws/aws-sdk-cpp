/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The override object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/MobileDeviceAccessOverride">AWS
   * API Reference</a></p>
   */
  class MobileDeviceAccessOverride
  {
  public:
    AWS_WORKMAIL_API MobileDeviceAccessOverride();
    AWS_WORKMAIL_API MobileDeviceAccessOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MobileDeviceAccessOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The device to which the override applies.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device to which the override applies.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The device to which the override applies.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The device to which the override applies.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The device to which the override applies.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The device to which the override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device to which the override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device to which the override applies.</p>
     */
    inline MobileDeviceAccessOverride& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline MobileDeviceAccessOverride& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline MobileDeviceAccessOverride& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>A description of the override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the override.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline MobileDeviceAccessOverride& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline MobileDeviceAccessOverride& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline MobileDeviceAccessOverride& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date the override was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date the override was first created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date the override was first created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date the override was first created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date the override was first created.</p>
     */
    inline MobileDeviceAccessOverride& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date the override was first created.</p>
     */
    inline MobileDeviceAccessOverride& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date the override was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }

    /**
     * <p>The date the override was last modified.</p>
     */
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }

    /**
     * <p>The date the override was last modified.</p>
     */
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }

    /**
     * <p>The date the override was last modified.</p>
     */
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }

    /**
     * <p>The date the override was last modified.</p>
     */
    inline MobileDeviceAccessOverride& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}

    /**
     * <p>The date the override was last modified.</p>
     */
    inline MobileDeviceAccessOverride& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    MobileDeviceAccessRuleEffect m_effect;
    bool m_effectHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
