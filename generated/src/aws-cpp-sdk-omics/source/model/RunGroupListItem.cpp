/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunGroupListItem.h>
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

RunGroupListItem::RunGroupListItem() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_maxCpus(0),
    m_maxCpusHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxRuns(0),
    m_maxRunsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

RunGroupListItem::RunGroupListItem(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_maxCpus(0),
    m_maxCpusHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxRuns(0),
    m_maxRunsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

RunGroupListItem& RunGroupListItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCpus"))
  {
    m_maxCpus = jsonValue.GetInteger("maxCpus");

    m_maxCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxDuration"))
  {
    m_maxDuration = jsonValue.GetInteger("maxDuration");

    m_maxDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxRuns"))
  {
    m_maxRuns = jsonValue.GetInteger("maxRuns");

    m_maxRunsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue RunGroupListItem::Jsonize() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_maxCpusHasBeenSet)
  {
   payload.WithInteger("maxCpus", m_maxCpus);

  }

  if(m_maxDurationHasBeenSet)
  {
   payload.WithInteger("maxDuration", m_maxDuration);

  }

  if(m_maxRunsHasBeenSet)
  {
   payload.WithInteger("maxRuns", m_maxRuns);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
