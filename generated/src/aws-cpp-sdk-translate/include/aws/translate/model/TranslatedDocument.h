/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The translated content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslatedDocument">AWS
   * API Reference</a></p>
   */
  class TranslatedDocument
  {
  public:
    AWS_TRANSLATE_API TranslatedDocument();
    AWS_TRANSLATE_API TranslatedDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TranslatedDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The document containing the translated content.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Utils::CryptoBuffer& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Utils::CryptoBuffer&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline TranslatedDocument& WithContent(const Aws::Utils::CryptoBuffer& value) { SetContent(value); return *this;}
    inline TranslatedDocument& WithContent(Aws::Utils::CryptoBuffer&& value) { SetContent(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
