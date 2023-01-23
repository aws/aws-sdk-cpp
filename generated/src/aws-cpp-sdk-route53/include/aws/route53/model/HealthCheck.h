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
    AWS_ROUTE53_API HealthCheck();
    AWS_ROUTE53_API HealthCheck(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HealthCheck& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline HealthCheck& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline HealthCheck& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters long.
     * </p>
     */
    inline HealthCheck& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline HealthCheck& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline HealthCheck& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that you specified when you created the health check.</p>
     */
    inline HealthCheck& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline const LinkedService& GetLinkedService() const{ return m_linkedService; }

    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline bool LinkedServiceHasBeenSet() const { return m_linkedServiceHasBeenSet; }

    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline void SetLinkedService(const LinkedService& value) { m_linkedServiceHasBeenSet = true; m_linkedService = value; }

    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline void SetLinkedService(LinkedService&& value) { m_linkedServiceHasBeenSet = true; m_linkedService = std::move(value); }

    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline HealthCheck& WithLinkedService(const LinkedService& value) { SetLinkedService(value); return *this;}

    /**
     * <p>If the health check was created by another service, the service that created
     * the health check. When a health check is created by another service, you can't
     * edit or delete it using Amazon Route 53. </p>
     */
    inline HealthCheck& WithLinkedService(LinkedService&& value) { SetLinkedService(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }

    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline HealthCheck& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p>A complex type that contains detailed information about one health check.</p>
     */
    inline HealthCheck& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}


    /**
     * <p>The version of the health check. You can optionally pass this value in a call
     * to <code>UpdateHealthCheck</code> to prevent overwriting another change to the
     * health check.</p>
     */
    inline long long GetHealthCheckVersion() const{ return m_healthCheckVersion; }

    /**
     * <p>The version of the health check. You can optionally pass this value in a call
     * to <code>UpdateHealthCheck</code> to prevent overwriting another change to the
     * health check.</p>
     */
    inline bool HealthCheckVersionHasBeenSet() const { return m_healthCheckVersionHasBeenSet; }

    /**
     * <p>The version of the health check. You can optionally pass this value in a call
     * to <code>UpdateHealthCheck</code> to prevent overwriting another change to the
     * health check.</p>
     */
    inline void SetHealthCheckVersion(long long value) { m_healthCheckVersionHasBeenSet = true; m_healthCheckVersion = value; }

    /**
     * <p>The version of the health check. You can optionally pass this value in a call
     * to <code>UpdateHealthCheck</code> to prevent overwriting another change to the
     * health check.</p>
     */
    inline HealthCheck& WithHealthCheckVersion(long long value) { SetHealthCheckVersion(value); return *this;}


    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline const CloudWatchAlarmConfiguration& GetCloudWatchAlarmConfiguration() const{ return m_cloudWatchAlarmConfiguration; }

    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline bool CloudWatchAlarmConfigurationHasBeenSet() const { return m_cloudWatchAlarmConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline void SetCloudWatchAlarmConfiguration(const CloudWatchAlarmConfiguration& value) { m_cloudWatchAlarmConfigurationHasBeenSet = true; m_cloudWatchAlarmConfiguration = value; }

    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline void SetCloudWatchAlarmConfiguration(CloudWatchAlarmConfiguration&& value) { m_cloudWatchAlarmConfigurationHasBeenSet = true; m_cloudWatchAlarmConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline HealthCheck& WithCloudWatchAlarmConfiguration(const CloudWatchAlarmConfiguration& value) { SetCloudWatchAlarmConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains information about the CloudWatch alarm that
     * Amazon Route 53 is monitoring for this health check.</p>
     */
    inline HealthCheck& WithCloudWatchAlarmConfiguration(CloudWatchAlarmConfiguration&& value) { SetCloudWatchAlarmConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    LinkedService m_linkedService;
    bool m_linkedServiceHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    long long m_healthCheckVersion;
    bool m_healthCheckVersionHasBeenSet = false;

    CloudWatchAlarmConfiguration m_cloudWatchAlarmConfiguration;
    bool m_cloudWatchAlarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
