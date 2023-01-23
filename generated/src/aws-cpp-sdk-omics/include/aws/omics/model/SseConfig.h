/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/EncryptionType.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Server-side encryption (SSE) settings for a store.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SseConfig">AWS
   * API Reference</a></p>
   */
  class SseConfig
  {
  public:
    AWS_OMICS_API SseConfig();
    AWS_OMICS_API SseConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SseConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An encryption key ARN.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>An encryption key ARN.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>An encryption key ARN.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>An encryption key ARN.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>An encryption key ARN.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>An encryption key ARN.</p>
     */
    inline SseConfig& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>An encryption key ARN.</p>
     */
    inline SseConfig& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>An encryption key ARN.</p>
     */
    inline SseConfig& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The encryption type.</p>
     */
    inline const EncryptionType& GetType() const{ return m_type; }

    /**
     * <p>The encryption type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The encryption type.</p>
     */
    inline void SetType(const EncryptionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The encryption type.</p>
     */
    inline void SetType(EncryptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The encryption type.</p>
     */
    inline SseConfig& WithType(const EncryptionType& value) { SetType(value); return *this;}

    /**
     * <p>The encryption type.</p>
     */
    inline SseConfig& WithType(EncryptionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    EncryptionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
