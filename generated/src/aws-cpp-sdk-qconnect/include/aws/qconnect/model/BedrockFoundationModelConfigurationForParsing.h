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
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing();
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API BedrockFoundationModelConfigurationForParsing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline BedrockFoundationModelConfigurationForParsing& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline BedrockFoundationModelConfigurationForParsing& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline BedrockFoundationModelConfigurationForParsing& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Instructions for interpreting the contents of a document.</p>
     */
    inline const ParsingPrompt& GetParsingPrompt() const{ return m_parsingPrompt; }
    inline bool ParsingPromptHasBeenSet() const { return m_parsingPromptHasBeenSet; }
    inline void SetParsingPrompt(const ParsingPrompt& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = value; }
    inline void SetParsingPrompt(ParsingPrompt&& value) { m_parsingPromptHasBeenSet = true; m_parsingPrompt = std::move(value); }
    inline BedrockFoundationModelConfigurationForParsing& WithParsingPrompt(const ParsingPrompt& value) { SetParsingPrompt(value); return *this;}
    inline BedrockFoundationModelConfigurationForParsing& WithParsingPrompt(ParsingPrompt&& value) { SetParsingPrompt(std::move(value)); return *this;}
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
