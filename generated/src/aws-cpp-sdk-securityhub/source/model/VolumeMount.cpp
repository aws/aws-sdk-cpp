/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/VolumeMount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

VolumeMount::VolumeMount() : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
}

VolumeMount::VolumeMount(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeMount& VolumeMount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountPath"))
  {
    m_mountPath = jsonValue.GetString("MountPath");

    m_mountPathHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeMount::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mountPathHasBeenSet)
  {
   payload.WithString("MountPath", m_mountPath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
