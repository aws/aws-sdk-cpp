/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListApplicationsFilter.h>
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

ListApplicationsFilter::ListApplicationsFilter() : 
    m_applicationAccountHasBeenSet(false),
    m_applicationProviderHasBeenSet(false)
{
}

ListApplicationsFilter::ListApplicationsFilter(JsonView jsonValue) : 
    m_applicationAccountHasBeenSet(false),
    m_applicationProviderHasBeenSet(false)
{
  *this = jsonValue;
}

ListApplicationsFilter& ListApplicationsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationAccount"))
  {
    m_applicationAccount = jsonValue.GetString("ApplicationAccount");

    m_applicationAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationProvider"))
  {
    m_applicationProvider = jsonValue.GetString("ApplicationProvider");

    m_applicationProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue ListApplicationsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_applicationAccountHasBeenSet)
  {
   payload.WithString("ApplicationAccount", m_applicationAccount);

  }

  if(m_applicationProviderHasBeenSet)
  {
   payload.WithString("ApplicationProvider", m_applicationProvider);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
