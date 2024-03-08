/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDmsEndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDmsEndpointDetails::AwsDmsEndpointDetails() : 
    m_certificateArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointIdentifierHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_extraConnectionAttributesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_sslModeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

AwsDmsEndpointDetails::AwsDmsEndpointDetails(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointIdentifierHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_extraConnectionAttributesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_sslModeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDmsEndpointDetails& AwsDmsEndpointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointIdentifier"))
  {
    m_endpointIdentifier = jsonValue.GetString("EndpointIdentifier");

    m_endpointIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = jsonValue.GetString("EndpointType");

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineName"))
  {
    m_engineName = jsonValue.GetString("EngineName");

    m_engineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraConnectionAttributes"))
  {
    m_extraConnectionAttributes = jsonValue.GetString("ExtraConnectionAttributes");

    m_extraConnectionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslMode"))
  {
    m_sslMode = jsonValue.GetString("SslMode");

    m_sslModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDmsEndpointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_endpointIdentifierHasBeenSet)
  {
   payload.WithString("EndpointIdentifier", m_endpointIdentifier);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", m_endpointType);

  }

  if(m_engineNameHasBeenSet)
  {
   payload.WithString("EngineName", m_engineName);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_extraConnectionAttributesHasBeenSet)
  {
   payload.WithString("ExtraConnectionAttributes", m_extraConnectionAttributes);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_sslModeHasBeenSet)
  {
   payload.WithString("SslMode", m_sslMode);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
