/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceDrift.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ResourceDrift::ResourceDrift() : 
    m_appArnHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_diffType(DifferenceType::NOT_SET),
    m_diffTypeHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

ResourceDrift::ResourceDrift(JsonView jsonValue) : 
    m_appArnHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_diffType(DifferenceType::NOT_SET),
    m_diffTypeHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDrift& ResourceDrift::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

    m_appArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

    m_appVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diffType"))
  {
    m_diffType = DifferenceTypeMapper::GetDifferenceTypeForName(jsonValue.GetString("diffType"));

    m_diffTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetObject("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDrift::Jsonize() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  if(m_diffTypeHasBeenSet)
  {
   payload.WithString("diffType", DifferenceTypeMapper::GetNameForDifferenceType(m_diffType));
  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("resourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
