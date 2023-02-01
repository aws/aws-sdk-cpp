/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceStoreDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SequenceStoreDetail::SequenceStoreDetail() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sseConfigHasBeenSet(false)
{
}

SequenceStoreDetail::SequenceStoreDetail(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sseConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SequenceStoreDetail& SequenceStoreDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");

    m_sseConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SequenceStoreDetail::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
