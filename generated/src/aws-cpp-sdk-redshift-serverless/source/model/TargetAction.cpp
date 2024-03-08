/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/TargetAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

TargetAction::TargetAction() : 
    m_createSnapshotHasBeenSet(false)
{
}

TargetAction::TargetAction(JsonView jsonValue) : 
    m_createSnapshotHasBeenSet(false)
{
  *this = jsonValue;
}

TargetAction& TargetAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createSnapshot"))
  {
    m_createSnapshot = jsonValue.GetObject("createSnapshot");

    m_createSnapshotHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetAction::Jsonize() const
{
  JsonValue payload;

  if(m_createSnapshotHasBeenSet)
  {
   payload.WithObject("createSnapshot", m_createSnapshot.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
