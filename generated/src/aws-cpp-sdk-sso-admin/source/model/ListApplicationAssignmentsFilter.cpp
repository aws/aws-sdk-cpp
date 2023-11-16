/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListApplicationAssignmentsFilter.h>
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

ListApplicationAssignmentsFilter::ListApplicationAssignmentsFilter() : 
    m_applicationArnHasBeenSet(false)
{
}

ListApplicationAssignmentsFilter::ListApplicationAssignmentsFilter(JsonView jsonValue) : 
    m_applicationArnHasBeenSet(false)
{
  *this = jsonValue;
}

ListApplicationAssignmentsFilter& ListApplicationAssignmentsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ListApplicationAssignmentsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
