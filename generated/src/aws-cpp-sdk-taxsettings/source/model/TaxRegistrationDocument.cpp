﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationDocument.h>
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

TaxRegistrationDocument::TaxRegistrationDocument() : 
    m_s3LocationHasBeenSet(false)
{
}

TaxRegistrationDocument::TaxRegistrationDocument(JsonView jsonValue)
  : TaxRegistrationDocument()
{
  *this = jsonValue;
}

TaxRegistrationDocument& TaxRegistrationDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue TaxRegistrationDocument::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
