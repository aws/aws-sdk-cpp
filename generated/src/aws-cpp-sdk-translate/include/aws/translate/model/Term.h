﻿/**
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
    AWS_TRANSLATE_API Term();
    AWS_TRANSLATE_API Term(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Term& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetSourceText() const{ return m_sourceText; }
    inline bool SourceTextHasBeenSet() const { return m_sourceTextHasBeenSet; }
    inline void SetSourceText(const Aws::String& value) { m_sourceTextHasBeenSet = true; m_sourceText = value; }
    inline void SetSourceText(Aws::String&& value) { m_sourceTextHasBeenSet = true; m_sourceText = std::move(value); }
    inline void SetSourceText(const char* value) { m_sourceTextHasBeenSet = true; m_sourceText.assign(value); }
    inline Term& WithSourceText(const Aws::String& value) { SetSourceText(value); return *this;}
    inline Term& WithSourceText(Aws::String&& value) { SetSourceText(std::move(value)); return *this;}
    inline Term& WithSourceText(const char* value) { SetSourceText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetTargetText() const{ return m_targetText; }
    inline bool TargetTextHasBeenSet() const { return m_targetTextHasBeenSet; }
    inline void SetTargetText(const Aws::String& value) { m_targetTextHasBeenSet = true; m_targetText = value; }
    inline void SetTargetText(Aws::String&& value) { m_targetTextHasBeenSet = true; m_targetText = std::move(value); }
    inline void SetTargetText(const char* value) { m_targetTextHasBeenSet = true; m_targetText.assign(value); }
    inline Term& WithTargetText(const Aws::String& value) { SetTargetText(value); return *this;}
    inline Term& WithTargetText(Aws::String&& value) { SetTargetText(std::move(value)); return *this;}
    inline Term& WithTargetText(const char* value) { SetTargetText(value); return *this;}
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
