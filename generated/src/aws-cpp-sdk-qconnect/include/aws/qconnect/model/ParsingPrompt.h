/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Instructions for interpreting the contents of a document.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ParsingPrompt">AWS
   * API Reference</a></p>
   */
  class ParsingPrompt
  {
  public:
    AWS_QCONNECT_API ParsingPrompt() = default;
    AWS_QCONNECT_API ParsingPrompt(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ParsingPrompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Instructions for interpreting the contents of a document.</p>
     */
    inline const Aws::String& GetParsingPromptText() const { return m_parsingPromptText; }
    inline bool ParsingPromptTextHasBeenSet() const { return m_parsingPromptTextHasBeenSet; }
    template<typename ParsingPromptTextT = Aws::String>
    void SetParsingPromptText(ParsingPromptTextT&& value) { m_parsingPromptTextHasBeenSet = true; m_parsingPromptText = std::forward<ParsingPromptTextT>(value); }
    template<typename ParsingPromptTextT = Aws::String>
    ParsingPrompt& WithParsingPromptText(ParsingPromptTextT&& value) { SetParsingPromptText(std::forward<ParsingPromptTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parsingPromptText;
    bool m_parsingPromptTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
