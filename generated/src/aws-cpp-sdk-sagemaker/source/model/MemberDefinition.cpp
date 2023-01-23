/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MemberDefinition.h>
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

MemberDefinition::MemberDefinition() : 
    m_cognitoMemberDefinitionHasBeenSet(false),
    m_oidcMemberDefinitionHasBeenSet(false)
{
}

MemberDefinition::MemberDefinition(JsonView jsonValue) : 
    m_cognitoMemberDefinitionHasBeenSet(false),
    m_oidcMemberDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

MemberDefinition& MemberDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CognitoMemberDefinition"))
  {
    m_cognitoMemberDefinition = jsonValue.GetObject("CognitoMemberDefinition");

    m_cognitoMemberDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OidcMemberDefinition"))
  {
    m_oidcMemberDefinition = jsonValue.GetObject("OidcMemberDefinition");

    m_oidcMemberDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_cognitoMemberDefinitionHasBeenSet)
  {
   payload.WithObject("CognitoMemberDefinition", m_cognitoMemberDefinition.Jsonize());

  }

  if(m_oidcMemberDefinitionHasBeenSet)
  {
   payload.WithObject("OidcMemberDefinition", m_oidcMemberDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
