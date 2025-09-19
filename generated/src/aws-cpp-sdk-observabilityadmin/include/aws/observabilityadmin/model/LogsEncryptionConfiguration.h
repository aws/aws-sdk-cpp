/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/EncryptionStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/EncryptionConflictResolutionStrategy.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p>Configuration for encrypting centralized log groups. This configuration is
   * only applied to destination log groups for which the corresponding source log
   * groups are encrypted using Customer Managed KMS Keys.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LogsEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class LogsEncryptionConfiguration
  {
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
    inline void SetEncryptionStrategy(EncryptionStrategy value) { m_encryptionStrategyHasBeenSet = true; m_encryptionStrategy = value; }
    inline LogsEncryptionConfiguration& WithEncryptionStrategy(EncryptionStrategy value) { SetEncryptionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key arn belonging to the primary destination account and region, to
     * encrypt newly created central log groups in the primary destination.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    LogsEncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Conflict resolution strategy for centralization if the encryption strategy is
     * set to CUSTOMER_MANAGED and the destination log group is encrypted with an
     * AWS_OWNED KMS Key. ALLOW lets centralization go through while SKIP prevents
     * centralization into the destination log group.</p>
     */
    inline EncryptionConflictResolutionStrategy GetEncryptionConflictResolutionStrategy() const { return m_encryptionConflictResolutionStrategy; }
    inline bool EncryptionConflictResolutionStrategyHasBeenSet() const { return m_encryptionConflictResolutionStrategyHasBeenSet; }
    inline void SetEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy value) { m_encryptionConflictResolutionStrategyHasBeenSet = true; m_encryptionConflictResolutionStrategy = value; }
    inline LogsEncryptionConfiguration& WithEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy value) { SetEncryptionConflictResolutionStrategy(value); return *this;}
    ///@}
  private:

    EncryptionStrategy m_encryptionStrategy{EncryptionStrategy::NOT_SET};
    bool m_encryptionStrategyHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    EncryptionConflictResolutionStrategy m_encryptionConflictResolutionStrategy{EncryptionConflictResolutionStrategy::NOT_SET};
    bool m_encryptionConflictResolutionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
