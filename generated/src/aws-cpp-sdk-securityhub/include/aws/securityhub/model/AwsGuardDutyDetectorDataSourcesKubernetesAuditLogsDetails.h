/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> An object that contains information on the status of Kubernetes audit logs
   * as a data source for the detector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> Describes whether Kubernetes audit logs are activated as a data source for
     * the detector. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesKubernetesAuditLogsDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
