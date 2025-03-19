/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  /**
   * <p>This data type represents the information you need to connect to an Amazon
   * Aurora DB cluster. This data type is used as a response element in the following
   * actions:</p> <ul> <li> <p> <code>CreateDBClusterEndpoint</code> </p> </li> <li>
   * <p> <code>DescribeDBClusterEndpoints</code> </p> </li> <li> <p>
   * <code>ModifyDBClusterEndpoint</code> </p> </li> <li> <p>
   * <code>DeleteDBClusterEndpoint</code> </p> </li> </ul> <p>For the data structure
   * that represents Amazon RDS DB instance endpoints, see
   * <code>Endpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterEndpoint">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterEndpointResult
  {
  public:
    AWS_RDS_API CreateDBClusterEndpointResult() = default;
    AWS_RDS_API CreateDBClusterEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBClusterEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const { return m_dBClusterEndpointIdentifier; }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    void SetDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::forward<DBClusterEndpointIdentifierT>(value); }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    CreateDBClusterEndpointResult& WithDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { SetDBClusterEndpointIdentifier(std::forward<DBClusterEndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    CreateDBClusterEndpointResult& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointResourceIdentifier() const { return m_dBClusterEndpointResourceIdentifier; }
    template<typename DBClusterEndpointResourceIdentifierT = Aws::String>
    void SetDBClusterEndpointResourceIdentifier(DBClusterEndpointResourceIdentifierT&& value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier = std::forward<DBClusterEndpointResourceIdentifierT>(value); }
    template<typename DBClusterEndpointResourceIdentifierT = Aws::String>
    CreateDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(DBClusterEndpointResourceIdentifierT&& value) { SetDBClusterEndpointResourceIdentifier(std::forward<DBClusterEndpointResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    CreateDBClusterEndpointResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>inactive</code>,
     * <code>modifying</code>. The <code>inactive</code> state applies to an endpoint
     * that can't be used for a certain kind of cluster, such as a <code>writer</code>
     * endpoint for a read-only secondary cluster in a global database.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CreateDBClusterEndpointResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const { return m_endpointType; }
    template<typename EndpointTypeT = Aws::String>
    void SetEndpointType(EndpointTypeT&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::forward<EndpointTypeT>(value); }
    template<typename EndpointTypeT = Aws::String>
    CreateDBClusterEndpointResult& WithEndpointType(EndpointTypeT&& value) { SetEndpointType(std::forward<EndpointTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>WRITER</code>, <code>ANY</code>.</p>
     */
    inline const Aws::String& GetCustomEndpointType() const { return m_customEndpointType; }
    template<typename CustomEndpointTypeT = Aws::String>
    void SetCustomEndpointType(CustomEndpointTypeT&& value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType = std::forward<CustomEndpointTypeT>(value); }
    template<typename CustomEndpointTypeT = Aws::String>
    CreateDBClusterEndpointResult& WithCustomEndpointType(CustomEndpointTypeT&& value) { SetCustomEndpointType(std::forward<CustomEndpointTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const { return m_staticMembers; }
    template<typename StaticMembersT = Aws::Vector<Aws::String>>
    void SetStaticMembers(StaticMembersT&& value) { m_staticMembersHasBeenSet = true; m_staticMembers = std::forward<StaticMembersT>(value); }
    template<typename StaticMembersT = Aws::Vector<Aws::String>>
    CreateDBClusterEndpointResult& WithStaticMembers(StaticMembersT&& value) { SetStaticMembers(std::forward<StaticMembersT>(value)); return *this;}
    template<typename StaticMembersT = Aws::String>
    CreateDBClusterEndpointResult& AddStaticMembers(StaticMembersT&& value) { m_staticMembersHasBeenSet = true; m_staticMembers.emplace_back(std::forward<StaticMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const { return m_excludedMembers; }
    template<typename ExcludedMembersT = Aws::Vector<Aws::String>>
    void SetExcludedMembers(ExcludedMembersT&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = std::forward<ExcludedMembersT>(value); }
    template<typename ExcludedMembersT = Aws::Vector<Aws::String>>
    CreateDBClusterEndpointResult& WithExcludedMembers(ExcludedMembersT&& value) { SetExcludedMembers(std::forward<ExcludedMembersT>(value)); return *this;}
    template<typename ExcludedMembersT = Aws::String>
    CreateDBClusterEndpointResult& AddExcludedMembers(ExcludedMembersT&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.emplace_back(std::forward<ExcludedMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointArn() const { return m_dBClusterEndpointArn; }
    template<typename DBClusterEndpointArnT = Aws::String>
    void SetDBClusterEndpointArn(DBClusterEndpointArnT&& value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn = std::forward<DBClusterEndpointArnT>(value); }
    template<typename DBClusterEndpointArnT = Aws::String>
    CreateDBClusterEndpointResult& WithDBClusterEndpointArn(DBClusterEndpointArnT&& value) { SetDBClusterEndpointArn(std::forward<DBClusterEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDBClusterEndpointResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterEndpointResourceIdentifier;
    bool m_dBClusterEndpointResourceIdentifierHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_customEndpointType;
    bool m_customEndpointTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_staticMembers;
    bool m_staticMembersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedMembers;
    bool m_excludedMembersHasBeenSet = false;

    Aws::String m_dBClusterEndpointArn;
    bool m_dBClusterEndpointArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
