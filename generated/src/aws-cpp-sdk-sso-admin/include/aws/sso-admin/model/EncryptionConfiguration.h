/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/KmsKeyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p> A structure that specifies the KMS key type and KMS key ARN used to encrypt
   * data in your IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_SSOADMIN_API EncryptionConfiguration() = default;
    AWS_SSOADMIN_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of KMS key used for encryption.</p>
     */
    inline KmsKeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(KmsKeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline EncryptionConfiguration& WithKeyType(KmsKeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key used to encrypt data. Required when KeyType is
     * CUSTOMER_MANAGED_KEY. Cannot be specified when KeyType is AWS_OWNED_KMS_KEY.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    KmsKeyType m_keyType{KmsKeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
