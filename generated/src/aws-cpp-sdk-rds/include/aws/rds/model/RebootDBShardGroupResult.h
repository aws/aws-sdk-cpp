﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class RebootDBShardGroupResult
  {
  public:
    AWS_RDS_API RebootDBShardGroupResult();
    AWS_RDS_API RebootDBShardGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API RebootDBShardGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB shard
     * group.</p>
     */
    inline const Aws::String& GetDBShardGroupResourceId() const{ return m_dBShardGroupResourceId; }
    inline void SetDBShardGroupResourceId(const Aws::String& value) { m_dBShardGroupResourceId = value; }
    inline void SetDBShardGroupResourceId(Aws::String&& value) { m_dBShardGroupResourceId = std::move(value); }
    inline void SetDBShardGroupResourceId(const char* value) { m_dBShardGroupResourceId.assign(value); }
    inline RebootDBShardGroupResult& WithDBShardGroupResourceId(const Aws::String& value) { SetDBShardGroupResourceId(value); return *this;}
    inline RebootDBShardGroupResult& WithDBShardGroupResourceId(Aws::String&& value) { SetDBShardGroupResourceId(std::move(value)); return *this;}
    inline RebootDBShardGroupResult& WithDBShardGroupResourceId(const char* value) { SetDBShardGroupResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const{ return m_dBShardGroupIdentifier; }
    inline void SetDBShardGroupIdentifier(const Aws::String& value) { m_dBShardGroupIdentifier = value; }
    inline void SetDBShardGroupIdentifier(Aws::String&& value) { m_dBShardGroupIdentifier = std::move(value); }
    inline void SetDBShardGroupIdentifier(const char* value) { m_dBShardGroupIdentifier.assign(value); }
    inline RebootDBShardGroupResult& WithDBShardGroupIdentifier(const Aws::String& value) { SetDBShardGroupIdentifier(value); return *this;}
    inline RebootDBShardGroupResult& WithDBShardGroupIdentifier(Aws::String&& value) { SetDBShardGroupIdentifier(std::move(value)); return *this;}
    inline RebootDBShardGroupResult& WithDBShardGroupIdentifier(const char* value) { SetDBShardGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }
    inline RebootDBShardGroupResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline RebootDBShardGroupResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline RebootDBShardGroupResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const{ return m_maxACU; }
    inline void SetMaxACU(double value) { m_maxACU = value; }
    inline RebootDBShardGroupResult& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create standby instances for the DB shard group. Valid
     * values are the following:</p> <ul> <li> <p>0 - Creates a single, primary DB
     * instance for each physical shard. This is the default value, and the only one
     * supported for the preview.</p> </li> <li> <p>1 - Creates a primary DB instance
     * and a standby instance in a different Availability Zone (AZ) for each physical
     * shard.</p> </li> <li> <p>2 - Creates a primary DB instance and two standby
     * instances in different AZs for each physical shard.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const{ return m_computeRedundancy; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancy = value; }
    inline RebootDBShardGroupResult& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB shard group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline RebootDBShardGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RebootDBShardGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RebootDBShardGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB shard group is publicly accessible.</p> <p>When the
     * DB shard group is publicly accessible, its Domain Name System (DNS) endpoint
     * resolves to the private IP address from within the DB shard group's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * shard group's VPC. Access to the DB shard group is ultimately controlled by the
     * security group it uses. That public access isn't permitted if the security group
     * assigned to the DB shard group doesn't permit it.</p> <p>When the DB shard group
     * isn't publicly accessible, it is an internal DB shard group with a DNS name that
     * resolves to a private IP address.</p> <p>For more information, see
     * <a>CreateDBShardGroup</a>.</p> <p>This setting is only for Aurora Limitless
     * Database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline RebootDBShardGroupResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the DB shard group.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline RebootDBShardGroupResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline RebootDBShardGroupResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline RebootDBShardGroupResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RebootDBShardGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RebootDBShardGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupResourceId;

    Aws::String m_dBShardGroupIdentifier;

    Aws::String m_dBClusterIdentifier;

    double m_maxACU;

    int m_computeRedundancy;

    Aws::String m_status;

    bool m_publiclyAccessible;

    Aws::String m_endpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
