/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MonitorLocalResourceType.h>
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
   * <p>A local resource is the host where the agent is installed. Local resources
   * can be a a subnet, a VPC, an Availability Zone, or an Amazon Web Services
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorLocalResource">AWS
   * API Reference</a></p>
   */
  class MonitorLocalResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource() = default;
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the local resource. Valid values are <code>AWS::EC2::VPC</code>
     * <code>AWS::AvailabilityZone</code>, <code>AWS::EC2::Subnet</code>, or
     * <code>AWS::Region</code>.</p>
     */
    inline MonitorLocalResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MonitorLocalResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MonitorLocalResource& WithType(MonitorLocalResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the local resource. For a VPC or subnet, this identifier is
     * the VPC Amazon Resource Name (ARN) or subnet ARN. For an Availability Zone, this
     * identifier is the AZ name, for example, us-west-2b.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    MonitorLocalResource& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}
  private:

    MonitorLocalResourceType m_type{MonitorLocalResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
