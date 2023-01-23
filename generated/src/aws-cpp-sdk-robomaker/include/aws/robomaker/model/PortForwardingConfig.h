/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/PortMapping.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Configuration information for port forwarding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/PortForwardingConfig">AWS
   * API Reference</a></p>
   */
  class PortForwardingConfig
  {
  public:
    AWS_ROBOMAKER_API PortForwardingConfig();
    AWS_ROBOMAKER_API PortForwardingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API PortForwardingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline bool PortMappingsHasBeenSet() const { return m_portMappingsHasBeenSet; }

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::move(value); }

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline PortForwardingConfig& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline PortForwardingConfig& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(std::move(value)); return *this;}

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline PortForwardingConfig& AddPortMappings(const PortMapping& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /**
     * <p>The port mappings for the configuration.</p>
     */
    inline PortForwardingConfig& AddPortMappings(PortMapping&& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PortMapping> m_portMappings;
    bool m_portMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
