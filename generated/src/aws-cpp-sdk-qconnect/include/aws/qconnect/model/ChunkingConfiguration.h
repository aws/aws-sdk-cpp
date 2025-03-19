/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChunkingStrategy.h>
#include <aws/qconnect/model/FixedSizeChunkingConfiguration.h>
#include <aws/qconnect/model/HierarchicalChunkingConfiguration.h>
#include <aws/qconnect/model/SemanticChunkingConfiguration.h>
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
   * <p>Details about how to chunk the documents in the data source. A chunk refers
   * to an excerpt from a data source that is returned when the knowledge base that
   * it belongs to is queried.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class ChunkingConfiguration
  {
  public:
    AWS_QCONNECT_API ChunkingConfiguration() = default;
    AWS_QCONNECT_API ChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Knowledge base can split your source data into chunks. A chunk refers to an
     * excerpt from a data source that is returned when the knowledge base that it
     * belongs to is queried. You have the following options for chunking your data. If
     * you opt for <code>NONE</code>, then you may want to pre-process your files by
     * splitting them up such that each file corresponds to a chunk.</p>
     */
    inline ChunkingStrategy GetChunkingStrategy() const { return m_chunkingStrategy; }
    inline bool ChunkingStrategyHasBeenSet() const { return m_chunkingStrategyHasBeenSet; }
    inline void SetChunkingStrategy(ChunkingStrategy value) { m_chunkingStrategyHasBeenSet = true; m_chunkingStrategy = value; }
    inline ChunkingConfiguration& WithChunkingStrategy(ChunkingStrategy value) { SetChunkingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for when you choose fixed-size chunking. If you set the
     * <code>chunkingStrategy</code> as <code>NONE</code>, exclude this field.</p>
     */
    inline const FixedSizeChunkingConfiguration& GetFixedSizeChunkingConfiguration() const { return m_fixedSizeChunkingConfiguration; }
    inline bool FixedSizeChunkingConfigurationHasBeenSet() const { return m_fixedSizeChunkingConfigurationHasBeenSet; }
    template<typename FixedSizeChunkingConfigurationT = FixedSizeChunkingConfiguration>
    void SetFixedSizeChunkingConfiguration(FixedSizeChunkingConfigurationT&& value) { m_fixedSizeChunkingConfigurationHasBeenSet = true; m_fixedSizeChunkingConfiguration = std::forward<FixedSizeChunkingConfigurationT>(value); }
    template<typename FixedSizeChunkingConfigurationT = FixedSizeChunkingConfiguration>
    ChunkingConfiguration& WithFixedSizeChunkingConfiguration(FixedSizeChunkingConfigurationT&& value) { SetFixedSizeChunkingConfiguration(std::forward<FixedSizeChunkingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for hierarchical document chunking for a data source. Hierarchical
     * chunking splits documents into layers of chunks where the first layer contains
     * large chunks, and the second layer contains smaller chunks derived from the
     * first layer.</p>
     */
    inline const HierarchicalChunkingConfiguration& GetHierarchicalChunkingConfiguration() const { return m_hierarchicalChunkingConfiguration; }
    inline bool HierarchicalChunkingConfigurationHasBeenSet() const { return m_hierarchicalChunkingConfigurationHasBeenSet; }
    template<typename HierarchicalChunkingConfigurationT = HierarchicalChunkingConfiguration>
    void SetHierarchicalChunkingConfiguration(HierarchicalChunkingConfigurationT&& value) { m_hierarchicalChunkingConfigurationHasBeenSet = true; m_hierarchicalChunkingConfiguration = std::forward<HierarchicalChunkingConfigurationT>(value); }
    template<typename HierarchicalChunkingConfigurationT = HierarchicalChunkingConfiguration>
    ChunkingConfiguration& WithHierarchicalChunkingConfiguration(HierarchicalChunkingConfigurationT&& value) { SetHierarchicalChunkingConfiguration(std::forward<HierarchicalChunkingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for semantic document chunking for a data source. Semantic chunking
     * splits a document into smaller documents based on groups of similar content
     * derived from the text with natural language processing.</p>
     */
    inline const SemanticChunkingConfiguration& GetSemanticChunkingConfiguration() const { return m_semanticChunkingConfiguration; }
    inline bool SemanticChunkingConfigurationHasBeenSet() const { return m_semanticChunkingConfigurationHasBeenSet; }
    template<typename SemanticChunkingConfigurationT = SemanticChunkingConfiguration>
    void SetSemanticChunkingConfiguration(SemanticChunkingConfigurationT&& value) { m_semanticChunkingConfigurationHasBeenSet = true; m_semanticChunkingConfiguration = std::forward<SemanticChunkingConfigurationT>(value); }
    template<typename SemanticChunkingConfigurationT = SemanticChunkingConfiguration>
    ChunkingConfiguration& WithSemanticChunkingConfiguration(SemanticChunkingConfigurationT&& value) { SetSemanticChunkingConfiguration(std::forward<SemanticChunkingConfigurationT>(value)); return *this;}
    ///@}
  private:

    ChunkingStrategy m_chunkingStrategy{ChunkingStrategy::NOT_SET};
    bool m_chunkingStrategyHasBeenSet = false;

    FixedSizeChunkingConfiguration m_fixedSizeChunkingConfiguration;
    bool m_fixedSizeChunkingConfigurationHasBeenSet = false;

    HierarchicalChunkingConfiguration m_hierarchicalChunkingConfiguration;
    bool m_hierarchicalChunkingConfigurationHasBeenSet = false;

    SemanticChunkingConfiguration m_semanticChunkingConfiguration;
    bool m_semanticChunkingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
