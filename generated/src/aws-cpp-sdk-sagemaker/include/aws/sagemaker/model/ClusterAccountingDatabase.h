/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The external MySQL-compatible database that the Slurm accounting daemon
 * (<code>slurmdbd</code>) connects to for a SageMaker HyperPod cluster. You
 * provide the database credentials in an Amazon Web Services Secrets Manager
 * secret instead of in the request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterAccountingDatabase">AWS
 * API Reference</a></p>
 */
class ClusterAccountingDatabase {
 public:
  AWS_SAGEMAKER_API ClusterAccountingDatabase() = default;
  AWS_SAGEMAKER_API ClusterAccountingDatabase(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterAccountingDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The hostname or endpoint of the accounting database, such as the endpoint of
   * an Amazon RDS for MySQL or Aurora MySQL database. The database must be reachable
   * from the subnets and security groups that you configure for the cluster.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  ClusterAccountingDatabase& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port that the accounting database listens on. The default is
   * <code>3306</code>.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ClusterAccountingDatabase& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database schema that stores the Slurm accounting data. The
   * default is <code>slurm_acct_db_</code> followed by the cluster ID from the
   * cluster ARN, for example <code>slurm_acct_db_a1b2c3d4e5f6</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ClusterAccountingDatabase& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
   * secret that contains the user name and password for the accounting database. The
   * database user must be able to create the schema and to read from and write to
   * it.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  ClusterAccountingDatabase& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  int m_port{0};

  Aws::String m_name;

  Aws::String m_secretArn;
  bool m_endpointHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
