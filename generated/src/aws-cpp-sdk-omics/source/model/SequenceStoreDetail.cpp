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

SequenceStoreDetail::SequenceStoreDetail(JsonView jsonValue)
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");
    m_sseConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fallbackLocation"))
  {
    m_fallbackLocation = jsonValue.GetString("fallbackLocation");
    m_fallbackLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eTagAlgorithmFamily"))
  {
    m_eTagAlgorithmFamily = ETagAlgorithmFamilyMapper::GetETagAlgorithmFamilyForName(jsonValue.GetString("eTagAlgorithmFamily"));
    m_eTagAlgorithmFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SequenceStoreStatusMapper::GetSequenceStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_fallbackLocationHasBeenSet)
  {
   payload.WithString("fallbackLocation", m_fallbackLocation);

  }

  if(m_eTagAlgorithmFamilyHasBeenSet)
  {
   payload.WithString("eTagAlgorithmFamily", ETagAlgorithmFamilyMapper::GetNameForETagAlgorithmFamily(m_eTagAlgorithmFamily));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SequenceStoreStatusMapper::GetNameForSequenceStoreStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
