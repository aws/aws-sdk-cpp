/**
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
    AWS_REDSHIFT_API EndpointAuthorization() = default;
    AWS_REDSHIFT_API EndpointAuthorization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EndpointAuthorization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const { return m_grantor; }
    inline bool GrantorHasBeenSet() const { return m_grantorHasBeenSet; }
    template<typename GrantorT = Aws::String>
    void SetGrantor(GrantorT&& value) { m_grantorHasBeenSet = true; m_grantor = std::forward<GrantorT>(value); }
    template<typename GrantorT = Aws::String>
    EndpointAuthorization& WithGrantor(GrantorT&& value) { SetGrantor(std::forward<GrantorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = Aws::String>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Aws::String>
    EndpointAuthorization& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    EndpointAuthorization& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const { return m_authorizeTime; }
    inline bool AuthorizeTimeHasBeenSet() const { return m_authorizeTimeHasBeenSet; }
    template<typename AuthorizeTimeT = Aws::Utils::DateTime>
    void SetAuthorizeTime(AuthorizeTimeT&& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = std::forward<AuthorizeTimeT>(value); }
    template<typename AuthorizeTimeT = Aws::Utils::DateTime>
    EndpointAuthorization& WithAuthorizeTime(AuthorizeTimeT&& value) { SetAuthorizeTime(std::forward<AuthorizeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    template<typename ClusterStatusT = Aws::String>
    void SetClusterStatus(ClusterStatusT&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::forward<ClusterStatusT>(value); }
    template<typename ClusterStatusT = Aws::String>
    EndpointAuthorization& WithClusterStatus(ClusterStatusT&& value) { SetClusterStatus(std::forward<ClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization action.</p>
     */
    inline AuthorizationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AuthorizationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EndpointAuthorization& WithStatus(AuthorizationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const { return m_allowedAllVPCs; }
    inline bool AllowedAllVPCsHasBeenSet() const { return m_allowedAllVPCsHasBeenSet; }
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCsHasBeenSet = true; m_allowedAllVPCs = value; }
    inline EndpointAuthorization& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const { return m_allowedVPCs; }
    inline bool AllowedVPCsHasBeenSet() const { return m_allowedVPCsHasBeenSet; }
    template<typename AllowedVPCsT = Aws::Vector<Aws::String>>
    void SetAllowedVPCs(AllowedVPCsT&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = std::forward<AllowedVPCsT>(value); }
    template<typename AllowedVPCsT = Aws::Vector<Aws::String>>
    EndpointAuthorization& WithAllowedVPCs(AllowedVPCsT&& value) { SetAllowedVPCs(std::forward<AllowedVPCsT>(value)); return *this;}
    template<typename AllowedVPCsT = Aws::String>
    EndpointAuthorization& AddAllowedVPCs(AllowedVPCsT&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.emplace_back(std::forward<AllowedVPCsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const { return m_endpointCount; }
    inline bool EndpointCountHasBeenSet() const { return m_endpointCountHasBeenSet; }
    inline void SetEndpointCount(int value) { m_endpointCountHasBeenSet = true; m_endpointCount = value; }
    inline EndpointAuthorization& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EndpointAuthorization& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_grantor;
    bool m_grantorHasBeenSet = false;

    Aws::String m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_authorizeTime{};
    bool m_authorizeTimeHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    AuthorizationStatus m_status{AuthorizationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_allowedAllVPCs{false};
    bool m_allowedAllVPCsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedVPCs;
    bool m_allowedVPCsHasBeenSet = false;

    int m_endpointCount{0};
    bool m_endpointCountHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = true;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
