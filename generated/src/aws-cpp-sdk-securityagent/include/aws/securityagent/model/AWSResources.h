/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>AWS resource configurations associated with the agent space</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AWSResources">AWS
 * API Reference</a></p>
 */
class AWSResources {
 public:
  AWS_SECURITYAGENT_API AWSResources() = default;
  AWS_SECURITYAGENT_API AWSResources(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API AWSResources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>VPC configurations that the Security Agent accesses in the customer
   * environment</p>
   */
  inline const Aws::Vector<VpcConfig>& GetVpcs() const { return m_vpcs; }
  inline bool VpcsHasBeenSet() const { return m_vpcsHasBeenSet; }
  template <typename VpcsT = Aws::Vector<VpcConfig>>
  void SetVpcs(VpcsT&& value) {
    m_vpcsHasBeenSet = true;
    m_vpcs = std::forward<VpcsT>(value);
  }
  template <typename VpcsT = Aws::Vector<VpcConfig>>
  AWSResources& WithVpcs(VpcsT&& value) {
    SetVpcs(std::forward<VpcsT>(value));
    return *this;
  }
  template <typename VpcsT = VpcConfig>
  AWSResources& AddVpcs(VpcsT&& value) {
    m_vpcsHasBeenSet = true;
    m_vpcs.emplace_back(std::forward<VpcsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CloudWatch log group ARNs or names used to store Security Agent logs</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroups() const { return m_logGroups; }
  inline bool LogGroupsHasBeenSet() const { return m_logGroupsHasBeenSet; }
  template <typename LogGroupsT = Aws::Vector<Aws::String>>
  void SetLogGroups(LogGroupsT&& value) {
    m_logGroupsHasBeenSet = true;
    m_logGroups = std::forward<LogGroupsT>(value);
  }
  template <typename LogGroupsT = Aws::Vector<Aws::String>>
  AWSResources& WithLogGroups(LogGroupsT&& value) {
    SetLogGroups(std::forward<LogGroupsT>(value));
    return *this;
  }
  template <typename LogGroupsT = Aws::String>
  AWSResources& AddLogGroups(LogGroupsT&& value) {
    m_logGroupsHasBeenSet = true;
    m_logGroups.emplace_back(std::forward<LogGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>S3 bucket ARNs or names used to store Security Agent artifacts</p>
   */
  inline const Aws::Vector<Aws::String>& GetS3Buckets() const { return m_s3Buckets; }
  inline bool S3BucketsHasBeenSet() const { return m_s3BucketsHasBeenSet; }
  template <typename S3BucketsT = Aws::Vector<Aws::String>>
  void SetS3Buckets(S3BucketsT&& value) {
    m_s3BucketsHasBeenSet = true;
    m_s3Buckets = std::forward<S3BucketsT>(value);
  }
  template <typename S3BucketsT = Aws::Vector<Aws::String>>
  AWSResources& WithS3Buckets(S3BucketsT&& value) {
    SetS3Buckets(std::forward<S3BucketsT>(value));
    return *this;
  }
  template <typename S3BucketsT = Aws::String>
  AWSResources& AddS3Buckets(S3BucketsT&& value) {
    m_s3BucketsHasBeenSet = true;
    m_s3Buckets.emplace_back(std::forward<S3BucketsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SecretsManager secret ARNs or names used to store tester credentials for
   * pentests</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecretArns() const { return m_secretArns; }
  inline bool SecretArnsHasBeenSet() const { return m_secretArnsHasBeenSet; }
  template <typename SecretArnsT = Aws::Vector<Aws::String>>
  void SetSecretArns(SecretArnsT&& value) {
    m_secretArnsHasBeenSet = true;
    m_secretArns = std::forward<SecretArnsT>(value);
  }
  template <typename SecretArnsT = Aws::Vector<Aws::String>>
  AWSResources& WithSecretArns(SecretArnsT&& value) {
    SetSecretArns(std::forward<SecretArnsT>(value));
    return *this;
  }
  template <typename SecretArnsT = Aws::String>
  AWSResources& AddSecretArns(SecretArnsT&& value) {
    m_secretArnsHasBeenSet = true;
    m_secretArns.emplace_back(std::forward<SecretArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lambda function ARNs or names used to retrieve tester credentials for
   * pentests</p>
   */
  inline const Aws::Vector<Aws::String>& GetLambdaFunctionArns() const { return m_lambdaFunctionArns; }
  inline bool LambdaFunctionArnsHasBeenSet() const { return m_lambdaFunctionArnsHasBeenSet; }
  template <typename LambdaFunctionArnsT = Aws::Vector<Aws::String>>
  void SetLambdaFunctionArns(LambdaFunctionArnsT&& value) {
    m_lambdaFunctionArnsHasBeenSet = true;
    m_lambdaFunctionArns = std::forward<LambdaFunctionArnsT>(value);
  }
  template <typename LambdaFunctionArnsT = Aws::Vector<Aws::String>>
  AWSResources& WithLambdaFunctionArns(LambdaFunctionArnsT&& value) {
    SetLambdaFunctionArns(std::forward<LambdaFunctionArnsT>(value));
    return *this;
  }
  template <typename LambdaFunctionArnsT = Aws::String>
  AWSResources& AddLambdaFunctionArns(LambdaFunctionArnsT&& value) {
    m_lambdaFunctionArnsHasBeenSet = true;
    m_lambdaFunctionArns.emplace_back(std::forward<LambdaFunctionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role ARNs that the Security Agent can assume to access customer
   * resources</p>
   */
  inline const Aws::Vector<Aws::String>& GetIamRoles() const { return m_iamRoles; }
  inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  void SetIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles = std::forward<IamRolesT>(value);
  }
  template <typename IamRolesT = Aws::Vector<Aws::String>>
  AWSResources& WithIamRoles(IamRolesT&& value) {
    SetIamRoles(std::forward<IamRolesT>(value));
    return *this;
  }
  template <typename IamRolesT = Aws::String>
  AWSResources& AddIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles.emplace_back(std::forward<IamRolesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VpcConfig> m_vpcs;

  Aws::Vector<Aws::String> m_logGroups;

  Aws::Vector<Aws::String> m_s3Buckets;

  Aws::Vector<Aws::String> m_secretArns;

  Aws::Vector<Aws::String> m_lambdaFunctionArns;

  Aws::Vector<Aws::String> m_iamRoles;
  bool m_vpcsHasBeenSet = false;
  bool m_logGroupsHasBeenSet = false;
  bool m_s3BucketsHasBeenSet = false;
  bool m_secretArnsHasBeenSet = false;
  bool m_lambdaFunctionArnsHasBeenSet = false;
  bool m_iamRolesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
