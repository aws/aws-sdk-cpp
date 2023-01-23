/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails.h>
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
   * <p>The log configuration specification for the container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLogDriver() const{ return m_logDriver; }

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline void SetLogDriver(const Aws::String& value) { m_logDriverHasBeenSet = true; m_logDriver = value; }

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline void SetLogDriver(Aws::String&& value) { m_logDriverHasBeenSet = true; m_logDriver = std::move(value); }

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline void SetLogDriver(const char* value) { m_logDriverHasBeenSet = true; m_logDriver.assign(value); }

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithLogDriver(const Aws::String& value) { SetLogDriver(value); return *this;}

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithLogDriver(Aws::String&& value) { SetLogDriver(std::move(value)); return *this;}

    /**
     * <p>The log driver to use for the container.</p> <p>Valid values on Fargate are
     * as follows:</p> <ul> <li> <p> <code>awsfirelens</code> </p> </li> <li> <p>
     * <code>awslogs</code> </p> </li> <li> <p> <code>splunk</code> </p> </li> </ul>
     * <p>Valid values on Amazon EC2 are as follows:</p> <ul> <li> <p>
     * <code>awsfirelens</code> </p> </li> <li> <p> <code>awslogs</code> </p> </li>
     * <li> <p> <code>fluentd</code> </p> </li> <li> <p> <code>gelf</code> </p> </li>
     * <li> <p> <code>journald</code> </p> </li> <li> <p> <code>json-file</code> </p>
     * </li> <li> <p> <code>logentries</code> </p> </li> <li> <p> <code>splunk</code>
     * </p> </li> <li> <p> <code>syslog</code> </p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithLogDriver(const char* value) { SetLogDriver(value); return *this;}


    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }


    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>& GetSecretOptions() const{ return m_secretOptions; }

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline bool SecretOptionsHasBeenSet() const { return m_secretOptionsHasBeenSet; }

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline void SetSecretOptions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = value; }

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline void SetSecretOptions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = std::move(value); }

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithSecretOptions(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>& value) { SetSecretOptions(value); return *this;}

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithSecretOptions(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>&& value) { SetSecretOptions(std::move(value)); return *this;}

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddSecretOptions(const AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(value); return *this; }

    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddSecretOptions(AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_logDriver;
    bool m_logDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails> m_secretOptions;
    bool m_secretOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
