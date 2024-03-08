/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/InvalidRequestRegionException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

InvalidRequestRegionException::InvalidRequestRegionException() : 
    m_errorHasBeenSet(false),
    m_error_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

InvalidRequestRegionException::InvalidRequestRegionException(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_error_descriptionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestRegionException& InvalidRequestRegionException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error_description"))
  {
    m_error_description = jsonValue.GetString("error_description");

    m_error_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestRegionException::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_error_descriptionHasBeenSet)
  {
   payload.WithString("error_description", m_error_description);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
