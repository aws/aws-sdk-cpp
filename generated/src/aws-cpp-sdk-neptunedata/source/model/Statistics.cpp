/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/Statistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

Statistics::Statistics() : 
    m_autoCompute(false),
    m_autoComputeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_statisticsIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_signatureInfoHasBeenSet(false)
{
}

Statistics::Statistics(JsonView jsonValue) : 
    m_autoCompute(false),
    m_autoComputeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_statisticsIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_signatureInfoHasBeenSet(false)
{
  *this = jsonValue;
}

Statistics& Statistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoCompute"))
  {
    m_autoCompute = jsonValue.GetBool("autoCompute");

    m_autoComputeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statisticsId"))
  {
    m_statisticsId = jsonValue.GetString("statisticsId");

    m_statisticsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetString("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("note"))
  {
    m_note = jsonValue.GetString("note");

    m_noteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureInfo"))
  {
    m_signatureInfo = jsonValue.GetObject("signatureInfo");

    m_signatureInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue Statistics::Jsonize() const
{
  JsonValue payload;

  if(m_autoComputeHasBeenSet)
  {
   payload.WithBool("autoCompute", m_autoCompute);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_statisticsIdHasBeenSet)
  {
   payload.WithString("statisticsId", m_statisticsId);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithString("date", m_date.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_noteHasBeenSet)
  {
   payload.WithString("note", m_note);

  }

  if(m_signatureInfoHasBeenSet)
  {
   payload.WithObject("signatureInfo", m_signatureInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
