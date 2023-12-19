/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/EntityDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

EntityDetail::EntityDetail() : 
    m_entityTypeHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_detailsDocumentHasBeenSet(false)
{
}

EntityDetail::EntityDetail(JsonView jsonValue) : 
    m_entityTypeHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_detailsDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

EntityDetail& EntityDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = jsonValue.GetString("EntityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityIdentifier"))
  {
    m_entityIdentifier = jsonValue.GetString("EntityIdentifier");

    m_entityIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailsDocument"))
  {
    m_detailsDocument = jsonValue.GetObject("DetailsDocument");

    m_detailsDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityDetail::Jsonize() const
{
  JsonValue payload;

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("EntityType", m_entityType);

  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("EntityArn", m_entityArn);

  }

  if(m_entityIdentifierHasBeenSet)
  {
   payload.WithString("EntityIdentifier", m_entityIdentifier);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_detailsDocumentHasBeenSet)
  {
    if(!m_detailsDocument.View().IsNull())
    {
       payload.WithObject("DetailsDocument", JsonValue(m_detailsDocument.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
