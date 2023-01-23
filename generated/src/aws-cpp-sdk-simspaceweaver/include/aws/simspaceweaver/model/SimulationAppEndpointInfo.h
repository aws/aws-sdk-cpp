/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simspaceweaver/model/SimulationAppPortMapping.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>Information about the network endpoint that you can use to connect to your
   * custom or service app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/SimulationAppEndpointInfo">AWS
   * API Reference</a></p>
   */
  class SimulationAppEndpointInfo
  {
  public:
    AWS_SIMSPACEWEAVER_API SimulationAppEndpointInfo();
    AWS_SIMSPACEWEAVER_API SimulationAppEndpointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationAppEndpointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline SimulationAppEndpointInfo& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline SimulationAppEndpointInfo& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the app. SimSpace Weaver dynamically assigns this IP
     * address when the app starts.</p>
     */
    inline SimulationAppEndpointInfo& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline const Aws::Vector<SimulationAppPortMapping>& GetIngressPortMappings() const{ return m_ingressPortMappings; }

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline bool IngressPortMappingsHasBeenSet() const { return m_ingressPortMappingsHasBeenSet; }

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline void SetIngressPortMappings(const Aws::Vector<SimulationAppPortMapping>& value) { m_ingressPortMappingsHasBeenSet = true; m_ingressPortMappings = value; }

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline void SetIngressPortMappings(Aws::Vector<SimulationAppPortMapping>&& value) { m_ingressPortMappingsHasBeenSet = true; m_ingressPortMappings = std::move(value); }

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline SimulationAppEndpointInfo& WithIngressPortMappings(const Aws::Vector<SimulationAppPortMapping>& value) { SetIngressPortMappings(value); return *this;}

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline SimulationAppEndpointInfo& WithIngressPortMappings(Aws::Vector<SimulationAppPortMapping>&& value) { SetIngressPortMappings(std::move(value)); return *this;}

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline SimulationAppEndpointInfo& AddIngressPortMappings(const SimulationAppPortMapping& value) { m_ingressPortMappingsHasBeenSet = true; m_ingressPortMappings.push_back(value); return *this; }

    /**
     * <p>The inbound TCP/UDP port numbers of the app. The combination of an IP address
     * and a port number form a network endpoint.</p>
     */
    inline SimulationAppEndpointInfo& AddIngressPortMappings(SimulationAppPortMapping&& value) { m_ingressPortMappingsHasBeenSet = true; m_ingressPortMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<SimulationAppPortMapping> m_ingressPortMappings;
    bool m_ingressPortMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
