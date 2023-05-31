/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IpRule.h>
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
   * <p>The IP access settings resource that can be associated with a web portal.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/IpAccessSettings">AWS
   * API Reference</a></p>
   */
  class IpAccessSettings
  {
  public:
    AWS_WORKSPACESWEB_API IpAccessSettings();
    AWS_WORKSPACESWEB_API IpAccessSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API IpAccessSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline IpAccessSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline IpAccessSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline IpAccessSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline IpAccessSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this IP access settings resource is associated
     * with.</p>
     */
    inline IpAccessSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


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
    inline IpAccessSettings& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date timestamp of the IP access settings.</p>
     */
    inline IpAccessSettings& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


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
    inline IpAccessSettings& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline IpAccessSettings& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IP access settings.</p>
     */
    inline IpAccessSettings& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline IpAccessSettings& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline IpAccessSettings& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> The display name of the IP access settings.</p>
     */
    inline IpAccessSettings& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = value; }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn.assign(value); }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline IpAccessSettings& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline IpAccessSettings& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline IpAccessSettings& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}


    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline const Aws::Vector<IpRule>& GetIpRules() const{ return m_ipRules; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline bool IpRulesHasBeenSet() const { return m_ipRulesHasBeenSet; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline void SetIpRules(const Aws::Vector<IpRule>& value) { m_ipRulesHasBeenSet = true; m_ipRules = value; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline void SetIpRules(Aws::Vector<IpRule>&& value) { m_ipRulesHasBeenSet = true; m_ipRules = std::move(value); }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline IpAccessSettings& WithIpRules(const Aws::Vector<IpRule>& value) { SetIpRules(value); return *this;}

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline IpAccessSettings& WithIpRules(Aws::Vector<IpRule>&& value) { SetIpRules(std::move(value)); return *this;}

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline IpAccessSettings& AddIpRules(const IpRule& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(value); return *this; }

    /**
     * <p>The IP rules of the IP access settings.</p>
     */
    inline IpAccessSettings& AddIpRules(IpRule&& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;

    Aws::Vector<IpRule> m_ipRules;
    bool m_ipRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
