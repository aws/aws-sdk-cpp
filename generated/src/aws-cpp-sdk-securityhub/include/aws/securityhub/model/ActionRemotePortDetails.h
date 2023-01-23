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
    AWS_SECURITYHUB_API ActionRemotePortDetails();
    AWS_SECURITYHUB_API ActionRemotePortDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActionRemotePortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of the port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The number of the port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The number of the port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The number of the port.</p>
     */
    inline ActionRemotePortDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The port name of the remote connection.</p>
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline ActionRemotePortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline ActionRemotePortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * <p>The port name of the remote connection.</p>
     */
    inline ActionRemotePortDetails& WithPortName(const char* value) { SetPortName(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
