/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileInitializationActiveDirectory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

LaunchProfileInitializationActiveDirectory::LaunchProfileInitializationActiveDirectory() : 
    m_computerAttributesHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_dnsIpAddressesHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_studioComponentNameHasBeenSet(false)
{
}

LaunchProfileInitializationActiveDirectory::LaunchProfileInitializationActiveDirectory(JsonView jsonValue) : 
    m_computerAttributesHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_dnsIpAddressesHasBeenSet(false),
    m_organizationalUnitDistinguishedNameHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_studioComponentNameHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchProfileInitializationActiveDirectory& LaunchProfileInitializationActiveDirectory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computerAttributes"))
  {
    Aws::Utils::Array<JsonView> computerAttributesJsonList = jsonValue.GetArray("computerAttributes");
    for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
    {
      m_computerAttributes.push_back(computerAttributesJsonList[computerAttributesIndex].AsObject());
    }
    m_computerAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryId"))
  {
    m_directoryId = jsonValue.GetString("directoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryName"))
  {
    m_directoryName = jsonValue.GetString("directoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsIpAddresses"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddressesJsonList = jsonValue.GetArray("dnsIpAddresses");
    for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
    {
      m_dnsIpAddresses.push_back(dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString());
    }
    m_dnsIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("organizationalUnitDistinguishedName"))
  {
    m_organizationalUnitDistinguishedName = jsonValue.GetString("organizationalUnitDistinguishedName");

    m_organizationalUnitDistinguishedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentId"))
  {
    m_studioComponentId = jsonValue.GetString("studioComponentId");

    m_studioComponentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentName"))
  {
    m_studioComponentName = jsonValue.GetString("studioComponentName");

    m_studioComponentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchProfileInitializationActiveDirectory::Jsonize() const
{
  JsonValue payload;

  if(m_computerAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computerAttributesJsonList(m_computerAttributes.size());
   for(unsigned computerAttributesIndex = 0; computerAttributesIndex < computerAttributesJsonList.GetLength(); ++computerAttributesIndex)
   {
     computerAttributesJsonList[computerAttributesIndex].AsObject(m_computerAttributes[computerAttributesIndex].Jsonize());
   }
   payload.WithArray("computerAttributes", std::move(computerAttributesJsonList));

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("directoryId", m_directoryId);

  }

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("directoryName", m_directoryName);

  }

  if(m_dnsIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddressesJsonList(m_dnsIpAddresses.size());
   for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
   {
     dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString(m_dnsIpAddresses[dnsIpAddressesIndex]);
   }
   payload.WithArray("dnsIpAddresses", std::move(dnsIpAddressesJsonList));

  }

  if(m_organizationalUnitDistinguishedNameHasBeenSet)
  {
   payload.WithString("organizationalUnitDistinguishedName", m_organizationalUnitDistinguishedName);

  }

  if(m_studioComponentIdHasBeenSet)
  {
   payload.WithString("studioComponentId", m_studioComponentId);

  }

  if(m_studioComponentNameHasBeenSet)
  {
   payload.WithString("studioComponentName", m_studioComponentName);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
