/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/TrustedAdvisorCheckDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCheckDescription::TrustedAdvisorCheckDescription() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

TrustedAdvisorCheckDescription::TrustedAdvisorCheckDescription(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCheckDescription& TrustedAdvisorCheckDescription::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetString("category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      m_metadata.push_back(metadataJsonList[metadataIndex].AsString());
    }
    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCheckDescription::Jsonize() const
{
  JsonValue payload;

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

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_metadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataJsonList(m_metadata.size());
   for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
   {
     metadataJsonList[metadataIndex].AsString(m_metadata[metadataIndex]);
   }
   payload.WithArray("metadata", std::move(metadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
