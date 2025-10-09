/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReadAuthorizationCodeGrantCredentialsDetails.h>
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

ReadAuthorizationCodeGrantCredentialsDetails::ReadAuthorizationCodeGrantCredentialsDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ReadAuthorizationCodeGrantCredentialsDetails& ReadAuthorizationCodeGrantCredentialsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadAuthorizationCodeGrantDetails"))
  {
    m_readAuthorizationCodeGrantDetails = jsonValue.GetObject("ReadAuthorizationCodeGrantDetails");
    m_readAuthorizationCodeGrantDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadAuthorizationCodeGrantCredentialsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_readAuthorizationCodeGrantDetailsHasBeenSet)
  {
   payload.WithObject("ReadAuthorizationCodeGrantDetails", m_readAuthorizationCodeGrantDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
