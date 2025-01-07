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
   * can be a a subnet, a VPC, or an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorLocalResource">AWS
   * API Reference</a></p>
   */
  class MonitorLocalResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource();
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorLocalResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the local resource. Valid values are <code>AWS::EC2::VPC</code>
     * <code>AWS::AvailabilityZone</code> or <code>AWS::EC2::Subnet</code>.</p>
     */
    inline const MonitorLocalResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MonitorLocalResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MonitorLocalResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MonitorLocalResource& WithType(const MonitorLocalResourceType& value) { SetType(value); return *this;}
    inline MonitorLocalResource& WithType(MonitorLocalResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the local resource, such as an ARN.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline MonitorLocalResource& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline MonitorLocalResource& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline MonitorLocalResource& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    MonitorLocalResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
