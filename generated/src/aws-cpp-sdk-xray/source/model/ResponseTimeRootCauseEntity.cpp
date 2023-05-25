/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ResponseTimeRootCauseEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ResponseTimeRootCauseEntity::ResponseTimeRootCauseEntity() : 
    m_nameHasBeenSet(false),
    m_coverage(0.0),
    m_coverageHasBeenSet(false),
    m_remote(false),
    m_remoteHasBeenSet(false)
{
}

ResponseTimeRootCauseEntity::ResponseTimeRootCauseEntity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_coverage(0.0),
    m_coverageHasBeenSet(false),
    m_remote(false),
    m_remoteHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseTimeRootCauseEntity& ResponseTimeRootCauseEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Coverage"))
  {
    m_coverage = jsonValue.GetDouble("Coverage");

    m_coverageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Remote"))
  {
    m_remote = jsonValue.GetBool("Remote");

    m_remoteHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseTimeRootCauseEntity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_coverageHasBeenSet)
  {
   payload.WithDouble("Coverage", m_coverage);

  }

  if(m_remoteHasBeenSet)
  {
   payload.WithBool("Remote", m_remote);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
