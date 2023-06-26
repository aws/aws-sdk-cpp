/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/Segment.h>
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

Segment::Segment() : 
    m_idHasBeenSet(false),
    m_documentHasBeenSet(false)
{
}

Segment::Segment(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_documentHasBeenSet(false)
{
  *this = jsonValue;
}

Segment& Segment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Document"))
  {
    m_document = jsonValue.GetString("Document");

    m_documentHasBeenSet = true;
  }

  return *this;
}

JsonValue Segment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("Document", m_document);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
