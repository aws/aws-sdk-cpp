/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/ActiveDirectoryComputerAttribute.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The launch profile initialization Active Directory contains information
   * required for the launch profile to connect to the Active
   * Directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfileInitializationActiveDirectory">AWS
   * API Reference</a></p>
   */
  class LaunchProfileInitializationActiveDirectory
  {
  public:
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationActiveDirectory();
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationActiveDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationActiveDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline const Aws::Vector<ActiveDirectoryComputerAttribute>& GetComputerAttributes() const{ return m_computerAttributes; }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline void SetComputerAttributes(const Aws::Vector<ActiveDirectoryComputerAttribute>& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = value; }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline void SetComputerAttributes(Aws::Vector<ActiveDirectoryComputerAttribute>&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::move(value); }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithComputerAttributes(const Aws::Vector<ActiveDirectoryComputerAttribute>& value) { SetComputerAttributes(value); return *this;}

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithComputerAttributes(Aws::Vector<ActiveDirectoryComputerAttribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& AddComputerAttributes(const ActiveDirectoryComputerAttribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& AddComputerAttributes(ActiveDirectoryComputerAttribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this launch profile.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The directory name.</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The directory name.</p>
     */
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    /**
     * <p>The directory name.</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The directory name.</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The directory name.</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The directory name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The directory name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The directory name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


    /**
     * <p>The DNS IP address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const{ return m_dnsIpAddresses; }

    /**
     * <p>The DNS IP address.</p>
     */
    inline bool DnsIpAddressesHasBeenSet() const { return m_dnsIpAddressesHasBeenSet; }

    /**
     * <p>The DNS IP address.</p>
     */
    inline void SetDnsIpAddresses(const Aws::Vector<Aws::String>& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = value; }

    /**
     * <p>The DNS IP address.</p>
     */
    inline void SetDnsIpAddresses(Aws::Vector<Aws::String>&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::move(value); }

    /**
     * <p>The DNS IP address.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDnsIpAddresses(const Aws::Vector<Aws::String>& value) { SetDnsIpAddresses(value); return *this;}

    /**
     * <p>The DNS IP address.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithDnsIpAddresses(Aws::Vector<Aws::String>&& value) { SetDnsIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The DNS IP address.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& AddDnsIpAddresses(const Aws::String& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }

    /**
     * <p>The DNS IP address.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& AddDnsIpAddresses(Aws::String&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The DNS IP address.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& AddDnsIpAddresses(const char* value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }


    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>The name for the organizational unit distinguished name.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}


    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}


    /**
     * <p>The name for the studio component.</p>
     */
    inline const Aws::String& GetStudioComponentName() const{ return m_studioComponentName; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline bool StudioComponentNameHasBeenSet() const { return m_studioComponentNameHasBeenSet; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(const Aws::String& value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName = value; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(Aws::String&& value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName = std::move(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(const char* value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName.assign(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentName(const Aws::String& value) { SetStudioComponentName(value); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentName(Aws::String&& value) { SetStudioComponentName(std::move(value)); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationActiveDirectory& WithStudioComponentName(const char* value) { SetStudioComponentName(value); return *this;}

  private:

    Aws::Vector<ActiveDirectoryComputerAttribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet = false;

    Aws::String m_studioComponentName;
    bool m_studioComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
