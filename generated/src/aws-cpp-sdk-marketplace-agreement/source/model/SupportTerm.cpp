/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/SupportTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

SupportTerm::SupportTerm() : 
    m_refundPolicyHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

SupportTerm::SupportTerm(JsonView jsonValue) : 
    m_refundPolicyHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SupportTerm& SupportTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("refundPolicy"))
  {
    m_refundPolicy = jsonValue.GetString("refundPolicy");

    m_refundPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportTerm::Jsonize() const
{
  JsonValue payload;

  if(m_refundPolicyHasBeenSet)
  {
   payload.WithString("refundPolicy", m_refundPolicy);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
