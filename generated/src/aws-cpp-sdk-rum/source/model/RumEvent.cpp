/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/RumEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

RumEvent::RumEvent() : 
    m_detailsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

RumEvent::RumEvent(JsonView jsonValue) : 
    m_detailsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RumEvent& RumEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetString("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RumEvent::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("metadata", m_metadata);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
