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
   * <p>The metadata options for the instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationMetadataOptions">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationMetadataOptions
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions() = default;
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline const Aws::String& GetHttpEndpoint() const { return m_httpEndpoint; }
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }
    template<typename HttpEndpointT = Aws::String>
    void SetHttpEndpoint(HttpEndpointT&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::forward<HttpEndpointT>(value); }
    template<typename HttpEndpointT = Aws::String>
    AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpEndpoint(HttpEndpointT&& value) { SetHttpEndpoint(std::forward<HttpEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP <code>PUT</code> response hop limit for instance metadata requests.
     * The larger the number, the further instance metadata requests can travel.</p>
     */
    inline int GetHttpPutResponseHopLimit() const { return m_httpPutResponseHopLimit; }
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline const Aws::String& GetHttpTokens() const { return m_httpTokens; }
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }
    template<typename HttpTokensT = Aws::String>
    void SetHttpTokens(HttpTokensT&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::forward<HttpTokensT>(value); }
    template<typename HttpTokensT = Aws::String>
    AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpTokens(HttpTokensT&& value) { SetHttpTokens(std::forward<HttpTokensT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    int m_httpPutResponseHopLimit{0};
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    Aws::String m_httpTokens;
    bool m_httpTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
