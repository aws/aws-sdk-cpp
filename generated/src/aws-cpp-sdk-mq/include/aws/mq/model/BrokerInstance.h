/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about all brokers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerInstance">AWS
   * API Reference</a></p>
   */
  class BrokerInstance
  {
  public:
    AWS_MQ_API BrokerInstance();
    AWS_MQ_API BrokerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The brokers web console URL.</p>
     */
    inline const Aws::String& GetConsoleURL() const{ return m_consoleURL; }
    inline bool ConsoleURLHasBeenSet() const { return m_consoleURLHasBeenSet; }
    inline void SetConsoleURL(const Aws::String& value) { m_consoleURLHasBeenSet = true; m_consoleURL = value; }
    inline void SetConsoleURL(Aws::String&& value) { m_consoleURLHasBeenSet = true; m_consoleURL = std::move(value); }
    inline void SetConsoleURL(const char* value) { m_consoleURLHasBeenSet = true; m_consoleURL.assign(value); }
    inline BrokerInstance& WithConsoleURL(const Aws::String& value) { SetConsoleURL(value); return *this;}
    inline BrokerInstance& WithConsoleURL(Aws::String&& value) { SetConsoleURL(std::move(value)); return *this;}
    inline BrokerInstance& WithConsoleURL(const char* value) { SetConsoleURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's wire-level protocol endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline BrokerInstance& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}
    inline BrokerInstance& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline BrokerInstance& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline BrokerInstance& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    inline BrokerInstance& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address of the Elastic Network Interface (ENI) attached to the broker.
     * Does not apply to RabbitMQ brokers.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline BrokerInstance& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline BrokerInstance& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline BrokerInstance& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_consoleURL;
    bool m_consoleURLHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
