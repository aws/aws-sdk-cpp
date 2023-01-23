/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/INDTaxDocuments.h>
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

INDTaxDocuments::INDTaxDocuments() : 
    m_gSTINHasBeenSet(false)
{
}

INDTaxDocuments::INDTaxDocuments(JsonView jsonValue) : 
    m_gSTINHasBeenSet(false)
{
  *this = jsonValue;
}

INDTaxDocuments& INDTaxDocuments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GSTIN"))
  {
    m_gSTIN = jsonValue.GetString("GSTIN");

    m_gSTINHasBeenSet = true;
  }

  return *this;
}

JsonValue INDTaxDocuments::Jsonize() const
{
  JsonValue payload;

  if(m_gSTINHasBeenSet)
  {
   payload.WithString("GSTIN", m_gSTIN);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
