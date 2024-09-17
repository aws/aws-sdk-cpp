/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/AuthorizationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes an endpoint authorization for authorizing Redshift-managed VPC
   * endpoint access to a cluster across Amazon Web Services accounts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EndpointAuthorization">AWS
   * API Reference</a></p>
   */
  class AuthorizeEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult();
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const{ return m_grantor; }
    inline void SetGrantor(const Aws::String& value) { m_grantor = value; }
    inline void SetGrantor(Aws::String&& value) { m_grantor = std::move(value); }
    inline void SetGrantor(const char* value) { m_grantor.assign(value); }
    inline AuthorizeEndpointAccessResult& WithGrantor(const Aws::String& value) { SetGrantor(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithGrantor(Aws::String&& value) { SetGrantor(std::move(value)); return *this;}
    inline AuthorizeEndpointAccessResult& WithGrantor(const char* value) { SetGrantor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const{ return m_grantee; }
    inline void SetGrantee(const Aws::String& value) { m_grantee = value; }
    inline void SetGrantee(Aws::String&& value) { m_grantee = std::move(value); }
    inline void SetGrantee(const char* value) { m_grantee.assign(value); }
    inline AuthorizeEndpointAccessResult& WithGrantee(const Aws::String& value) { SetGrantee(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithGrantee(Aws::String&& value) { SetGrantee(std::move(value)); return *this;}
    inline AuthorizeEndpointAccessResult& WithGrantee(const char* value) { SetGrantee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }
    inline AuthorizeEndpointAccessResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline AuthorizeEndpointAccessResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const{ return m_authorizeTime; }
    inline void SetAuthorizeTime(const Aws::Utils::DateTime& value) { m_authorizeTime = value; }
    inline void SetAuthorizeTime(Aws::Utils::DateTime&& value) { m_authorizeTime = std::move(value); }
    inline AuthorizeEndpointAccessResult& WithAuthorizeTime(const Aws::Utils::DateTime& value) { SetAuthorizeTime(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithAuthorizeTime(Aws::Utils::DateTime&& value) { SetAuthorizeTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatus = value; }
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatus = std::move(value); }
    inline void SetClusterStatus(const char* value) { m_clusterStatus.assign(value); }
    inline AuthorizeEndpointAccessResult& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}
    inline AuthorizeEndpointAccessResult& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization action.</p>
     */
    inline const AuthorizationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AuthorizationStatus& value) { m_status = value; }
    inline void SetStatus(AuthorizationStatus&& value) { m_status = std::move(value); }
    inline AuthorizeEndpointAccessResult& WithStatus(const AuthorizationStatus& value) { SetStatus(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithStatus(AuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const{ return m_allowedAllVPCs; }
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCs = value; }
    inline AuthorizeEndpointAccessResult& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const{ return m_allowedVPCs; }
    inline void SetAllowedVPCs(const Aws::Vector<Aws::String>& value) { m_allowedVPCs = value; }
    inline void SetAllowedVPCs(Aws::Vector<Aws::String>&& value) { m_allowedVPCs = std::move(value); }
    inline AuthorizeEndpointAccessResult& WithAllowedVPCs(const Aws::Vector<Aws::String>& value) { SetAllowedVPCs(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithAllowedVPCs(Aws::Vector<Aws::String>&& value) { SetAllowedVPCs(std::move(value)); return *this;}
    inline AuthorizeEndpointAccessResult& AddAllowedVPCs(const Aws::String& value) { m_allowedVPCs.push_back(value); return *this; }
    inline AuthorizeEndpointAccessResult& AddAllowedVPCs(Aws::String&& value) { m_allowedVPCs.push_back(std::move(value)); return *this; }
    inline AuthorizeEndpointAccessResult& AddAllowedVPCs(const char* value) { m_allowedVPCs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const{ return m_endpointCount; }
    inline void SetEndpointCount(int value) { m_endpointCount = value; }
    inline AuthorizeEndpointAccessResult& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AuthorizeEndpointAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AuthorizeEndpointAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_grantor;

    Aws::String m_grantee;

    Aws::String m_clusterIdentifier;

    Aws::Utils::DateTime m_authorizeTime;

    Aws::String m_clusterStatus;

    AuthorizationStatus m_status;

    bool m_allowedAllVPCs;

    Aws::Vector<Aws::String> m_allowedVPCs;

    int m_endpointCount;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
