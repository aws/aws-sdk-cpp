/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p> Provides information about logs to be activated for the specified broker.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerLogsPendingDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerLogsPendingDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsPendingDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsPendingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLogsPendingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline bool GetAudit() const{ return m_audit; }

    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }

    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }

    /**
     * <p> Activates audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Doesn't apply to RabbitMQ brokers. </p>
     */
    inline AwsAmazonMqBrokerLogsPendingDetails& WithAudit(bool value) { SetAudit(value); return *this;}


    /**
     * <p> Activates general logging. </p>
     */
    inline bool GetGeneral() const{ return m_general; }

    /**
     * <p> Activates general logging. </p>
     */
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }

    /**
     * <p> Activates general logging. </p>
     */
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }

    /**
     * <p> Activates general logging. </p>
     */
    inline AwsAmazonMqBrokerLogsPendingDetails& WithGeneral(bool value) { SetGeneral(value); return *this;}

  private:

    bool m_audit;
    bool m_auditHasBeenSet = false;

    bool m_general;
    bool m_generalHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
