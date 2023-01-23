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
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions();
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationMetadataOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline const Aws::String& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline void SetHttpEndpoint(const Aws::String& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline void SetHttpEndpoint(Aws::String&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline void SetHttpEndpoint(const char* value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint.assign(value); }

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpEndpoint(const Aws::String& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpEndpoint(Aws::String&& value) { SetHttpEndpoint(std::move(value)); return *this;}

    /**
     * <p>Enables or disables the HTTP metadata endpoint on your instances. By default,
     * the metadata endpoint is enabled.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpEndpoint(const char* value) { SetHttpEndpoint(value); return *this;}


    /**
     * <p>The HTTP <code>PUT</code> response hop limit for instance metadata requests.
     * The larger the number, the further instance metadata requests can travel.</p>
     */
    inline int GetHttpPutResponseHopLimit() const{ return m_httpPutResponseHopLimit; }

    /**
     * <p>The HTTP <code>PUT</code> response hop limit for instance metadata requests.
     * The larger the number, the further instance metadata requests can travel.</p>
     */
    inline bool HttpPutResponseHopLimitHasBeenSet() const { return m_httpPutResponseHopLimitHasBeenSet; }

    /**
     * <p>The HTTP <code>PUT</code> response hop limit for instance metadata requests.
     * The larger the number, the further instance metadata requests can travel.</p>
     */
    inline void SetHttpPutResponseHopLimit(int value) { m_httpPutResponseHopLimitHasBeenSet = true; m_httpPutResponseHopLimit = value; }

    /**
     * <p>The HTTP <code>PUT</code> response hop limit for instance metadata requests.
     * The larger the number, the further instance metadata requests can travel.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpPutResponseHopLimit(int value) { SetHttpPutResponseHopLimit(value); return *this;}


    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline const Aws::String& GetHttpTokens() const{ return m_httpTokens; }

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline bool HttpTokensHasBeenSet() const { return m_httpTokensHasBeenSet; }

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline void SetHttpTokens(const Aws::String& value) { m_httpTokensHasBeenSet = true; m_httpTokens = value; }

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline void SetHttpTokens(Aws::String&& value) { m_httpTokensHasBeenSet = true; m_httpTokens = std::move(value); }

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline void SetHttpTokens(const char* value) { m_httpTokensHasBeenSet = true; m_httpTokens.assign(value); }

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpTokens(const Aws::String& value) { SetHttpTokens(value); return *this;}

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpTokens(Aws::String&& value) { SetHttpTokens(std::move(value)); return *this;}

    /**
     * <p>Indicates whether token usage is <code>required</code> or
     * <code>optional</code> for metadata requests. By default, token usage is
     * <code>optional</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationMetadataOptions& WithHttpTokens(const char* value) { SetHttpTokens(value); return *this;}

  private:

    Aws::String m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    int m_httpPutResponseHopLimit;
    bool m_httpPutResponseHopLimitHasBeenSet = false;

    Aws::String m_httpTokens;
    bool m_httpTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
