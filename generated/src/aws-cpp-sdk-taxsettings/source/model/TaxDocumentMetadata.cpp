/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxDocumentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

TaxDocumentMetadata::TaxDocumentMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxDocumentMetadata& TaxDocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taxDocumentAccessToken"))
  {
    m_taxDocumentAccessToken = jsonValue.GetString("taxDocumentAccessToken");
    m_taxDocumentAccessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxDocumentName"))
  {
    m_taxDocumentName = jsonValue.GetString("taxDocumentName");
    m_taxDocumentNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxDocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_taxDocumentAccessTokenHasBeenSet)
  {
   payload.WithString("taxDocumentAccessToken", m_taxDocumentAccessToken);

  }

  if(m_taxDocumentNameHasBeenSet)
  {
   payload.WithString("taxDocumentName", m_taxDocumentName);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
