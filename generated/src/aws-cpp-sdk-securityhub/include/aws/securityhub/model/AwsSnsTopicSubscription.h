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
   * <p>A wrapper type for the attributes of an Amazon SNS
   * subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSnsTopicSubscription">AWS
   * API Reference</a></p>
   */
  class AwsSnsTopicSubscription
  {
  public:
    AWS_SECURITYHUB_API AwsSnsTopicSubscription();
    AWS_SECURITYHUB_API AwsSnsTopicSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSnsTopicSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline AwsSnsTopicSubscription& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline AwsSnsTopicSubscription& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline AwsSnsTopicSubscription& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The subscription's protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The subscription's protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The subscription's protocol.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The subscription's protocol.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The subscription's protocol.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The subscription's protocol.</p>
     */
    inline AwsSnsTopicSubscription& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The subscription's protocol.</p>
     */
    inline AwsSnsTopicSubscription& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The subscription's protocol.</p>
     */
    inline AwsSnsTopicSubscription& WithProtocol(const char* value) { SetProtocol(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
