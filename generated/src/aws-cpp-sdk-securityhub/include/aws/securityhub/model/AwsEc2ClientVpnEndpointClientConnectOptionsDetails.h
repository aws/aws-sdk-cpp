/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails.h>
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
   * <p> The options for managing connection authorization for new client
   * connections. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointClientConnectOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointClientConnectOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientConnectOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientConnectOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientConnectOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether client connect options are enabled. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsEc2ClientVpnEndpointClientConnectOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization. </p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    AwsEc2ClientVpnEndpointClientConnectOptionsDetails& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of any updates to the client connect options. </p>
     */
    inline const AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails>
    AwsEc2ClientVpnEndpointClientConnectOptionsDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    AwsEc2ClientVpnEndpointClientConnectOptionsStatusDetails m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
