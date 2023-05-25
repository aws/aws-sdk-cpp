/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoSelectorPid.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

VideoSelectorPid::VideoSelectorPid() : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
}

VideoSelectorPid::VideoSelectorPid(JsonView jsonValue) : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelectorPid& VideoSelectorPid::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoSelectorPid::Jsonize() const
{
  JsonValue payload;

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
