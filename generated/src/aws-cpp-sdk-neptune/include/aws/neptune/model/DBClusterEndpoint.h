/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>This data type represents the information you need to connect to an Amazon
   * Neptune DB cluster. This data type is used as a response element in the
   * following actions:</p> <ul> <li> <p> <code>CreateDBClusterEndpoint</code> </p>
   * </li> <li> <p> <code>DescribeDBClusterEndpoints</code> </p> </li> <li> <p>
   * <code>ModifyDBClusterEndpoint</code> </p> </li> <li> <p>
   * <code>DeleteDBClusterEndpoint</code> </p> </li> </ul> <p>For the data structure
   * that represents Amazon Neptune DB instance endpoints, see
   * <code>Endpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBClusterEndpoint">AWS
   * API Reference</a></p>
   */
  class DBClusterEndpoint
  {
  public:
    AWS_NEPTUNE_API DBClusterEndpoint();
    AWS_NEPTUNE_API DBClusterEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBClusterEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = value; }
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::move(value); }
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier.assign(value); }
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DBClusterEndpoint& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DBClusterEndpoint& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointResourceIdentifier() const{ return m_dBClusterEndpointResourceIdentifier; }
    inline bool DBClusterEndpointResourceIdentifierHasBeenSet() const { return m_dBClusterEndpointResourceIdentifierHasBeenSet; }
    inline void SetDBClusterEndpointResourceIdentifier(const Aws::String& value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier = value; }
    inline void SetDBClusterEndpointResourceIdentifier(Aws::String&& value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier = std::move(value); }
    inline void SetDBClusterEndpointResourceIdentifier(const char* value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier.assign(value); }
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(const Aws::String& value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(Aws::String&& value) { SetDBClusterEndpointResourceIdentifier(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(const char* value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DBClusterEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DBClusterEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>inactive</code>,
     * <code>modifying</code>. The <code>inactive</code> state applies to an endpoint
     * that cannot be used for a certain kind of cluster, such as a <code>writer</code>
     * endpoint for a read-only secondary cluster in a global database.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBClusterEndpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBClusterEndpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(const Aws::String& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline void SetEndpointType(Aws::String&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }
    inline void SetEndpointType(const char* value) { m_endpointTypeHasBeenSet = true; m_endpointType.assign(value); }
    inline DBClusterEndpoint& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}
    inline DBClusterEndpoint& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>WRITER</code>, <code>ANY</code>.</p>
     */
    inline const Aws::String& GetCustomEndpointType() const{ return m_customEndpointType; }
    inline bool CustomEndpointTypeHasBeenSet() const { return m_customEndpointTypeHasBeenSet; }
    inline void SetCustomEndpointType(const Aws::String& value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType = value; }
    inline void SetCustomEndpointType(Aws::String&& value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType = std::move(value); }
    inline void SetCustomEndpointType(const char* value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType.assign(value); }
    inline DBClusterEndpoint& WithCustomEndpointType(const Aws::String& value) { SetCustomEndpointType(value); return *this;}
    inline DBClusterEndpoint& WithCustomEndpointType(Aws::String&& value) { SetCustomEndpointType(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithCustomEndpointType(const char* value) { SetCustomEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const{ return m_staticMembers; }
    inline bool StaticMembersHasBeenSet() const { return m_staticMembersHasBeenSet; }
    inline void SetStaticMembers(const Aws::Vector<Aws::String>& value) { m_staticMembersHasBeenSet = true; m_staticMembers = value; }
    inline void SetStaticMembers(Aws::Vector<Aws::String>&& value) { m_staticMembersHasBeenSet = true; m_staticMembers = std::move(value); }
    inline DBClusterEndpoint& WithStaticMembers(const Aws::Vector<Aws::String>& value) { SetStaticMembers(value); return *this;}
    inline DBClusterEndpoint& WithStaticMembers(Aws::Vector<Aws::String>&& value) { SetStaticMembers(std::move(value)); return *this;}
    inline DBClusterEndpoint& AddStaticMembers(const Aws::String& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }
    inline DBClusterEndpoint& AddStaticMembers(Aws::String&& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(std::move(value)); return *this; }
    inline DBClusterEndpoint& AddStaticMembers(const char* value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const{ return m_excludedMembers; }
    inline bool ExcludedMembersHasBeenSet() const { return m_excludedMembersHasBeenSet; }
    inline void SetExcludedMembers(const Aws::Vector<Aws::String>& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = value; }
    inline void SetExcludedMembers(Aws::Vector<Aws::String>&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = std::move(value); }
    inline DBClusterEndpoint& WithExcludedMembers(const Aws::Vector<Aws::String>& value) { SetExcludedMembers(value); return *this;}
    inline DBClusterEndpoint& WithExcludedMembers(Aws::Vector<Aws::String>&& value) { SetExcludedMembers(std::move(value)); return *this;}
    inline DBClusterEndpoint& AddExcludedMembers(const Aws::String& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }
    inline DBClusterEndpoint& AddExcludedMembers(Aws::String&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(std::move(value)); return *this; }
    inline DBClusterEndpoint& AddExcludedMembers(const char* value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointArn() const{ return m_dBClusterEndpointArn; }
    inline bool DBClusterEndpointArnHasBeenSet() const { return m_dBClusterEndpointArnHasBeenSet; }
    inline void SetDBClusterEndpointArn(const Aws::String& value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn = value; }
    inline void SetDBClusterEndpointArn(Aws::String&& value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn = std::move(value); }
    inline void SetDBClusterEndpointArn(const char* value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn.assign(value); }
    inline DBClusterEndpoint& WithDBClusterEndpointArn(const Aws::String& value) { SetDBClusterEndpointArn(value); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointArn(Aws::String&& value) { SetDBClusterEndpointArn(std::move(value)); return *this;}
    inline DBClusterEndpoint& WithDBClusterEndpointArn(const char* value) { SetDBClusterEndpointArn(value); return *this;}
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
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
