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
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult() = default;
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AuthorizeEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const { return m_grantor; }
    template<typename GrantorT = Aws::String>
    void SetGrantor(GrantorT&& value) { m_grantorHasBeenSet = true; m_grantor = std::forward<GrantorT>(value); }
    template<typename GrantorT = Aws::String>
    AuthorizeEndpointAccessResult& WithGrantor(GrantorT&& value) { SetGrantor(std::forward<GrantorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const { return m_grantee; }
    template<typename GranteeT = Aws::String>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Aws::String>
    AuthorizeEndpointAccessResult& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    AuthorizeEndpointAccessResult& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const { return m_authorizeTime; }
    template<typename AuthorizeTimeT = Aws::Utils::DateTime>
    void SetAuthorizeTime(AuthorizeTimeT&& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = std::forward<AuthorizeTimeT>(value); }
    template<typename AuthorizeTimeT = Aws::Utils::DateTime>
    AuthorizeEndpointAccessResult& WithAuthorizeTime(AuthorizeTimeT&& value) { SetAuthorizeTime(std::forward<AuthorizeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const { return m_clusterStatus; }
    template<typename ClusterStatusT = Aws::String>
    void SetClusterStatus(ClusterStatusT&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::forward<ClusterStatusT>(value); }
    template<typename ClusterStatusT = Aws::String>
    AuthorizeEndpointAccessResult& WithClusterStatus(ClusterStatusT&& value) { SetClusterStatus(std::forward<ClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization action.</p>
     */
    inline AuthorizationStatus GetStatus() const { return m_status; }
    inline void SetStatus(AuthorizationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AuthorizeEndpointAccessResult& WithStatus(AuthorizationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const { return m_allowedAllVPCs; }
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCsHasBeenSet = true; m_allowedAllVPCs = value; }
    inline AuthorizeEndpointAccessResult& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const { return m_allowedVPCs; }
    template<typename AllowedVPCsT = Aws::Vector<Aws::String>>
    void SetAllowedVPCs(AllowedVPCsT&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = std::forward<AllowedVPCsT>(value); }
    template<typename AllowedVPCsT = Aws::Vector<Aws::String>>
    AuthorizeEndpointAccessResult& WithAllowedVPCs(AllowedVPCsT&& value) { SetAllowedVPCs(std::forward<AllowedVPCsT>(value)); return *this;}
    template<typename AllowedVPCsT = Aws::String>
    AuthorizeEndpointAccessResult& AddAllowedVPCs(AllowedVPCsT&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.emplace_back(std::forward<AllowedVPCsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const { return m_endpointCount; }
    inline void SetEndpointCount(int value) { m_endpointCountHasBeenSet = true; m_endpointCount = value; }
    inline AuthorizeEndpointAccessResult& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AuthorizeEndpointAccessResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
