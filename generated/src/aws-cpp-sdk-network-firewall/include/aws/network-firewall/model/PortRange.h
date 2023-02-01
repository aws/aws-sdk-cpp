/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A single port range specification. This is used for source and destination
   * port ranges in the stateless rule <a>MatchAttributes</a>,
   * <code>SourcePorts</code>, and <code>DestinationPorts</code> settings.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PortRange">AWS
   * API Reference</a></p>
   */
  class PortRange
  {
  public:
    AWS_NETWORKFIREWALL_API PortRange();
    AWS_NETWORKFIREWALL_API PortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lower limit of the port range. This must be less than or equal to the
     * <code>ToPort</code> specification. </p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The lower limit of the port range. This must be less than or equal to the
     * <code>ToPort</code> specification. </p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The lower limit of the port range. This must be less than or equal to the
     * <code>ToPort</code> specification. </p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The lower limit of the port range. This must be less than or equal to the
     * <code>ToPort</code> specification. </p>
     */
    inline PortRange& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The upper limit of the port range. This must be greater than or equal to the
     * <code>FromPort</code> specification. </p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The upper limit of the port range. This must be greater than or equal to the
     * <code>FromPort</code> specification. </p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The upper limit of the port range. This must be greater than or equal to the
     * <code>FromPort</code> specification. </p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The upper limit of the port range. This must be greater than or equal to the
     * <code>FromPort</code> specification. </p>
     */
    inline PortRange& WithToPort(int value) { SetToPort(value); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
