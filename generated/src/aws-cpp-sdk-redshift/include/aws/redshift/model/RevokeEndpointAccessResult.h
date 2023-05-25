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
  class RevokeEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API RevokeEndpointAccessResult();
    AWS_REDSHIFT_API RevokeEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API RevokeEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const{ return m_grantor; }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(const Aws::String& value) { m_grantor = value; }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(Aws::String&& value) { m_grantor = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(const char* value) { m_grantor.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantor(const Aws::String& value) { SetGrantor(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantor(Aws::String&& value) { SetGrantor(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantor(const char* value) { SetGrantor(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(const Aws::String& value) { m_grantee = value; }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(Aws::String&& value) { m_grantee = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(const char* value) { m_grantee.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantee(const Aws::String& value) { SetGrantee(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantee(Aws::String&& value) { SetGrantee(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithGrantee(const char* value) { SetGrantee(value); return *this;}


    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const{ return m_authorizeTime; }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline void SetAuthorizeTime(const Aws::Utils::DateTime& value) { m_authorizeTime = value; }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline void SetAuthorizeTime(Aws::Utils::DateTime&& value) { m_authorizeTime = std::move(value); }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline RevokeEndpointAccessResult& WithAuthorizeTime(const Aws::Utils::DateTime& value) { SetAuthorizeTime(value); return *this;}

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline RevokeEndpointAccessResult& WithAuthorizeTime(Aws::Utils::DateTime&& value) { SetAuthorizeTime(std::move(value)); return *this;}


    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatus = value; }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatus = std::move(value); }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(const char* value) { m_clusterStatus.assign(value); }

    /**
     * <p>The status of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The status of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}


    /**
     * <p>The status of the authorization action.</p>
     */
    inline const AuthorizationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline void SetStatus(const AuthorizationStatus& value) { m_status = value; }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline void SetStatus(AuthorizationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline RevokeEndpointAccessResult& WithStatus(const AuthorizationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the authorization action.</p>
     */
    inline RevokeEndpointAccessResult& WithStatus(AuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const{ return m_allowedAllVPCs; }

    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCs = value; }

    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}


    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const{ return m_allowedVPCs; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline void SetAllowedVPCs(const Aws::Vector<Aws::String>& value) { m_allowedVPCs = value; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline void SetAllowedVPCs(Aws::Vector<Aws::String>&& value) { m_allowedVPCs = std::move(value); }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithAllowedVPCs(const Aws::Vector<Aws::String>& value) { SetAllowedVPCs(value); return *this;}

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline RevokeEndpointAccessResult& WithAllowedVPCs(Aws::Vector<Aws::String>&& value) { SetAllowedVPCs(std::move(value)); return *this;}

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline RevokeEndpointAccessResult& AddAllowedVPCs(const Aws::String& value) { m_allowedVPCs.push_back(value); return *this; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline RevokeEndpointAccessResult& AddAllowedVPCs(Aws::String&& value) { m_allowedVPCs.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline RevokeEndpointAccessResult& AddAllowedVPCs(const char* value) { m_allowedVPCs.push_back(value); return *this; }


    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const{ return m_endpointCount; }

    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline void SetEndpointCount(int value) { m_endpointCount = value; }

    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline RevokeEndpointAccessResult& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RevokeEndpointAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RevokeEndpointAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

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
