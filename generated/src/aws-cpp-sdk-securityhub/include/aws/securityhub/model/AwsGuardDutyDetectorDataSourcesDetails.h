/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesCloudTrailDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesDnsLogsDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesFlowLogsDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesKubernetesDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesS3LogsDetails.h>
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
   * <p> Describes which data sources are activated for the detector. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails() = default;
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An object that contains information on the status of CloudTrail as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesCloudTrailDetails& GetCloudTrail() const { return m_cloudTrail; }
    inline bool CloudTrailHasBeenSet() const { return m_cloudTrailHasBeenSet; }
    template<typename CloudTrailT = AwsGuardDutyDetectorDataSourcesCloudTrailDetails>
    void SetCloudTrail(CloudTrailT&& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = std::forward<CloudTrailT>(value); }
    template<typename CloudTrailT = AwsGuardDutyDetectorDataSourcesCloudTrailDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithCloudTrail(CloudTrailT&& value) { SetCloudTrail(std::forward<CloudTrailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of DNS logs as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesDnsLogsDetails& GetDnsLogs() const { return m_dnsLogs; }
    inline bool DnsLogsHasBeenSet() const { return m_dnsLogsHasBeenSet; }
    template<typename DnsLogsT = AwsGuardDutyDetectorDataSourcesDnsLogsDetails>
    void SetDnsLogs(DnsLogsT&& value) { m_dnsLogsHasBeenSet = true; m_dnsLogs = std::forward<DnsLogsT>(value); }
    template<typename DnsLogsT = AwsGuardDutyDetectorDataSourcesDnsLogsDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithDnsLogs(DnsLogsT&& value) { SetDnsLogs(std::forward<DnsLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of VPC Flow Logs as a data
     * source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesFlowLogsDetails& GetFlowLogs() const { return m_flowLogs; }
    inline bool FlowLogsHasBeenSet() const { return m_flowLogsHasBeenSet; }
    template<typename FlowLogsT = AwsGuardDutyDetectorDataSourcesFlowLogsDetails>
    void SetFlowLogs(FlowLogsT&& value) { m_flowLogsHasBeenSet = true; m_flowLogs = std::forward<FlowLogsT>(value); }
    template<typename FlowLogsT = AwsGuardDutyDetectorDataSourcesFlowLogsDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithFlowLogs(FlowLogsT&& value) { SetFlowLogs(std::forward<FlowLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of Kubernetes data sources
     * for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesKubernetesDetails& GetKubernetes() const { return m_kubernetes; }
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }
    template<typename KubernetesT = AwsGuardDutyDetectorDataSourcesKubernetesDetails>
    void SetKubernetes(KubernetesT&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::forward<KubernetesT>(value); }
    template<typename KubernetesT = AwsGuardDutyDetectorDataSourcesKubernetesDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithKubernetes(KubernetesT&& value) { SetKubernetes(std::forward<KubernetesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of Malware Protection as a
     * data source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails& GetMalwareProtection() const { return m_malwareProtection; }
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }
    template<typename MalwareProtectionT = AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails>
    void SetMalwareProtection(MalwareProtectionT&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::forward<MalwareProtectionT>(value); }
    template<typename MalwareProtectionT = AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithMalwareProtection(MalwareProtectionT&& value) { SetMalwareProtection(std::forward<MalwareProtectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information on the status of S3 Data event logs as a
     * data source for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesS3LogsDetails& GetS3Logs() const { return m_s3Logs; }
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }
    template<typename S3LogsT = AwsGuardDutyDetectorDataSourcesS3LogsDetails>
    void SetS3Logs(S3LogsT&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::forward<S3LogsT>(value); }
    template<typename S3LogsT = AwsGuardDutyDetectorDataSourcesS3LogsDetails>
    AwsGuardDutyDetectorDataSourcesDetails& WithS3Logs(S3LogsT&& value) { SetS3Logs(std::forward<S3LogsT>(value)); return *this;}
    ///@}
  private:

    AwsGuardDutyDetectorDataSourcesCloudTrailDetails m_cloudTrail;
    bool m_cloudTrailHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesDnsLogsDetails m_dnsLogs;
    bool m_dnsLogsHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesFlowLogsDetails m_flowLogs;
    bool m_flowLogsHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesKubernetesDetails m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesMalwareProtectionDetails m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;

    AwsGuardDutyDetectorDataSourcesS3LogsDetails m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
