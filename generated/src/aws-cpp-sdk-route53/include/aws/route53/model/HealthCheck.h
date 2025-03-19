/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/LinkedService.h>
#include <aws/route53/model/HealthCheckConfig.h>
#include <aws/route53/model/CloudWatchAlarmConfiguration.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about one health check that is
   * associated with the current Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheck">AWS
   * API Reference</a></p>
   */
  class HealthCheck
  {
  public:
    AWS_ROUTE53_API HealthCheck() = default;
    AWS_ROUTE53_API HealthCheck(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HealthCheck& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    HealthCheck& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    HealthCheck& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline const LinkedService& GetLinkedService() const { return m_linkedService; }
    inline bool LinkedServiceHasBeenSet() const { return m_linkedServiceHasBeenSet; }
    template<typename LinkedServiceT = LinkedService>
    void SetLinkedService(LinkedServiceT&& value) { m_linkedServiceHasBeenSet = true; m_linkedService = std::forward<LinkedServiceT>(value); }
    template<typename LinkedServiceT = LinkedService>
    HealthCheck& WithLinkedService(LinkedServiceT&& value) { SetLinkedService(std::forward<LinkedServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const { return m_healthCheckConfig; }
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    void SetHealthCheckConfig(HealthCheckConfigT&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::forward<HealthCheckConfigT>(value); }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    HealthCheck& WithHealthCheckConfig(HealthCheckConfigT&& value) { SetHealthCheckConfig(std::forward<HealthCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the health check. You can optionally pass this value in a call
     * to <code>UpdateHealthCheck</code> to prevent overwriting another change to the
     * health check.</p>
     */
    inline long long GetHealthCheckVersion() const { return m_healthCheckVersion; }
    inline bool HealthCheckVersionHasBeenSet() const { return m_healthCheckVersionHasBeenSet; }
    inline void SetHealthCheckVersion(long long value) { m_healthCheckVersionHasBeenSet = true; m_healthCheckVersion = value; }
    inline HealthCheck& WithHealthCheckVersion(long long value) { SetHealthCheckVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline const CloudWatchAlarmConfiguration& GetCloudWatchAlarmConfiguration() const { return m_cloudWatchAlarmConfiguration; }
    inline bool CloudWatchAlarmConfigurationHasBeenSet() const { return m_cloudWatchAlarmConfigurationHasBeenSet; }
    template<typename CloudWatchAlarmConfigurationT = CloudWatchAlarmConfiguration>
    void SetCloudWatchAlarmConfiguration(CloudWatchAlarmConfigurationT&& value) { m_cloudWatchAlarmConfigurationHasBeenSet = true; m_cloudWatchAlarmConfiguration = std::forward<CloudWatchAlarmConfigurationT>(value); }
    template<typename CloudWatchAlarmConfigurationT = CloudWatchAlarmConfiguration>
    HealthCheck& WithCloudWatchAlarmConfiguration(CloudWatchAlarmConfigurationT&& value) { SetCloudWatchAlarmConfiguration(std::forward<CloudWatchAlarmConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    LinkedService m_linkedService;
    bool m_linkedServiceHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    long long m_healthCheckVersion{0};
    bool m_healthCheckVersionHasBeenSet = false;

    CloudWatchAlarmConfiguration m_cloudWatchAlarmConfiguration;
    bool m_cloudWatchAlarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
