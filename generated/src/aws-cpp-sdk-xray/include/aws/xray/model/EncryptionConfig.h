/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/EncryptionStatus.h>
#include <aws/xray/model/EncryptionType.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A configuration document that specifies encryption configuration
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_XRAY_API EncryptionConfig() = default;
    AWS_XRAY_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the KMS key used for encryption, if applicable.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    EncryptionConfig& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption status. While the status is <code>UPDATING</code>, X-Ray may
     * encrypt data with a combination of the new and old settings.</p>
     */
    inline EncryptionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EncryptionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EncryptionConfig& WithStatus(EncryptionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption. Set to <code>KMS</code> for encryption with KMS keys.
     * Set to <code>NONE</code> for default encryption.</p>
     */
    inline EncryptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EncryptionConfig& WithType(EncryptionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    EncryptionStatus m_status{EncryptionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    EncryptionType m_type{EncryptionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
