/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/BedrockFoundationModelConfigurationForParsing.h>
#include <aws/qconnect/model/ParsingStrategy.h>
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
   * <p>Settings for parsing document contents. By default, the service converts the
   * contents of each document into text before splitting it into chunks. To improve
   * processing of PDF files with tables and images, you can configure the data
   * source to convert the pages of text into images and use a model to describe the
   * contents of each page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ParsingConfiguration">AWS
   * API Reference</a></p>
   */
  class ParsingConfiguration
  {
  public:
    AWS_QCONNECT_API ParsingConfiguration();
    AWS_QCONNECT_API ParsingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ParsingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for a foundation model used to parse documents for a data
     * source.</p>
     */
    inline const BedrockFoundationModelConfigurationForParsing& GetBedrockFoundationModelConfiguration() const{ return m_bedrockFoundationModelConfiguration; }
    inline bool BedrockFoundationModelConfigurationHasBeenSet() const { return m_bedrockFoundationModelConfigurationHasBeenSet; }
    inline void SetBedrockFoundationModelConfiguration(const BedrockFoundationModelConfigurationForParsing& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = value; }
    inline void SetBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationForParsing&& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = std::move(value); }
    inline ParsingConfiguration& WithBedrockFoundationModelConfiguration(const BedrockFoundationModelConfigurationForParsing& value) { SetBedrockFoundationModelConfiguration(value); return *this;}
    inline ParsingConfiguration& WithBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationForParsing&& value) { SetBedrockFoundationModelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parsing strategy for the data source.</p>
     */
    inline const ParsingStrategy& GetParsingStrategy() const{ return m_parsingStrategy; }
    inline bool ParsingStrategyHasBeenSet() const { return m_parsingStrategyHasBeenSet; }
    inline void SetParsingStrategy(const ParsingStrategy& value) { m_parsingStrategyHasBeenSet = true; m_parsingStrategy = value; }
    inline void SetParsingStrategy(ParsingStrategy&& value) { m_parsingStrategyHasBeenSet = true; m_parsingStrategy = std::move(value); }
    inline ParsingConfiguration& WithParsingStrategy(const ParsingStrategy& value) { SetParsingStrategy(value); return *this;}
    inline ParsingConfiguration& WithParsingStrategy(ParsingStrategy&& value) { SetParsingStrategy(std::move(value)); return *this;}
    ///@}
  private:

    BedrockFoundationModelConfigurationForParsing m_bedrockFoundationModelConfiguration;
    bool m_bedrockFoundationModelConfigurationHasBeenSet = false;

    ParsingStrategy m_parsingStrategy;
    bool m_parsingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
