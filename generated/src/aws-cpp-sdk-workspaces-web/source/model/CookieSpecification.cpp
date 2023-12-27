/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CookieSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

CookieSpecification::CookieSpecification() : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CookieSpecification::CookieSpecification(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

CookieSpecification& CookieSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue CookieSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
