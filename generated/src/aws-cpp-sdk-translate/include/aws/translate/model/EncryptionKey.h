/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/EncryptionKeyType.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The encryption key used to encrypt this object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/EncryptionKey">AWS
   * API Reference</a></p>
   */
  class EncryptionKey
  {
  public:
    AWS_TRANSLATE_API EncryptionKey();
    AWS_TRANSLATE_API EncryptionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API EncryptionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline const EncryptionKeyType& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline void SetType(const EncryptionKeyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline void SetType(EncryptionKeyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline EncryptionKey& WithType(const EncryptionKeyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt this
     * object.</p>
     */
    inline EncryptionKey& WithType(EncryptionKeyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline EncryptionKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline EncryptionKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * this object.</p>
     */
    inline EncryptionKey& WithId(const char* value) { SetId(value); return *this;}

  private:

    EncryptionKeyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
