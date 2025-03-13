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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetLogDriver() const { return m_logDriver; }
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }
    template<typename LogDriverT = Aws::String>
    void SetLogDriver(LogDriverT&& value) { m_logDriverHasBeenSet = true; m_logDriver = std::forward<LogDriverT>(value); }
    template<typename LogDriverT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithLogDriver(LogDriverT&& value) { SetLogDriver(std::forward<LogDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options to send to the log driver. Requires version 1.19 of
     * the Docker Remote API or greater on your container instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the log configuration.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>& GetSecretOptions() const { return m_secretOptions; }
    inline bool SecretOptionsHasBeenSet() const { return m_secretOptionsHasBeenSet; }
    template<typename SecretOptionsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>>
    void SetSecretOptions(SecretOptionsT&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = std::forward<SecretOptionsT>(value); }
    template<typename SecretOptionsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& WithSecretOptions(SecretOptionsT&& value) { SetSecretOptions(std::forward<SecretOptionsT>(value)); return *this;}
    template<typename SecretOptionsT = AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationSecretOptionsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AddSecretOptions(SecretOptionsT&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.emplace_back(std::forward<SecretOptionsT>(value)); return *this; }
    ///@}
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
