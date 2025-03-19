/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies the authorization configuration for using an Lambda function with
   * your AppSync GraphQL API endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of seconds a response should be cached for. The default is 5
     * minutes (300 seconds). </p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const { return m_authorizerResultTtlInSeconds; }
    inline bool AuthorizerResultTtlInSecondsHasBeenSet() const { return m_authorizerResultTtlInSecondsHasBeenSet; }
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }
    inline AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN (.../v3), or an
     * alias ARN. </p>
     */
    inline const Aws::String& GetAuthorizerUri() const { return m_authorizerUri; }
    inline bool AuthorizerUriHasBeenSet() const { return m_authorizerUriHasBeenSet; }
    template<typename AuthorizerUriT = Aws::String>
    void SetAuthorizerUri(AuthorizerUriT&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::forward<AuthorizerUriT>(value); }
    template<typename AuthorizerUriT = Aws::String>
    AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& WithAuthorizerUri(AuthorizerUriT&& value) { SetAuthorizerUri(std::forward<AuthorizerUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A regular expression for validation of tokens before the Lambda function is
     * called. </p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const { return m_identityValidationExpression; }
    inline bool IdentityValidationExpressionHasBeenSet() const { return m_identityValidationExpressionHasBeenSet; }
    template<typename IdentityValidationExpressionT = Aws::String>
    void SetIdentityValidationExpression(IdentityValidationExpressionT&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::forward<IdentityValidationExpressionT>(value); }
    template<typename IdentityValidationExpressionT = Aws::String>
    AwsAppSyncGraphQlApiLambdaAuthorizerConfigDetails& WithIdentityValidationExpression(IdentityValidationExpressionT&& value) { SetIdentityValidationExpression(std::forward<IdentityValidationExpressionT>(value)); return *this;}
    ///@}
  private:

    int m_authorizerResultTtlInSeconds{0};
    bool m_authorizerResultTtlInSecondsHasBeenSet = false;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet = false;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
