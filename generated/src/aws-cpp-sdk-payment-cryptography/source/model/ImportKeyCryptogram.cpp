/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ImportKeyCryptogram.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

ImportKeyCryptogram::ImportKeyCryptogram() : 
    m_exportable(false),
    m_exportableHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_wrappedKeyCryptogramHasBeenSet(false),
    m_wrappingSpec(WrappingKeySpec::NOT_SET),
    m_wrappingSpecHasBeenSet(false)
{
}

ImportKeyCryptogram::ImportKeyCryptogram(JsonView jsonValue) : 
    m_exportable(false),
    m_exportableHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_wrappedKeyCryptogramHasBeenSet(false),
    m_wrappingSpec(WrappingKeySpec::NOT_SET),
    m_wrappingSpecHasBeenSet(false)
{
  *this = jsonValue;
}

ImportKeyCryptogram& ImportKeyCryptogram::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Exportable"))
  {
    m_exportable = jsonValue.GetBool("Exportable");

    m_exportableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportToken"))
  {
    m_importToken = jsonValue.GetString("ImportToken");

    m_importTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAttributes"))
  {
    m_keyAttributes = jsonValue.GetObject("KeyAttributes");

    m_keyAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappedKeyCryptogram"))
  {
    m_wrappedKeyCryptogram = jsonValue.GetString("WrappedKeyCryptogram");

    m_wrappedKeyCryptogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WrappingSpec"))
  {
    m_wrappingSpec = WrappingKeySpecMapper::GetWrappingKeySpecForName(jsonValue.GetString("WrappingSpec"));

    m_wrappingSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportKeyCryptogram::Jsonize() const
{
  JsonValue payload;

  if(m_exportableHasBeenSet)
  {
   payload.WithBool("Exportable", m_exportable);

  }

  if(m_importTokenHasBeenSet)
  {
   payload.WithString("ImportToken", m_importToken);

  }

  if(m_keyAttributesHasBeenSet)
  {
   payload.WithObject("KeyAttributes", m_keyAttributes.Jsonize());

  }

  if(m_wrappedKeyCryptogramHasBeenSet)
  {
   payload.WithString("WrappedKeyCryptogram", m_wrappedKeyCryptogram);

  }

  if(m_wrappingSpecHasBeenSet)
  {
   payload.WithString("WrappingSpec", WrappingKeySpecMapper::GetNameForWrappingKeySpec(m_wrappingSpec));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
