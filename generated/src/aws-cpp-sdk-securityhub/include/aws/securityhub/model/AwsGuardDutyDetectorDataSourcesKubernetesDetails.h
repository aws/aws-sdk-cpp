/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails.h>
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
   * <p> An object that contains information on the status of Kubernetes data sources
   * for the detector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesKubernetesDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesKubernetesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline void SetAuditLogs(const AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline void SetAuditLogs(AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesKubernetesDetails& WithAuditLogs(const AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& value) { SetAuditLogs(value); return *this;}

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesKubernetesDetails& WithAuditLogs(AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
