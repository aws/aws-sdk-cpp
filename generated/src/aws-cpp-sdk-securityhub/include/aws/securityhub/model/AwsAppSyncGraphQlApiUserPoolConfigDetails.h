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
   * <p> Specifies the authorization configuration for using Amazon Cognito user
   * pools with your AppSync GraphQL API endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiUserPoolConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiUserPoolConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A regular expression for validating the incoming Amazon Cognito user pools
     * app client ID. If this value isn't set, no filtering is applied. </p>
     */
    inline const Aws::String& GetAppIdClientRegex() const { return m_appIdClientRegex; }
    inline bool AppIdClientRegexHasBeenSet() const { return m_appIdClientRegexHasBeenSet; }
    template<typename AppIdClientRegexT = Aws::String>
    void SetAppIdClientRegex(AppIdClientRegexT&& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = std::forward<AppIdClientRegexT>(value); }
    template<typename AppIdClientRegexT = Aws::String>
    AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAppIdClientRegex(AppIdClientRegexT&& value) { SetAppIdClientRegex(std::forward<AppIdClientRegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region in which the user pool was created. </p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito user pools authentication doesn't match the Amazon Cognito user
     * pools configuration. </p>
     */
    inline const Aws::String& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = Aws::String>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = Aws::String>
    AwsAppSyncGraphQlApiUserPoolConfigDetails& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user pool ID. </p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AwsAppSyncGraphQlApiUserPoolConfigDetails& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appIdClientRegex;
    bool m_appIdClientRegexHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
