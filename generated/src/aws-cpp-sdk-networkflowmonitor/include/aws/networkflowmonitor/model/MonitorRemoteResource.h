/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MonitorRemoteResourceType.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A remote resource is the other endpoint in a network flow. That is, one
   * endpoint is the local resource and the other is the remote resource. Remote
   * resources can be a a subnet, a VPC, an Availability Zone, an Amazon Web Services
   * service, or an Amazon Web Services Region.</p> <p>When a remote resource is an
   * Amazon Web Services Region, Network Flow Monitor provides network performance
   * measurements up to the edge of the Region that you specify.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorRemoteResource">AWS
   * API Reference</a></p>
   */
  class MonitorRemoteResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource() = default;
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the remote resource. Valid values are <code>AWS::EC2::VPC</code>
     * <code>AWS::AvailabilityZone</code>, <code>AWS::EC2::Subnet</code>,
     * <code>AWS::AWSService</code>, or <code>AWS::Region</code>.</p>
     */
    inline MonitorRemoteResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MonitorRemoteResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MonitorRemoteResource& WithType(MonitorRemoteResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the remote resource. For a VPC or subnet, this identifier
     * is the VPC Amazon Resource Name (ARN) or subnet ARN. For an Availability Zone,
     * this identifier is the AZ name, for example, us-west-2b. For an Amazon Web
     * Services Region , this identifier is the Region name, for example, us-west-2.
     * </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    MonitorRemoteResource& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    MonitorRemoteResourceType m_type{MonitorRemoteResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
