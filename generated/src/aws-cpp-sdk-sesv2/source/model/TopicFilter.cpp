/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/TopicFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

TopicFilter::TopicFilter() : 
    m_topicNameHasBeenSet(false),
    m_useDefaultIfPreferenceUnavailable(false),
    m_useDefaultIfPreferenceUnavailableHasBeenSet(false)
{
}

TopicFilter::TopicFilter(JsonView jsonValue) : 
    m_topicNameHasBeenSet(false),
    m_useDefaultIfPreferenceUnavailable(false),
    m_useDefaultIfPreferenceUnavailableHasBeenSet(false)
{
  *this = jsonValue;
}

TopicFilter& TopicFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseDefaultIfPreferenceUnavailable"))
  {
    m_useDefaultIfPreferenceUnavailable = jsonValue.GetBool("UseDefaultIfPreferenceUnavailable");

    m_useDefaultIfPreferenceUnavailableHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicFilter::Jsonize() const
{
  JsonValue payload;

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_useDefaultIfPreferenceUnavailableHasBeenSet)
  {
   payload.WithBool("UseDefaultIfPreferenceUnavailable", m_useDefaultIfPreferenceUnavailable);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
