/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The initial configuration settings required to establish an integration
 * between Security Hub and ServiceNow ITSM.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ServiceNowProviderConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceNowProviderConfiguration {
 public:
  AWS_SECURITYHUB_API ServiceNowProviderConfiguration() = default;
  AWS_SECURITYHUB_API ServiceNowProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ServiceNowProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance name of ServiceNow ITSM.</p>
   */
  inline const Aws::String& GetInstanceName() const { return m_instanceName; }
  inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
  template <typename InstanceNameT = Aws::String>
  void SetInstanceName(InstanceNameT&& value) {
    m_instanceNameHasBeenSet = true;
    m_instanceName = std::forward<InstanceNameT>(value);
  }
  template <typename InstanceNameT = Aws::String>
  ServiceNowProviderConfiguration& WithInstanceName(InstanceNameT&& value) {
    SetInstanceName(std::forward<InstanceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
   * secret that contains the ServiceNow credentials.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  ServiceNowProviderConfiguration& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceName;
  bool m_instanceNameHasBeenSet = false;

  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
