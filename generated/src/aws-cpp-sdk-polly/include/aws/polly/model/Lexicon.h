/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Provides lexicon name and lexicon content in string format. For more
   * information, see <a
   * href="https://www.w3.org/TR/pronunciation-lexicon/">Pronunciation Lexicon
   * Specification (PLS) Version 1.0</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Lexicon">AWS API
   * Reference</a></p>
   */
  class Lexicon
  {
  public:
    AWS_POLLY_API Lexicon() = default;
    AWS_POLLY_API Lexicon(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Lexicon& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Lexicon& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the lexicon.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Lexicon& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
