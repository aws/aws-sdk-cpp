/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/EncryptionType.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Settings to configure server-side encryption. </p> <p> For additional control
   * over security, you can encrypt your data using a <b>customer-managed key</b> for
   * Step Functions state machines and activities. You can configure a symmetric KMS
   * key and data key reuse period when creating or updating a <b>State Machine</b>,
   * and when creating an <b>Activity</b>. The execution history and state machine
   * definition will be encrypted with the key applied to the State Machine. Activity
   * inputs will be encrypted with the key applied to the Activity. </p>  <p>
   * Step Functions automatically enables encryption at rest using Amazon Web
   * Services owned keys at no charge. However, KMS charges apply when using a
   * customer managed key. For more information about pricing, see <a
   * href="https://aws.amazon.com/kms/pricing/">Key Management Service
   * pricing</a>.</p>  <p>For more information on KMS, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/overview.html">What
   * is Key Management Service?</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_SFN_API EncryptionConfiguration() = default;
    AWS_SFN_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An alias, alias ARN, key ID, or key ARN of a symmetric encryption KMS key to
     * encrypt data. To specify a KMS key in a different Amazon Web Services account,
     * you must use the key ARN or alias ARN.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration that Step Functions will reuse data keys. When the period
     * expires, Step Functions will call <code>GenerateDataKey</code>. Only applies to
     * customer managed keys.</p>
     */
    inline int GetKmsDataKeyReusePeriodSeconds() const { return m_kmsDataKeyReusePeriodSeconds; }
    inline bool KmsDataKeyReusePeriodSecondsHasBeenSet() const { return m_kmsDataKeyReusePeriodSecondsHasBeenSet; }
    inline void SetKmsDataKeyReusePeriodSeconds(int value) { m_kmsDataKeyReusePeriodSecondsHasBeenSet = true; m_kmsDataKeyReusePeriodSeconds = value; }
    inline EncryptionConfiguration& WithKmsDataKeyReusePeriodSeconds(int value) { SetKmsDataKeyReusePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption type</p>
     */
    inline EncryptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EncryptionConfiguration& WithType(EncryptionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_kmsDataKeyReusePeriodSeconds{0};
    bool m_kmsDataKeyReusePeriodSecondsHasBeenSet = false;

    EncryptionType m_type{EncryptionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
