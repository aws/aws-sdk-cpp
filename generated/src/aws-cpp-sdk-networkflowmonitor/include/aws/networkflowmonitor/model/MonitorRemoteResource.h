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
   * resources can be a a subnet, a VPC, an Availability Zone, or an Amazon Web
   * Services service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorRemoteResource">AWS
   * API Reference</a></p>
   */
  class MonitorRemoteResource
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource();
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorRemoteResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the remote resource. Valid values are <code>AWS::EC2::VPC</code>
     * <code>AWS::AvailabilityZone</code>, <code>AWS::EC2::Subnet</code>, or
     * <code>AWS::AWSService</code>.</p>
     */
    inline const MonitorRemoteResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MonitorRemoteResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MonitorRemoteResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MonitorRemoteResource& WithType(const MonitorRemoteResourceType& value) { SetType(value); return *this;}
    inline MonitorRemoteResource& WithType(MonitorRemoteResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the remote resource, such as an ARN.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline MonitorRemoteResource& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline MonitorRemoteResource& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline MonitorRemoteResource& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    MonitorRemoteResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
