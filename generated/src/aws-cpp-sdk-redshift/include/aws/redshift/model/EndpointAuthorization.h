﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/AuthorizationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
  class EndpointAuthorization
  {
  public:
    AWS_REDSHIFT_API EndpointAuthorization();
    AWS_REDSHIFT_API EndpointAuthorization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EndpointAuthorization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const{ return m_grantor; }
    inline bool GrantorHasBeenSet() const { return m_grantorHasBeenSet; }
    inline void SetGrantor(const Aws::String& value) { m_grantorHasBeenSet = true; m_grantor = value; }
    inline void SetGrantor(Aws::String&& value) { m_grantorHasBeenSet = true; m_grantor = std::move(value); }
    inline void SetGrantor(const char* value) { m_grantorHasBeenSet = true; m_grantor.assign(value); }
    inline EndpointAuthorization& WithGrantor(const Aws::String& value) { SetGrantor(value); return *this;}
    inline EndpointAuthorization& WithGrantor(Aws::String&& value) { SetGrantor(std::move(value)); return *this;}
    inline EndpointAuthorization& WithGrantor(const char* value) { SetGrantor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const{ return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    inline void SetGrantee(const Aws::String& value) { m_granteeHasBeenSet = true; m_grantee = value; }
    inline void SetGrantee(Aws::String&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }
    inline void SetGrantee(const char* value) { m_granteeHasBeenSet = true; m_grantee.assign(value); }
    inline EndpointAuthorization& WithGrantee(const Aws::String& value) { SetGrantee(value); return *this;}
    inline EndpointAuthorization& WithGrantee(Aws::String&& value) { SetGrantee(std::move(value)); return *this;}
    inline EndpointAuthorization& WithGrantee(const char* value) { SetGrantee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline EndpointAuthorization& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline EndpointAuthorization& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline EndpointAuthorization& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const{ return m_authorizeTime; }
    inline bool AuthorizeTimeHasBeenSet() const { return m_authorizeTimeHasBeenSet; }
    inline void SetAuthorizeTime(const Aws::Utils::DateTime& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = value; }
    inline void SetAuthorizeTime(Aws::Utils::DateTime&& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = std::move(value); }
    inline EndpointAuthorization& WithAuthorizeTime(const Aws::Utils::DateTime& value) { SetAuthorizeTime(value); return *this;}
    inline EndpointAuthorization& WithAuthorizeTime(Aws::Utils::DateTime&& value) { SetAuthorizeTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }
    inline EndpointAuthorization& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}
    inline EndpointAuthorization& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}
    inline EndpointAuthorization& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization action.</p>
     */
    inline const AuthorizationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AuthorizationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AuthorizationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EndpointAuthorization& WithStatus(const AuthorizationStatus& value) { SetStatus(value); return *this;}
    inline EndpointAuthorization& WithStatus(AuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const{ return m_allowedAllVPCs; }
    inline bool AllowedAllVPCsHasBeenSet() const { return m_allowedAllVPCsHasBeenSet; }
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCsHasBeenSet = true; m_allowedAllVPCs = value; }
    inline EndpointAuthorization& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const{ return m_allowedVPCs; }
    inline bool AllowedVPCsHasBeenSet() const { return m_allowedVPCsHasBeenSet; }
    inline void SetAllowedVPCs(const Aws::Vector<Aws::String>& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = value; }
    inline void SetAllowedVPCs(Aws::Vector<Aws::String>&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = std::move(value); }
    inline EndpointAuthorization& WithAllowedVPCs(const Aws::Vector<Aws::String>& value) { SetAllowedVPCs(value); return *this;}
    inline EndpointAuthorization& WithAllowedVPCs(Aws::Vector<Aws::String>&& value) { SetAllowedVPCs(std::move(value)); return *this;}
    inline EndpointAuthorization& AddAllowedVPCs(const Aws::String& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(value); return *this; }
    inline EndpointAuthorization& AddAllowedVPCs(Aws::String&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(std::move(value)); return *this; }
    inline EndpointAuthorization& AddAllowedVPCs(const char* value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const{ return m_endpointCount; }
    inline bool EndpointCountHasBeenSet() const { return m_endpointCountHasBeenSet; }
    inline void SetEndpointCount(int value) { m_endpointCountHasBeenSet = true; m_endpointCount = value; }
    inline EndpointAuthorization& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EndpointAuthorization& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EndpointAuthorization& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_grantor;
    bool m_grantorHasBeenSet = false;

    Aws::String m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_authorizeTime;
    bool m_authorizeTimeHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    AuthorizationStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_allowedAllVPCs;
    bool m_allowedAllVPCsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedVPCs;
    bool m_allowedVPCsHasBeenSet = false;

    int m_endpointCount;
    bool m_endpointCountHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
