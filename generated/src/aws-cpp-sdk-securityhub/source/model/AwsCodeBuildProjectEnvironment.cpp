/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectEnvironment.h>
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

AwsCodeBuildProjectEnvironment::AwsCodeBuildProjectEnvironment() : 
    m_certificateHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_privilegedMode(false),
    m_privilegedModeHasBeenSet(false),
    m_imagePullCredentialsTypeHasBeenSet(false),
    m_registryCredentialHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsCodeBuildProjectEnvironment::AwsCodeBuildProjectEnvironment(JsonView jsonValue) : 
    m_certificateHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_privilegedMode(false),
    m_privilegedModeHasBeenSet(false),
    m_imagePullCredentialsTypeHasBeenSet(false),
    m_registryCredentialHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectEnvironment& AwsCodeBuildProjectEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentVariables"))
  {
    Aws::Utils::Array<JsonView> environmentVariablesJsonList = jsonValue.GetArray("EnvironmentVariables");
    for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
    {
      m_environmentVariables.push_back(environmentVariablesJsonList[environmentVariablesIndex].AsObject());
    }
    m_environmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivilegedMode"))
  {
    m_privilegedMode = jsonValue.GetBool("PrivilegedMode");

    m_privilegedModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImagePullCredentialsType"))
  {
    m_imagePullCredentialsType = jsonValue.GetString("ImagePullCredentialsType");

    m_imagePullCredentialsTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryCredential"))
  {
    m_registryCredential = jsonValue.GetObject("RegistryCredential");

    m_registryCredentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_environmentVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
   for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
   {
     environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
   }
   payload.WithArray("EnvironmentVariables", std::move(environmentVariablesJsonList));

  }

  if(m_privilegedModeHasBeenSet)
  {
   payload.WithBool("PrivilegedMode", m_privilegedMode);

  }

  if(m_imagePullCredentialsTypeHasBeenSet)
  {
   payload.WithString("ImagePullCredentialsType", m_imagePullCredentialsType);

  }

  if(m_registryCredentialHasBeenSet)
  {
   payload.WithObject("RegistryCredential", m_registryCredential.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
