/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/EncryptionType.h>
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
    AWS_OMICS_API SseConfig() = default;
    AWS_OMICS_API SseConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SseConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption type.</p>
     */
    inline EncryptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SseConfig& WithType(EncryptionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encryption key ARN.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    SseConfig& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_type{EncryptionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
