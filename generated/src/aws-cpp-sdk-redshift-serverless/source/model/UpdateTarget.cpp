/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/UpdateTarget.h>
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

UpdateTarget::UpdateTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateTarget& UpdateTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trackName"))
  {
    m_trackName = jsonValue.GetString("trackName");
    m_trackNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workgroupVersion"))
  {
    m_workgroupVersion = jsonValue.GetString("workgroupVersion");
    m_workgroupVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTarget::Jsonize() const
{
  JsonValue payload;

  if(m_trackNameHasBeenSet)
  {
   payload.WithString("trackName", m_trackName);

  }

  if(m_workgroupVersionHasBeenSet)
  {
   payload.WithString("workgroupVersion", m_workgroupVersion);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
