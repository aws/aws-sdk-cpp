/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about stream encryption. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKinesisStreamStreamEncryptionDetails">AWS
   * API Reference</a></p>
   */
  class AwsKinesisStreamStreamEncryptionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails() = default;
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKinesisStreamStreamEncryptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption type to use. </p>
     */
    inline const Aws::String& GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    template<typename EncryptionTypeT = Aws::String>
    void SetEncryptionType(EncryptionTypeT&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::forward<EncryptionTypeT>(value); }
    template<typename EncryptionTypeT = Aws::String>
    AwsKinesisStreamStreamEncryptionDetails& WithEncryptionType(EncryptionTypeT&& value) { SetEncryptionType(std::forward<EncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier for the customer-managed KMS key to use for
     * encryption. </p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    AwsKinesisStreamStreamEncryptionDetails& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
