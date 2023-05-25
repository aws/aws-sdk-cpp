/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MemberIdArnPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

MemberIdArnPair::MemberIdArnPair() : 
    m_memberIdHasBeenSet(false),
    m_memberArnHasBeenSet(false)
{
}

MemberIdArnPair::MemberIdArnPair(JsonView jsonValue) : 
    m_memberIdHasBeenSet(false),
    m_memberArnHasBeenSet(false)
{
  *this = jsonValue;
}

MemberIdArnPair& MemberIdArnPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MemberId"))
  {
    m_memberId = jsonValue.GetString("MemberId");

    m_memberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemberArn"))
  {
    m_memberArn = jsonValue.GetString("MemberArn");

    m_memberArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberIdArnPair::Jsonize() const
{
  JsonValue payload;

  if(m_memberIdHasBeenSet)
  {
   payload.WithString("MemberId", m_memberId);

  }

  if(m_memberArnHasBeenSet)
  {
   payload.WithString("MemberArn", m_memberArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
