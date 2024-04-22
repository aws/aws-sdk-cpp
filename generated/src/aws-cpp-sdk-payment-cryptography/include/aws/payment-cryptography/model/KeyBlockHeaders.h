/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyModesOfUse.h>
#include <aws/payment-cryptography/model/KeyExportability.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Optional metadata for export associated with the key material. This data is
   * signed but transmitted in clear text.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/KeyBlockHeaders">AWS
   * API Reference</a></p>
   */
  class KeyBlockHeaders
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API KeyBlockHeaders();
    AWS_PAYMENTCRYPTOGRAPHY_API KeyBlockHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeyBlockHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const KeyModesOfUse& GetKeyModesOfUse() const{ return m_keyModesOfUse; }

    
    inline bool KeyModesOfUseHasBeenSet() const { return m_keyModesOfUseHasBeenSet; }

    
    inline void SetKeyModesOfUse(const KeyModesOfUse& value) { m_keyModesOfUseHasBeenSet = true; m_keyModesOfUse = value; }

    
    inline void SetKeyModesOfUse(KeyModesOfUse&& value) { m_keyModesOfUseHasBeenSet = true; m_keyModesOfUse = std::move(value); }

    
    inline KeyBlockHeaders& WithKeyModesOfUse(const KeyModesOfUse& value) { SetKeyModesOfUse(value); return *this;}

    
    inline KeyBlockHeaders& WithKeyModesOfUse(KeyModesOfUse&& value) { SetKeyModesOfUse(std::move(value)); return *this;}


    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline const KeyExportability& GetKeyExportability() const{ return m_keyExportability; }

    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline bool KeyExportabilityHasBeenSet() const { return m_keyExportabilityHasBeenSet; }

    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline void SetKeyExportability(const KeyExportability& value) { m_keyExportabilityHasBeenSet = true; m_keyExportability = value; }

    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline void SetKeyExportability(KeyExportability&& value) { m_keyExportabilityHasBeenSet = true; m_keyExportability = std::move(value); }

    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline KeyBlockHeaders& WithKeyExportability(const KeyExportability& value) { SetKeyExportability(value); return *this;}

    /**
     * <p>Specifies subsequent exportability of the key within the key block after it
     * is received by the receiving party. It can be used to further restrict
     * exportability of the key after export from Amazon Web Services Payment
     * Cryptography.</p> <p>When set to <code>EXPORTABLE</code>, the key can be
     * subsequently exported by the receiver under a KEK using TR-31 or TR-34 key block
     * export only. When set to <code>NON_EXPORTABLE</code>, the key cannot be
     * subsequently exported by the receiver. When set to <code>SENSITIVE</code>, the
     * key can be exported by the receiver under a KEK using TR-31, TR-34, RSA wrap and
     * unwrap cryptogram or using a symmetric cryptogram key export method. For further
     * information refer to <a
     * href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a>.</p>
     */
    inline KeyBlockHeaders& WithKeyExportability(KeyExportability&& value) { SetKeyExportability(std::move(value)); return *this;}


    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline const Aws::String& GetKeyVersion() const{ return m_keyVersion; }

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline bool KeyVersionHasBeenSet() const { return m_keyVersionHasBeenSet; }

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline void SetKeyVersion(const Aws::String& value) { m_keyVersionHasBeenSet = true; m_keyVersion = value; }

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline void SetKeyVersion(Aws::String&& value) { m_keyVersionHasBeenSet = true; m_keyVersion = std::move(value); }

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline void SetKeyVersion(const char* value) { m_keyVersionHasBeenSet = true; m_keyVersion.assign(value); }

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline KeyBlockHeaders& WithKeyVersion(const Aws::String& value) { SetKeyVersion(value); return *this;}

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline KeyBlockHeaders& WithKeyVersion(Aws::String&& value) { SetKeyVersion(std::move(value)); return *this;}

    /**
     * <p>Parameter used to indicate the version of the key carried in the key block or
     * indicate the value carried in the key block is a component of a key.</p>
     */
    inline KeyBlockHeaders& WithKeyVersion(const char* value) { SetKeyVersion(value); return *this;}


    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptionalBlocks() const{ return m_optionalBlocks; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline bool OptionalBlocksHasBeenSet() const { return m_optionalBlocksHasBeenSet; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline void SetOptionalBlocks(const Aws::Map<Aws::String, Aws::String>& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks = value; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline void SetOptionalBlocks(Aws::Map<Aws::String, Aws::String>&& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks = std::move(value); }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& WithOptionalBlocks(const Aws::Map<Aws::String, Aws::String>& value) { SetOptionalBlocks(value); return *this;}

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& WithOptionalBlocks(Aws::Map<Aws::String, Aws::String>&& value) { SetOptionalBlocks(std::move(value)); return *this;}

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(const Aws::String& key, const Aws::String& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(key, value); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(Aws::String&& key, const Aws::String& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(const Aws::String& key, Aws::String&& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(Aws::String&& key, Aws::String&& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(const char* key, Aws::String&& value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(Aws::String&& key, const char* value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameter used to indicate the type of optional data in key block headers.
     * Refer to <a href="https://webstore.ansi.org/standards/ascx9/ansix91432022">ANSI
     * X9.143-2022</a> for information on allowed data type for optional blocks.</p>
     * <p>Optional block character limit is 112 characters. For each optional block, 2
     * characters are reserved for optional block ID and 2 characters reserved for
     * optional block length. More than one optional blocks can be included as long as
     * the combined length does not increase 112 characters.</p>
     */
    inline KeyBlockHeaders& AddOptionalBlocks(const char* key, const char* value) { m_optionalBlocksHasBeenSet = true; m_optionalBlocks.emplace(key, value); return *this; }

  private:

    KeyModesOfUse m_keyModesOfUse;
    bool m_keyModesOfUseHasBeenSet = false;

    KeyExportability m_keyExportability;
    bool m_keyExportabilityHasBeenSet = false;

    Aws::String m_keyVersion;
    bool m_keyVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_optionalBlocks;
    bool m_optionalBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
