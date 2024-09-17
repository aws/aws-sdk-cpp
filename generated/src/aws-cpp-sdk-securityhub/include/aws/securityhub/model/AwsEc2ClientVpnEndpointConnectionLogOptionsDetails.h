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
   * <p> Information about the client connection logging options for the Client VPN
   * endpoint. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointConnectionLogOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointConnectionLogOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointConnectionLogOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointConnectionLogOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether client connection logging is enabled for the Client VPN
     * endpoint. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Amazon CloudWatch Logs log group to which connection logging
     * data is published. </p>
     */
    inline const Aws::String& GetCloudwatchLogGroup() const{ return m_cloudwatchLogGroup; }
    inline bool CloudwatchLogGroupHasBeenSet() const { return m_cloudwatchLogGroupHasBeenSet; }
    inline void SetCloudwatchLogGroup(const Aws::String& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = value; }
    inline void SetCloudwatchLogGroup(Aws::String&& value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup = std::move(value); }
    inline void SetCloudwatchLogGroup(const char* value) { m_cloudwatchLogGroupHasBeenSet = true; m_cloudwatchLogGroup.assign(value); }
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogGroup(const Aws::String& value) { SetCloudwatchLogGroup(value); return *this;}
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogGroup(Aws::String&& value) { SetCloudwatchLogGroup(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogGroup(const char* value) { SetCloudwatchLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Amazon CloudWatch Logs log stream to which connection
     * logging data is published. </p>
     */
    inline const Aws::String& GetCloudwatchLogStream() const{ return m_cloudwatchLogStream; }
    inline bool CloudwatchLogStreamHasBeenSet() const { return m_cloudwatchLogStreamHasBeenSet; }
    inline void SetCloudwatchLogStream(const Aws::String& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = value; }
    inline void SetCloudwatchLogStream(Aws::String&& value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream = std::move(value); }
    inline void SetCloudwatchLogStream(const char* value) { m_cloudwatchLogStreamHasBeenSet = true; m_cloudwatchLogStream.assign(value); }
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogStream(const Aws::String& value) { SetCloudwatchLogStream(value); return *this;}
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogStream(Aws::String&& value) { SetCloudwatchLogStream(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& WithCloudwatchLogStream(const char* value) { SetCloudwatchLogStream(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_cloudwatchLogGroup;
    bool m_cloudwatchLogGroupHasBeenSet = false;

    Aws::String m_cloudwatchLogStream;
    bool m_cloudwatchLogStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
