/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat1.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

TranslationPinDataIsoFormat1::TranslationPinDataIsoFormat1()
{
}

TranslationPinDataIsoFormat1::TranslationPinDataIsoFormat1(JsonView jsonValue)
{
  *this = jsonValue;
}

TranslationPinDataIsoFormat1& TranslationPinDataIsoFormat1::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue TranslationPinDataIsoFormat1::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
