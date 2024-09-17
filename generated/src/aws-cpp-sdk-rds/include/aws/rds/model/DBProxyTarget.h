/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/TargetType.h>
#include <aws/rds/model/TargetRole.h>
#include <aws/rds/model/TargetHealth.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details for an RDS Proxy target. It represents an RDS DB
   * instance or Aurora DB cluster that the proxy can connect to. One or more targets
   * are associated with an RDS Proxy target group.</p> <p>This data type is used as
   * a response element in the <code>DescribeDBProxyTargets</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBProxyTarget">AWS
   * API Reference</a></p>
   */
  class DBProxyTarget
  {
  public:
    AWS_RDS_API DBProxyTarget();
    AWS_RDS_API DBProxyTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBProxyTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the RDS DB instance or Aurora DB
     * cluster.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline DBProxyTarget& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline DBProxyTarget& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline DBProxyTarget& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The writer endpoint for the RDS DB instance or Aurora DB cluster.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DBProxyTarget& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DBProxyTarget& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DBProxyTarget& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier when the target represents an Aurora DB cluster.
     * This field is blank when the target represents an RDS DB instance.</p>
     */
    inline const Aws::String& GetTrackedClusterId() const{ return m_trackedClusterId; }
    inline bool TrackedClusterIdHasBeenSet() const { return m_trackedClusterIdHasBeenSet; }
    inline void SetTrackedClusterId(const Aws::String& value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId = value; }
    inline void SetTrackedClusterId(Aws::String&& value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId = std::move(value); }
    inline void SetTrackedClusterId(const char* value) { m_trackedClusterIdHasBeenSet = true; m_trackedClusterId.assign(value); }
    inline DBProxyTarget& WithTrackedClusterId(const Aws::String& value) { SetTrackedClusterId(value); return *this;}
    inline DBProxyTarget& WithTrackedClusterId(Aws::String&& value) { SetTrackedClusterId(std::move(value)); return *this;}
    inline DBProxyTarget& WithTrackedClusterId(const char* value) { SetTrackedClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier representing the target. It can be the instance identifier for
     * an RDS DB instance, or the cluster identifier for an Aurora DB cluster.</p>
     */
    inline const Aws::String& GetRdsResourceId() const{ return m_rdsResourceId; }
    inline bool RdsResourceIdHasBeenSet() const { return m_rdsResourceIdHasBeenSet; }
    inline void SetRdsResourceId(const Aws::String& value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId = value; }
    inline void SetRdsResourceId(Aws::String&& value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId = std::move(value); }
    inline void SetRdsResourceId(const char* value) { m_rdsResourceIdHasBeenSet = true; m_rdsResourceId.assign(value); }
    inline DBProxyTarget& WithRdsResourceId(const Aws::String& value) { SetRdsResourceId(value); return *this;}
    inline DBProxyTarget& WithRdsResourceId(Aws::String&& value) { SetRdsResourceId(std::move(value)); return *this;}
    inline DBProxyTarget& WithRdsResourceId(const char* value) { SetRdsResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the RDS Proxy uses to connect to the target RDS DB instance or
     * Aurora DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBProxyTarget& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the kind of database, such as an RDS DB instance or an Aurora DB
     * cluster, that the target represents.</p>
     */
    inline const TargetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TargetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DBProxyTarget& WithType(const TargetType& value) { SetType(value); return *this;}
    inline DBProxyTarget& WithType(TargetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the target of the proxy can be used for
     * read/write or read-only operations.</p>
     */
    inline const TargetRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const TargetRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(TargetRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline DBProxyTarget& WithRole(const TargetRole& value) { SetRole(value); return *this;}
    inline DBProxyTarget& WithRole(TargetRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the connection health of the RDS Proxy target.</p>
     */
    inline const TargetHealth& GetTargetHealth() const{ return m_targetHealth; }
    inline bool TargetHealthHasBeenSet() const { return m_targetHealthHasBeenSet; }
    inline void SetTargetHealth(const TargetHealth& value) { m_targetHealthHasBeenSet = true; m_targetHealth = value; }
    inline void SetTargetHealth(TargetHealth&& value) { m_targetHealthHasBeenSet = true; m_targetHealth = std::move(value); }
    inline DBProxyTarget& WithTargetHealth(const TargetHealth& value) { SetTargetHealth(value); return *this;}
    inline DBProxyTarget& WithTargetHealth(TargetHealth&& value) { SetTargetHealth(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_trackedClusterId;
    bool m_trackedClusterIdHasBeenSet = false;

    Aws::String m_rdsResourceId;
    bool m_rdsResourceIdHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    TargetType m_type;
    bool m_typeHasBeenSet = false;

    TargetRole m_role;
    bool m_roleHasBeenSet = false;

    TargetHealth m_targetHealth;
    bool m_targetHealthHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
