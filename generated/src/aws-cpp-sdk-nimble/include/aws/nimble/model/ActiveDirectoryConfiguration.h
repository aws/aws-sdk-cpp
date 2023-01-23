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
   * <p>The configuration for a Directory Service for Microsoft Active Directory
   * studio resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API ActiveDirectoryConfiguration();
    AWS_NIMBLESTUDIO_API ActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API ActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ActiveDirectoryConfiguration& WithComputerAttributes(const Aws::Vector<ActiveDirectoryComputerAttribute>& value) { SetComputerAttributes(value); return *this;}

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& WithComputerAttributes(Aws::Vector<ActiveDirectoryComputerAttribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& AddComputerAttributes(const ActiveDirectoryComputerAttribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }

    /**
     * <p>A collection of custom attributes for an Active Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& AddComputerAttributes(ActiveDirectoryComputerAttribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline ActiveDirectoryConfiguration& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline ActiveDirectoryConfiguration& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The directory ID of the Directory Service for Microsoft Active Directory to
     * access using this studio component.</p>
     */
    inline ActiveDirectoryConfiguration& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>The distinguished name (DN) and organizational unit (OU) of an Active
     * Directory computer.</p>
     */
    inline ActiveDirectoryConfiguration& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

  private:

    Aws::Vector<ActiveDirectoryComputerAttribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
