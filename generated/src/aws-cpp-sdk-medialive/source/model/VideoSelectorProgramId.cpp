/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoSelectorProgramId.h>
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

VideoSelectorProgramId::VideoSelectorProgramId(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSelectorProgramId& VideoSelectorProgramId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("programId"))
  {
    m_programId = jsonValue.GetInteger("programId");
    m_programIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSelectorProgramId::Jsonize() const
{
  JsonValue payload;

  if(m_programIdHasBeenSet)
  {
   payload.WithInteger("programId", m_programId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
