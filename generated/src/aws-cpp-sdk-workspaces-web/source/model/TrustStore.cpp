/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/TrustStore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

TrustStore::TrustStore() : 
    m_associatedPortalArnsHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false)
{
}

TrustStore::TrustStore(JsonView jsonValue) : 
    m_associatedPortalArnsHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false)
{
  *this = jsonValue;
}

TrustStore& TrustStore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedPortalArns"))
  {
    Aws::Utils::Array<JsonView> associatedPortalArnsJsonList = jsonValue.GetArray("associatedPortalArns");
    for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
    {
      m_associatedPortalArns.push_back(associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString());
    }
    m_associatedPortalArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");

    m_trustStoreArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustStore::Jsonize() const
{
  JsonValue payload;

  if(m_associatedPortalArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedPortalArnsJsonList(m_associatedPortalArns.size());
   for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
   {
     associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString(m_associatedPortalArns[associatedPortalArnsIndex]);
   }
   payload.WithArray("associatedPortalArns", std::move(associatedPortalArnsJsonList));

  }

  if(m_trustStoreArnHasBeenSet)
  {
   payload.WithString("trustStoreArn", m_trustStoreArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
