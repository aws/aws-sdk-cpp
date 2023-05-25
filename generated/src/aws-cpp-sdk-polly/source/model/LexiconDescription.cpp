/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/LexiconDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace Model
{

LexiconDescription::LexiconDescription() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

LexiconDescription::LexiconDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

LexiconDescription& LexiconDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue LexiconDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("Attributes", m_attributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws
