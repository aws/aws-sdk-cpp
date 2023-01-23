/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

UserContext::UserContext() : 
    m_userProfileArnHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

UserContext::UserContext(JsonView jsonValue) : 
    m_userProfileArnHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserContext& UserContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserProfileArn"))
  {
    m_userProfileArn = jsonValue.GetString("UserProfileArn");

    m_userProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");

    m_userProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserContext::Jsonize() const
{
  JsonValue payload;

  if(m_userProfileArnHasBeenSet)
  {
   payload.WithString("UserProfileArn", m_userProfileArn);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
