/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/IamIdentity.h>
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

IamIdentity::IamIdentity() : 
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sourceIdentityHasBeenSet(false)
{
}

IamIdentity::IamIdentity(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sourceIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

IamIdentity& IamIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIdentity"))
  {
    m_sourceIdentity = jsonValue.GetString("SourceIdentity");

    m_sourceIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue IamIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_sourceIdentityHasBeenSet)
  {
   payload.WithString("SourceIdentity", m_sourceIdentity);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
