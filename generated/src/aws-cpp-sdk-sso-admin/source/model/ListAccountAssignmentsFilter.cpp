/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListAccountAssignmentsFilter.h>
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

ListAccountAssignmentsFilter::ListAccountAssignmentsFilter() : 
    m_accountIdHasBeenSet(false)
{
}

ListAccountAssignmentsFilter::ListAccountAssignmentsFilter(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListAccountAssignmentsFilter& ListAccountAssignmentsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAccountAssignmentsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
