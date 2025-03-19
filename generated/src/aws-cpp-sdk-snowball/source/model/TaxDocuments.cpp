/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/TaxDocuments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

TaxDocuments::TaxDocuments(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxDocuments& TaxDocuments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IND"))
  {
    m_iND = jsonValue.GetObject("IND");
    m_iNDHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxDocuments::Jsonize() const
{
  JsonValue payload;

  if(m_iNDHasBeenSet)
  {
   payload.WithObject("IND", m_iND.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
