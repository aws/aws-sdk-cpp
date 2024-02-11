/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ApplicationProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

ApplicationProvider::ApplicationProvider() : 
    m_applicationProviderArnHasBeenSet(false),
    m_displayDataHasBeenSet(false),
    m_federationProtocol(FederationProtocol::NOT_SET),
    m_federationProtocolHasBeenSet(false),
    m_resourceServerConfigHasBeenSet(false)
{
}

ApplicationProvider::ApplicationProvider(JsonView jsonValue) : 
    m_applicationProviderArnHasBeenSet(false),
    m_displayDataHasBeenSet(false),
    m_federationProtocol(FederationProtocol::NOT_SET),
    m_federationProtocolHasBeenSet(false),
    m_resourceServerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationProvider& ApplicationProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationProviderArn"))
  {
    m_applicationProviderArn = jsonValue.GetString("ApplicationProviderArn");

    m_applicationProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayData"))
  {
    m_displayData = jsonValue.GetObject("DisplayData");

    m_displayDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FederationProtocol"))
  {
    m_federationProtocol = FederationProtocolMapper::GetFederationProtocolForName(jsonValue.GetString("FederationProtocol"));

    m_federationProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceServerConfig"))
  {
    m_resourceServerConfig = jsonValue.GetObject("ResourceServerConfig");

    m_resourceServerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationProvider::Jsonize() const
{
  JsonValue payload;

  if(m_applicationProviderArnHasBeenSet)
  {
   payload.WithString("ApplicationProviderArn", m_applicationProviderArn);

  }

  if(m_displayDataHasBeenSet)
  {
   payload.WithObject("DisplayData", m_displayData.Jsonize());

  }

  if(m_federationProtocolHasBeenSet)
  {
   payload.WithString("FederationProtocol", FederationProtocolMapper::GetNameForFederationProtocol(m_federationProtocol));
  }

  if(m_resourceServerConfigHasBeenSet)
  {
   payload.WithObject("ResourceServerConfig", m_resourceServerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
