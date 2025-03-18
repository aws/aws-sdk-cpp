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
    AWS_MQ_API BrokerInstance() = default;
    AWS_MQ_API BrokerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The brokers web console URL.</p>
     */
    inline const Aws::String& GetConsoleURL() const { return m_consoleURL; }
    inline bool ConsoleURLHasBeenSet() const { return m_consoleURLHasBeenSet; }
    template<typename ConsoleURLT = Aws::String>
    void SetConsoleURL(ConsoleURLT&& value) { m_consoleURLHasBeenSet = true; m_consoleURL = std::forward<ConsoleURLT>(value); }
    template<typename ConsoleURLT = Aws::String>
    BrokerInstance& WithConsoleURL(ConsoleURLT&& value) { SetConsoleURL(std::forward<ConsoleURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's wire-level protocol endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<Aws::String>>
    BrokerInstance& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = Aws::String>
    BrokerInstance& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address of the Elastic Network Interface (ENI) attached to the broker.
     * Does not apply to RabbitMQ brokers.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    BrokerInstance& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
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
