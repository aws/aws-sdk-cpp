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
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails();
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiUserPoolConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A regular expression for validating the incoming Amazon Cognito user pools
     * app client ID. If this value isn't set, no filtering is applied. </p>
     */
    inline const Aws::String& GetAppIdClientRegex() const{ return m_appIdClientRegex; }
    inline bool AppIdClientRegexHasBeenSet() const { return m_appIdClientRegexHasBeenSet; }
    inline void SetAppIdClientRegex(const Aws::String& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = value; }
    inline void SetAppIdClientRegex(Aws::String&& value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex = std::move(value); }
    inline void SetAppIdClientRegex(const char* value) { m_appIdClientRegexHasBeenSet = true; m_appIdClientRegex.assign(value); }
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAppIdClientRegex(const Aws::String& value) { SetAppIdClientRegex(value); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAppIdClientRegex(Aws::String&& value) { SetAppIdClientRegex(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAppIdClientRegex(const char* value) { SetAppIdClientRegex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region in which the user pool was created. </p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The action that you want your GraphQL API to take when a request that uses
     * Amazon Cognito user pools authentication doesn't match the Amazon Cognito user
     * pools configuration. </p>
     */
    inline const Aws::String& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const Aws::String& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(Aws::String&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline void SetDefaultAction(const char* value) { m_defaultActionHasBeenSet = true; m_defaultAction.assign(value); }
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithDefaultAction(const Aws::String& value) { SetDefaultAction(value); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithDefaultAction(Aws::String&& value) { SetDefaultAction(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithDefaultAction(const char* value) { SetDefaultAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user pool ID. </p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AwsAppSyncGraphQlApiUserPoolConfigDetails& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
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
