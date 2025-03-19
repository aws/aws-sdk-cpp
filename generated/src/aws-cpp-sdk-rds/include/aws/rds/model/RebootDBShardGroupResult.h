/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>
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
  /**
   * <p>Contains the details for an Amazon RDS DB shard group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBShardGroup">AWS
   * API Reference</a></p>
   */
  class RebootDBShardGroupResult
  {
  public:
    AWS_RDS_API RebootDBShardGroupResult() = default;
    AWS_RDS_API RebootDBShardGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API RebootDBShardGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB shard
     * group.</p>
     */
    inline const Aws::String& GetDBShardGroupResourceId() const { return m_dBShardGroupResourceId; }
    template<typename DBShardGroupResourceIdT = Aws::String>
    void SetDBShardGroupResourceId(DBShardGroupResourceIdT&& value) { m_dBShardGroupResourceIdHasBeenSet = true; m_dBShardGroupResourceId = std::forward<DBShardGroupResourceIdT>(value); }
    template<typename DBShardGroupResourceIdT = Aws::String>
    RebootDBShardGroupResult& WithDBShardGroupResourceId(DBShardGroupResourceIdT&& value) { SetDBShardGroupResourceId(std::forward<DBShardGroupResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const { return m_dBShardGroupIdentifier; }
    template<typename DBShardGroupIdentifierT = Aws::String>
    void SetDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::forward<DBShardGroupIdentifierT>(value); }
    template<typename DBShardGroupIdentifierT = Aws::String>
    RebootDBShardGroupResult& WithDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { SetDBShardGroupIdentifier(std::forward<DBShardGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary DB cluster for the DB shard group.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    RebootDBShardGroupResult& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const { return m_maxACU; }
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }
    inline RebootDBShardGroupResult& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMinACU() const { return m_minACU; }
    inline void SetMinACU(double value) { m_minACUHasBeenSet = true; m_minACU = value; }
    inline RebootDBShardGroupResult& WithMinACU(double value) { SetMinACU(value); return *this;}
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
    inline int GetComputeRedundancy() const { return m_computeRedundancy; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancyHasBeenSet = true; m_computeRedundancy = value; }
    inline RebootDBShardGroupResult& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB shard group.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    RebootDBShardGroupResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RebootDBShardGroupResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection endpoint for the DB shard group.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    RebootDBShardGroupResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB shard group.</p>
     */
    inline const Aws::String& GetDBShardGroupArn() const { return m_dBShardGroupArn; }
    template<typename DBShardGroupArnT = Aws::String>
    void SetDBShardGroupArn(DBShardGroupArnT&& value) { m_dBShardGroupArnHasBeenSet = true; m_dBShardGroupArn = std::forward<DBShardGroupArnT>(value); }
    template<typename DBShardGroupArnT = Aws::String>
    RebootDBShardGroupResult& WithDBShardGroupArn(DBShardGroupArnT&& value) { SetDBShardGroupArn(std::forward<DBShardGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    RebootDBShardGroupResult& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    RebootDBShardGroupResult& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RebootDBShardGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupResourceId;
    bool m_dBShardGroupResourceIdHasBeenSet = false;

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    double m_maxACU{0.0};
    bool m_maxACUHasBeenSet = false;

    double m_minACU{0.0};
    bool m_minACUHasBeenSet = false;

    int m_computeRedundancy{0};
    bool m_computeRedundancyHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_dBShardGroupArn;
    bool m_dBShardGroupArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
