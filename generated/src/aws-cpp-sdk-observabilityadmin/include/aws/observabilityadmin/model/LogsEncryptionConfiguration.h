/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/EncryptionConflictResolutionStrategy.h>
#include <aws/observabilityadmin/model/EncryptionScope.h>
#include <aws/observabilityadmin/model/EncryptionStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration for encrypting centralized destination log groups. By default,
 * this configuration applies only to destination log groups whose corresponding
 * source log groups are encrypted using customer managed KMS keys. To encrypt all
 * destination log groups created by the rule, set <code>EncryptionScope</code> to
 * <code>NEW_DESTINATION_LOG_GROUPS</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LogsEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class LogsEncryptionConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API LogsEncryptionConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API LogsEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API LogsEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration that determines the encryption strategy of the destination log
   * groups. CUSTOMER_MANAGED uses the configured KmsKeyArn to encrypt newly created
   * destination log groups.</p>
   */
  inline EncryptionStrategy GetEncryptionStrategy() const { return m_encryptionStrategy; }
  inline bool EncryptionStrategyHasBeenSet() const { return m_encryptionStrategyHasBeenSet; }
  inline void SetEncryptionStrategy(EncryptionStrategy value) {
    m_encryptionStrategyHasBeenSet = true;
    m_encryptionStrategy = value;
  }
  inline LogsEncryptionConfiguration& WithEncryptionStrategy(EncryptionStrategy value) {
    SetEncryptionStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>KMS Key ARN belonging to the primary destination account and region, to
   * encrypt newly created central log groups in the primary destination.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  LogsEncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Conflict resolution strategy for centralization if the encryption strategy is
   * set to CUSTOMER_MANAGED and the destination log group is encrypted with an
   * AWS_OWNED KMS Key. ALLOW lets centralization go through while SKIP prevents
   * centralization into the destination log group.</p>
   */
  inline EncryptionConflictResolutionStrategy GetEncryptionConflictResolutionStrategy() const {
    return m_encryptionConflictResolutionStrategy;
  }
  inline bool EncryptionConflictResolutionStrategyHasBeenSet() const { return m_encryptionConflictResolutionStrategyHasBeenSet; }
  inline void SetEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy value) {
    m_encryptionConflictResolutionStrategyHasBeenSet = true;
    m_encryptionConflictResolutionStrategy = value;
  }
  inline LogsEncryptionConfiguration& WithEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy value) {
    SetEncryptionConflictResolutionStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines which newly created destination log groups are encrypted with the
   * configured <code>KmsKeyArn</code> when <code>EncryptionStrategy</code> is
   * <code>CUSTOMER_MANAGED</code>.</p> <p>If you set this to
   * <code>ENCRYPTED_SOURCE_ONLY</code> (the default), only destination log groups
   * whose source log group is encrypted with a customer managed KMS key use the
   * configured <code>KmsKeyArn</code>. Destination log groups derived from Amazon
   * Web Services owned encrypted source log groups remain Amazon Web Services owned
   * encrypted.</p> <p>If you set this to <code>NEW_DESTINATION_LOG_GROUPS</code>,
   * every new destination log group created by this rule uses the configured
   * <code>KmsKeyArn</code>, regardless of the source log group's encryption
   * posture.</p> <p>This field is not valid when <code>EncryptionStrategy</code> is
   * <code>AWS_OWNED</code>.</p>
   */
  inline EncryptionScope GetEncryptionScope() const { return m_encryptionScope; }
  inline bool EncryptionScopeHasBeenSet() const { return m_encryptionScopeHasBeenSet; }
  inline void SetEncryptionScope(EncryptionScope value) {
    m_encryptionScopeHasBeenSet = true;
    m_encryptionScope = value;
  }
  inline LogsEncryptionConfiguration& WithEncryptionScope(EncryptionScope value) {
    SetEncryptionScope(value);
    return *this;
  }
  ///@}
 private:
  EncryptionStrategy m_encryptionStrategy{EncryptionStrategy::NOT_SET};

  Aws::String m_kmsKeyArn;

  EncryptionConflictResolutionStrategy m_encryptionConflictResolutionStrategy{EncryptionConflictResolutionStrategy::NOT_SET};

  EncryptionScope m_encryptionScope{EncryptionScope::NOT_SET};
  bool m_encryptionStrategyHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_encryptionConflictResolutionStrategyHasBeenSet = false;
  bool m_encryptionScopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
