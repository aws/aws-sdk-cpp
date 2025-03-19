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
   * <p>Provides information about the remote port that was involved in an attempted
   * network connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionRemotePortDetails">AWS
   * API Reference</a></p>
   */
  class ActionRemotePortDetails
  {
  public:
    AWS_SECURITYHUB_API ActionRemotePortDetails() = default;
    AWS_SECURITYHUB_API ActionRemotePortDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionRemotePortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of the port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ActionRemotePortDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port name of the remote connection.</p> <p>Length Constraints: 128.</p>
     */
    inline const Aws::String& GetPortName() const { return m_portName; }
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
    template<typename PortNameT = Aws::String>
    void SetPortName(PortNameT&& value) { m_portNameHasBeenSet = true; m_portName = std::forward<PortNameT>(value); }
    template<typename PortNameT = Aws::String>
    ActionRemotePortDetails& WithPortName(PortNameT&& value) { SetPortName(std::forward<PortNameT>(value)); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
