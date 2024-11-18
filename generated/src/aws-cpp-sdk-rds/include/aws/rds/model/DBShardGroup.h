/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>
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
   * <p>Contains the details for an Amazon RDS DB shard group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBShardGroup">AWS
   * API Reference</a></p>
   */
  class DBShardGroup
  {
  public:
    AWS_RDS_API DBShardGroup();
    AWS_RDS_API DBShardGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBShardGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB shard
     * group.</p>
     */
    inline const Aws::String& GetDBShardGroupResourceId() const{ return m_dBShardGroupResourceId; }
    inline bool DBShardGroupResourceIdHasBeenSet() const { return m_dBShardGroupResourceIdHasBeenSet; }
    inline void SetDBShardGroupResourceId(const Aws::String& value) { m_dBShardGroupResourceIdHasBeenSet = true; m_dBShardGroupResourceId = value; }
    inline void SetDBShardGroupResourceId(Aws::String&& value) { m_dBShardGroupResourceIdHasBeenSet = true; m_dBShardGroupResourceId = std::move(value); }
    inline void SetDBShardGroupResourceId(const char* value) { m_dBShardGroupResourceIdHasBeenSet = true; m_dBShardGroupResourceId.assign(value); }
    inline DBShardGroup& WithDBShardGroupResourceId(const Aws::String& value) { SetDBShardGroupResourceId(value); return *this;}
    inline DBShardGroup& WithDBShardGroupResourceId(Aws::String&& value) { SetDBShardGroupResourceId(std::move(value)); return *this;}
    inline DBShardGroup& WithDBShardGroupResourceId(const char* value) { SetDBShardGroupResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const{ return m_dBShardGroupIdentifier; }
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }
    inline void SetDBShardGroupIdentifier(const Aws::String& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = value; }
    inline void SetDBShardGroupIdentifier(Aws::String&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::move(value); }
    inline void SetDBShardGroupIdentifier(const char* value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier.assign(value); }
    inline DBShardGroup& WithDBShardGroupIdentifier(const Aws::String& value) { SetDBShardGroupIdentifier(value); return *this;}
    inline DBShardGroup& WithDBShardGroupIdentifier(Aws::String&& value) { SetDBShardGroupIdentifier(std::move(value)); return *this;}
    inline DBShardGroup& WithDBShardGroupIdentifier(const char* value) { SetDBShardGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBShardGroup& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBShardGroup& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBShardGroup& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const{ return m_maxACU; }
    inline bool MaxACUHasBeenSet() const { return m_maxACUHasBeenSet; }
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }
    inline DBShardGroup& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMinACU() const{ return m_minACU; }
    inline bool MinACUHasBeenSet() const { return m_minACUHasBeenSet; }
    inline void SetMinACU(double value) { m_minACUHasBeenSet = true; m_minACU = value; }
    inline DBShardGroup& WithMinACU(double value) { SetMinACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create standby DB shard groups for the DB shard group.
     * Valid values are the following:</p> <ul> <li> <p>0 - Creates a DB shard group
     * without a standby DB shard group. This is the default value.</p> </li> <li> <p>1
     * - Creates a DB shard group with a standby DB shard group in a different
     * Availability Zone (AZ).</p> </li> <li> <p>2 - Creates a DB shard group with two
     * standby DB shard groups in two different AZs.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const{ return m_computeRedundancy; }
    inline bool ComputeRedundancyHasBeenSet() const { return m_computeRedundancyHasBeenSet; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancyHasBeenSet = true; m_computeRedundancy = value; }
    inline DBShardGroup& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB shard group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBShardGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBShardGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBShardGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DBShardGroup& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the DB shard group.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DBShardGroup& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DBShardGroup& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DBShardGroup& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupArn() const{ return m_dBShardGroupArn; }
    inline bool DBShardGroupArnHasBeenSet() const { return m_dBShardGroupArnHasBeenSet; }
    inline void SetDBShardGroupArn(const Aws::String& value) { m_dBShardGroupArnHasBeenSet = true; m_dBShardGroupArn = value; }
    inline void SetDBShardGroupArn(Aws::String&& value) { m_dBShardGroupArnHasBeenSet = true; m_dBShardGroupArn = std::move(value); }
    inline void SetDBShardGroupArn(const char* value) { m_dBShardGroupArnHasBeenSet = true; m_dBShardGroupArn.assign(value); }
    inline DBShardGroup& WithDBShardGroupArn(const Aws::String& value) { SetDBShardGroupArn(value); return *this;}
    inline DBShardGroup& WithDBShardGroupArn(Aws::String&& value) { SetDBShardGroupArn(std::move(value)); return *this;}
    inline DBShardGroup& WithDBShardGroupArn(const char* value) { SetDBShardGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DBShardGroup& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DBShardGroup& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DBShardGroup& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DBShardGroup& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DBShardGroup& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DBShardGroup& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupResourceId;
    bool m_dBShardGroupResourceIdHasBeenSet = false;

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    double m_maxACU;
    bool m_maxACUHasBeenSet = false;

    double m_minACU;
    bool m_minACUHasBeenSet = false;

    int m_computeRedundancy;
    bool m_computeRedundancyHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_dBShardGroupArn;
    bool m_dBShardGroupArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
