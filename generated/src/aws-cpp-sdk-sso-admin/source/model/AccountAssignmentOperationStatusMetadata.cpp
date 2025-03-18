﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AccountAssignmentOperationStatusMetadata.h>
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

AccountAssignmentOperationStatusMetadata::AccountAssignmentOperationStatusMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountAssignmentOperationStatusMetadata& AccountAssignmentOperationStatusMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusValuesMapper::GetStatusValuesForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAssignmentOperationStatusMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusValuesMapper::GetNameForStatusValues(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
