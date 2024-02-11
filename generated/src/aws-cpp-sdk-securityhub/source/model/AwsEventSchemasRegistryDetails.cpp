/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventSchemasRegistryDetails.h>
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

AwsEventSchemasRegistryDetails::AwsEventSchemasRegistryDetails() : 
    m_descriptionHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_registryNameHasBeenSet(false)
{
}

AwsEventSchemasRegistryDetails::AwsEventSchemasRegistryDetails(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_registryNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventSchemasRegistryDetails& AwsEventSchemasRegistryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

    m_registryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventSchemasRegistryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("RegistryArn", m_registryArn);

  }

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
