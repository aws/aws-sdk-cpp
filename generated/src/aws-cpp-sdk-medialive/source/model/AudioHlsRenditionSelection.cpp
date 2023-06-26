/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioHlsRenditionSelection.h>
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

AudioHlsRenditionSelection::AudioHlsRenditionSelection() : 
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AudioHlsRenditionSelection::AudioHlsRenditionSelection(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AudioHlsRenditionSelection& AudioHlsRenditionSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioHlsRenditionSelection::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
