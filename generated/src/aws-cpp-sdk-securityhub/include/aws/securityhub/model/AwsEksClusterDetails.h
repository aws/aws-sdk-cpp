/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEksClusterResourcesVpcConfigDetails.h>
#include <aws/securityhub/model/AwsEksClusterLoggingDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Amazon EKS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEksClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsEksClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEksClusterDetails() = default;
    AWS_SECURITYHUB_API AwsEksClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEksClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsEksClusterDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate authority data for the cluster.</p>
     */
    inline const Aws::String& GetCertificateAuthorityData() const { return m_certificateAuthorityData; }
    inline bool CertificateAuthorityDataHasBeenSet() const { return m_certificateAuthorityDataHasBeenSet; }
    template<typename CertificateAuthorityDataT = Aws::String>
    void SetCertificateAuthorityData(CertificateAuthorityDataT&& value) { m_certificateAuthorityDataHasBeenSet = true; m_certificateAuthorityData = std::forward<CertificateAuthorityDataT>(value); }
    template<typename CertificateAuthorityDataT = Aws::String>
    AwsEksClusterDetails& WithCertificateAuthorityData(CertificateAuthorityDataT&& value) { SetCertificateAuthorityData(std::forward<CertificateAuthorityDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. Valid values are as follows:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATING</code> </p> </li> <li>
     * <p> <code>DELETING</code> </p> </li> <li> <p> <code>FAILED</code> </p> </li>
     * <li> <p> <code>PENDING</code> </p> </li> <li> <p> <code>UPDATING</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    template<typename ClusterStatusT = Aws::String>
    void SetClusterStatus(ClusterStatusT&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::forward<ClusterStatusT>(value); }
    template<typename ClusterStatusT = Aws::String>
    AwsEksClusterDetails& WithClusterStatus(ClusterStatusT&& value) { SetClusterStatus(std::forward<ClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the Amazon EKS API server.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    AwsEksClusterDetails& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEksClusterDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration used by the cluster control plane.</p>
     */
    inline const AwsEksClusterResourcesVpcConfigDetails& GetResourcesVpcConfig() const { return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    template<typename ResourcesVpcConfigT = AwsEksClusterResourcesVpcConfigDetails>
    void SetResourcesVpcConfig(ResourcesVpcConfigT&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::forward<ResourcesVpcConfigT>(value); }
    template<typename ResourcesVpcConfigT = AwsEksClusterResourcesVpcConfigDetails>
    AwsEksClusterDetails& WithResourcesVpcConfig(ResourcesVpcConfigT&& value) { SetResourcesVpcConfig(std::forward<ResourcesVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides permissions for the Amazon EKS control
     * plane to make calls to Amazon Web Services API operations on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AwsEksClusterDetails& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS server version for the cluster.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AwsEksClusterDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for the cluster.</p>
     */
    inline const AwsEksClusterLoggingDetails& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = AwsEksClusterLoggingDetails>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = AwsEksClusterLoggingDetails>
    AwsEksClusterDetails& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_certificateAuthorityData;
    bool m_certificateAuthorityDataHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEksClusterResourcesVpcConfigDetails m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    AwsEksClusterLoggingDetails m_logging;
    bool m_loggingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
