/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ParsingPrompt.h>
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
   * <p>Settings for a foundation model used to parse documents for a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/BedrockFoundationModelConfigurationForParsing">AWS
   * API Reference</a></p>
   */
  class BedrockFoundationModelConfigurationForParsing
  {
  public:
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing() = default;
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    BedrockFoundationModelConfigurationForParsing& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for interpreting the contents of a document.</p>
     */
    inline const ParsingPrompt& GetParsingPrompt() const { return m_parsingPrompt; }
    inline bool ParsingPromptHasBeenSet() const { return m_parsingPromptHasBeenSet; }
    template<typename ParsingPromptT = ParsingPrompt>
    void SetParsingPrompt(ParsingPromptT&& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = std::forward<ParsingPromptT>(value); }
    template<typename ParsingPromptT = ParsingPrompt>
    BedrockFoundationModelConfigurationForParsing& WithParsingPrompt(ParsingPromptT&& value) { SetParsingPrompt(std::forward<ParsingPromptT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    ParsingPrompt m_parsingPrompt;
    bool m_parsingPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
