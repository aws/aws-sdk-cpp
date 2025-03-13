/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsSubmission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AwsSubmission::AwsSubmission(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsSubmission& AwsSubmission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvolvementType"))
  {
    m_involvementType = SalesInvolvementTypeMapper::GetSalesInvolvementTypeForName(jsonValue.GetString("InvolvementType"));
    m_involvementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsSubmission::Jsonize() const
{
  JsonValue payload;

  if(m_involvementTypeHasBeenSet)
  {
   payload.WithString("InvolvementType", SalesInvolvementTypeMapper::GetNameForSalesInvolvementType(m_involvementType));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
