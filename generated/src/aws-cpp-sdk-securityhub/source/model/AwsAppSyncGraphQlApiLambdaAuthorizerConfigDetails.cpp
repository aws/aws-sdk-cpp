/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails::AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails() : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails::AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails(JsonView jsonValue) : 
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizerResultTtlInSeconds"))
  {
    m_authorizerResultTtlInSeconds = jsonValue.GetInteger("AuthorizerResultTtlInSeconds");

    m_authorizerResultTtlInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizerUri"))
  {
    m_authorizerUri = jsonValue.GetString("AuthorizerUri");

    m_authorizerUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityValidationExpression"))
  {
    m_identityValidationExpression = jsonValue.GetString("IdentityValidationExpression");

    m_identityValidationExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("AuthorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("AuthorizerUri", m_authorizerUri);

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("IdentityValidationExpression", m_identityValidationExpression);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
