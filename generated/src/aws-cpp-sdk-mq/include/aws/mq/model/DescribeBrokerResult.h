/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/mq/model/Configurations.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EncryptionOptions.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/LogsSummary.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mq/model/ActionRequired.h>
#include <aws/mq/model/BrokerInstance.h>
#include <aws/mq/model/UserSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{
  class DescribeBrokerResult
  {
  public:
    AWS_MQ_API DescribeBrokerResult();
    AWS_MQ_API DescribeBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline const Aws::Vector<ActionRequired>& GetActionsRequired() const{ return m_actionsRequired; }

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline void SetActionsRequired(const Aws::Vector<ActionRequired>& value) { m_actionsRequired = value; }

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline void SetActionsRequired(Aws::Vector<ActionRequired>&& value) { m_actionsRequired = std::move(value); }

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline DescribeBrokerResult& WithActionsRequired(const Aws::Vector<ActionRequired>& value) { SetActionsRequired(value); return *this;}

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline DescribeBrokerResult& WithActionsRequired(Aws::Vector<ActionRequired>&& value) { SetActionsRequired(std::move(value)); return *this;}

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline DescribeBrokerResult& AddActionsRequired(const ActionRequired& value) { m_actionsRequired.push_back(value); return *this; }

    /**
     * <p>A list of actions required for a broker.</p>
     */
    inline DescribeBrokerResult& AddActionsRequired(ActionRequired&& value) { m_actionsRequired.push_back(std::move(value)); return *this; }


    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }

    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }

    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline DescribeBrokerResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline DescribeBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline DescribeBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArn = value; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArn = std::move(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const char* value) { m_brokerArn.assign(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline DescribeBrokerResult& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline DescribeBrokerResult& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline DescribeBrokerResult& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline DescribeBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline const Aws::Vector<BrokerInstance>& GetBrokerInstances() const{ return m_brokerInstances; }

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline void SetBrokerInstances(const Aws::Vector<BrokerInstance>& value) { m_brokerInstances = value; }

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline void SetBrokerInstances(Aws::Vector<BrokerInstance>&& value) { m_brokerInstances = std::move(value); }

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline DescribeBrokerResult& WithBrokerInstances(const Aws::Vector<BrokerInstance>& value) { SetBrokerInstances(value); return *this;}

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline DescribeBrokerResult& WithBrokerInstances(Aws::Vector<BrokerInstance>&& value) { SetBrokerInstances(std::move(value)); return *this;}

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline DescribeBrokerResult& AddBrokerInstances(const BrokerInstance& value) { m_brokerInstances.push_back(value); return *this; }

    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline DescribeBrokerResult& AddBrokerInstances(BrokerInstance&& value) { m_brokerInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(const Aws::String& value) { m_brokerName = value; }

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(Aws::String&& value) { m_brokerName = std::move(value); }

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(const char* value) { m_brokerName.assign(value); }

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline DescribeBrokerResult& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline DescribeBrokerResult& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}

    /**
     * <p>The broker's name. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline DescribeBrokerResult& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}


    /**
     * <p>The broker's status.</p>
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }

    /**
     * <p>The broker's status.</p>
     */
    inline void SetBrokerState(const BrokerState& value) { m_brokerState = value; }

    /**
     * <p>The broker's status.</p>
     */
    inline void SetBrokerState(BrokerState&& value) { m_brokerState = std::move(value); }

    /**
     * <p>The broker's status.</p>
     */
    inline DescribeBrokerResult& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}

    /**
     * <p>The broker's status.</p>
     */
    inline DescribeBrokerResult& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}


    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline const Configurations& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline void SetConfigurations(const Configurations& value) { m_configurations = value; }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline void SetConfigurations(Configurations&& value) { m_configurations = std::move(value); }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline DescribeBrokerResult& WithConfigurations(const Configurations& value) { SetConfigurations(value); return *this;}

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline DescribeBrokerResult& WithConfigurations(Configurations&& value) { SetConfigurations(std::move(value)); return *this;}


    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline DescribeBrokerResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The time when the broker was created.</p>
     */
    inline DescribeBrokerResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The broker's deployment mode.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentMode = value; }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentMode = std::move(value); }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline DescribeBrokerResult& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline DescribeBrokerResult& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}


    /**
     * <p>Encryption options for the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const EncryptionOptions& GetEncryptionOptions() const{ return m_encryptionOptions; }

    /**
     * <p>Encryption options for the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetEncryptionOptions(const EncryptionOptions& value) { m_encryptionOptions = value; }

    /**
     * <p>Encryption options for the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetEncryptionOptions(EncryptionOptions&& value) { m_encryptionOptions = std::move(value); }

    /**
     * <p>Encryption options for the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline DescribeBrokerResult& WithEncryptionOptions(const EncryptionOptions& value) { SetEncryptionOptions(value); return *this;}

    /**
     * <p>Encryption options for the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline DescribeBrokerResult& WithEncryptionOptions(EncryptionOptions&& value) { SetEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }

    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }

    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline DescribeBrokerResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline DescribeBrokerResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The broker engine's version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }

    /**
     * <p>The broker's instance type.</p>
     */
    inline DescribeBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * <p>The broker's instance type.</p>
     */
    inline DescribeBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>The broker's instance type.</p>
     */
    inline DescribeBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }

    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline void SetLdapServerMetadata(const LdapServerMetadataOutput& value) { m_ldapServerMetadata = value; }

    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline void SetLdapServerMetadata(LdapServerMetadataOutput&& value) { m_ldapServerMetadata = std::move(value); }

    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline DescribeBrokerResult& WithLdapServerMetadata(const LdapServerMetadataOutput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline DescribeBrokerResult& WithLdapServerMetadata(LdapServerMetadataOutput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline const LogsSummary& GetLogs() const{ return m_logs; }

    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline void SetLogs(const LogsSummary& value) { m_logs = value; }

    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline void SetLogs(LogsSummary&& value) { m_logs = std::move(value); }

    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline DescribeBrokerResult& WithLogs(const LogsSummary& value) { SetLogs(value); return *this;}

    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline DescribeBrokerResult& WithLogs(LogsSummary&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTime = value; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTime = std::move(value); }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}


    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetPendingAuthenticationStrategy() const{ return m_pendingAuthenticationStrategy; }

    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline void SetPendingAuthenticationStrategy(const AuthenticationStrategy& value) { m_pendingAuthenticationStrategy = value; }

    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline void SetPendingAuthenticationStrategy(AuthenticationStrategy&& value) { m_pendingAuthenticationStrategy = std::move(value); }

    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline DescribeBrokerResult& WithPendingAuthenticationStrategy(const AuthenticationStrategy& value) { SetPendingAuthenticationStrategy(value); return *this;}

    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline DescribeBrokerResult& WithPendingAuthenticationStrategy(AuthenticationStrategy&& value) { SetPendingAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetPendingEngineVersion() const{ return m_pendingEngineVersion; }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetPendingEngineVersion(const Aws::String& value) { m_pendingEngineVersion = value; }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetPendingEngineVersion(Aws::String&& value) { m_pendingEngineVersion = std::move(value); }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetPendingEngineVersion(const char* value) { m_pendingEngineVersion.assign(value); }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(const Aws::String& value) { SetPendingEngineVersion(value); return *this;}

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(Aws::String&& value) { SetPendingEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(const char* value) { SetPendingEngineVersion(value); return *this;}


    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetPendingHostInstanceType() const{ return m_pendingHostInstanceType; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetPendingHostInstanceType(const Aws::String& value) { m_pendingHostInstanceType = value; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetPendingHostInstanceType(Aws::String&& value) { m_pendingHostInstanceType = std::move(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetPendingHostInstanceType(const char* value) { m_pendingHostInstanceType.assign(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingHostInstanceType(const Aws::String& value) { SetPendingHostInstanceType(value); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingHostInstanceType(Aws::String&& value) { SetPendingHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline DescribeBrokerResult& WithPendingHostInstanceType(const char* value) { SetPendingHostInstanceType(value); return *this;}


    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline const LdapServerMetadataOutput& GetPendingLdapServerMetadata() const{ return m_pendingLdapServerMetadata; }

    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline void SetPendingLdapServerMetadata(const LdapServerMetadataOutput& value) { m_pendingLdapServerMetadata = value; }

    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline void SetPendingLdapServerMetadata(LdapServerMetadataOutput&& value) { m_pendingLdapServerMetadata = std::move(value); }

    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline DescribeBrokerResult& WithPendingLdapServerMetadata(const LdapServerMetadataOutput& value) { SetPendingLdapServerMetadata(value); return *this;}

    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline DescribeBrokerResult& WithPendingLdapServerMetadata(LdapServerMetadataOutput&& value) { SetPendingLdapServerMetadata(std::move(value)); return *this;}


    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingSecurityGroups() const{ return m_pendingSecurityGroups; }

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline void SetPendingSecurityGroups(const Aws::Vector<Aws::String>& value) { m_pendingSecurityGroups = value; }

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline void SetPendingSecurityGroups(Aws::Vector<Aws::String>&& value) { m_pendingSecurityGroups = std::move(value); }

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline DescribeBrokerResult& WithPendingSecurityGroups(const Aws::Vector<Aws::String>& value) { SetPendingSecurityGroups(value); return *this;}

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline DescribeBrokerResult& WithPendingSecurityGroups(Aws::Vector<Aws::String>&& value) { SetPendingSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline DescribeBrokerResult& AddPendingSecurityGroups(const Aws::String& value) { m_pendingSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline DescribeBrokerResult& AddPendingSecurityGroups(Aws::String&& value) { m_pendingSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline DescribeBrokerResult& AddPendingSecurityGroups(const char* value) { m_pendingSecurityGroups.push_back(value); return *this; }


    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }

    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets.</p>
     */
    inline DescribeBrokerResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline DescribeBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline DescribeBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline DescribeBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline DescribeBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline DescribeBrokerResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The broker's storage type.</p>
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The broker's storage type.</p>
     */
    inline void SetStorageType(const BrokerStorageType& value) { m_storageType = value; }

    /**
     * <p>The broker's storage type.</p>
     */
    inline void SetStorageType(BrokerStorageType&& value) { m_storageType = std::move(value); }

    /**
     * <p>The broker's storage type.</p>
     */
    inline DescribeBrokerResult& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The broker's storage type.</p>
     */
    inline DescribeBrokerResult& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline DescribeBrokerResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline DescribeBrokerResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline DescribeBrokerResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline DescribeBrokerResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline DescribeBrokerResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline DescribeBrokerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline DescribeBrokerResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline DescribeBrokerResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline DescribeBrokerResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }

    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline DescribeBrokerResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ActionRequired> m_actionsRequired;

    AuthenticationStrategy m_authenticationStrategy;

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerArn;

    Aws::String m_brokerId;

    Aws::Vector<BrokerInstance> m_brokerInstances;

    Aws::String m_brokerName;

    BrokerState m_brokerState;

    Configurations m_configurations;

    Aws::Utils::DateTime m_created;

    DeploymentMode m_deploymentMode;

    EncryptionOptions m_encryptionOptions;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_hostInstanceType;

    LdapServerMetadataOutput m_ldapServerMetadata;

    LogsSummary m_logs;

    WeeklyStartTime m_maintenanceWindowStartTime;

    AuthenticationStrategy m_pendingAuthenticationStrategy;

    Aws::String m_pendingEngineVersion;

    Aws::String m_pendingHostInstanceType;

    LdapServerMetadataOutput m_pendingLdapServerMetadata;

    Aws::Vector<Aws::String> m_pendingSecurityGroups;

    bool m_publiclyAccessible;

    Aws::Vector<Aws::String> m_securityGroups;

    BrokerStorageType m_storageType;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<UserSummary> m_users;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
