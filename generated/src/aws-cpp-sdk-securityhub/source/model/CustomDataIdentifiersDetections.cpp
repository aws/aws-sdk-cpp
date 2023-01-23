/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CustomDataIdentifiersDetections.h>
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

CustomDataIdentifiersDetections::CustomDataIdentifiersDetections() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
}

CustomDataIdentifiersDetections::CustomDataIdentifiersDetections(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_occurrencesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDataIdentifiersDetections& CustomDataIdentifiersDetections::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInt64("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Occurrences"))
  {
    m_occurrences = jsonValue.GetObject("Occurrences");

    m_occurrencesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDataIdentifiersDetections::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("Count", m_count);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_occurrencesHasBeenSet)
  {
   payload.WithObject("Occurrences", m_occurrences.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
