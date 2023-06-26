/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of IP access settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/IpAccessSettingsSummary">AWS
   * API Reference</a></p>
   */
  class IpAccessSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API IpAccessSettingsSummary();
    AWS_WORKSPACESWEB_API IpAccessSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IpAccessSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The description of the IP access settings.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = value; }

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::move(value); }

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn.assign(value); }

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of IP access settings.</p>
     */
    inline IpAccessSettingsSummary& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
