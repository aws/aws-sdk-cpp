﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChunkingConfiguration.h>
#include <aws/qconnect/model/ParsingConfiguration.h>
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
   * <p>Contains details about how to ingest the documents in a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/VectorIngestionConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorIngestionConfiguration
  {
  public:
    AWS_QCONNECT_API VectorIngestionConfiguration() = default;
    AWS_QCONNECT_API VectorIngestionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API VectorIngestionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about how to chunk the documents in the data source. A chunk refers
     * to an excerpt from a data source that is returned when the knowledge base that
     * it belongs to is queried.</p>
     */
    inline const ChunkingConfiguration& GetChunkingConfiguration() const { return m_chunkingConfiguration; }
    inline bool ChunkingConfigurationHasBeenSet() const { return m_chunkingConfigurationHasBeenSet; }
    template<typename ChunkingConfigurationT = ChunkingConfiguration>
    void SetChunkingConfiguration(ChunkingConfigurationT&& value) { m_chunkingConfigurationHasBeenSet = true; m_chunkingConfiguration = std::forward<ChunkingConfigurationT>(value); }
    template<typename ChunkingConfigurationT = ChunkingConfiguration>
    VectorIngestionConfiguration& WithChunkingConfiguration(ChunkingConfigurationT&& value) { SetChunkingConfiguration(std::forward<ChunkingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom parser for data source documents.</p>
     */
    inline const ParsingConfiguration& GetParsingConfiguration() const { return m_parsingConfiguration; }
    inline bool ParsingConfigurationHasBeenSet() const { return m_parsingConfigurationHasBeenSet; }
    template<typename ParsingConfigurationT = ParsingConfiguration>
    void SetParsingConfiguration(ParsingConfigurationT&& value) { m_parsingConfigurationHasBeenSet = true; m_parsingConfiguration = std::forward<ParsingConfigurationT>(value); }
    template<typename ParsingConfigurationT = ParsingConfiguration>
    VectorIngestionConfiguration& WithParsingConfiguration(ParsingConfigurationT&& value) { SetParsingConfiguration(std::forward<ParsingConfigurationT>(value)); return *this;}
    ///@}
  private:

    ChunkingConfiguration m_chunkingConfiguration;
    bool m_chunkingConfigurationHasBeenSet = false;

    ParsingConfiguration m_parsingConfiguration;
    bool m_parsingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
