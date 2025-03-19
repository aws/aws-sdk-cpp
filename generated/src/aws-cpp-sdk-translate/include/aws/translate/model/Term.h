/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
   * <p>The term being translated by the custom terminology.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Term">AWS
   * API Reference</a></p>
   */
  class Term
  {
  public:
    AWS_TRANSLATE_API Term() = default;
    AWS_TRANSLATE_API Term(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Term& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetSourceText() const { return m_sourceText; }
    inline bool SourceTextHasBeenSet() const { return m_sourceTextHasBeenSet; }
    template<typename SourceTextT = Aws::String>
    void SetSourceText(SourceTextT&& value) { m_sourceTextHasBeenSet = true; m_sourceText = std::forward<SourceTextT>(value); }
    template<typename SourceTextT = Aws::String>
    Term& WithSourceText(SourceTextT&& value) { SetSourceText(std::forward<SourceTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetTargetText() const { return m_targetText; }
    inline bool TargetTextHasBeenSet() const { return m_targetTextHasBeenSet; }
    template<typename TargetTextT = Aws::String>
    void SetTargetText(TargetTextT&& value) { m_targetTextHasBeenSet = true; m_targetText = std::forward<TargetTextT>(value); }
    template<typename TargetTextT = Aws::String>
    Term& WithTargetText(TargetTextT&& value) { SetTargetText(std::forward<TargetTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceText;
    bool m_sourceTextHasBeenSet = false;

    Aws::String m_targetText;
    bool m_targetTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
