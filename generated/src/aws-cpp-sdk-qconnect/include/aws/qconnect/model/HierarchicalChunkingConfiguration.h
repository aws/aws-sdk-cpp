/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/HierarchicalChunkingLevelConfiguration.h>
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
   * <p>Settings for hierarchical document chunking for a data source. Hierarchical
   * chunking splits documents into layers of chunks where the first layer contains
   * large chunks, and the second layer contains smaller chunks derived from the
   * first layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/HierarchicalChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class HierarchicalChunkingConfiguration
  {
  public:
    AWS_QCONNECT_API HierarchicalChunkingConfiguration() = default;
    AWS_QCONNECT_API HierarchicalChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API HierarchicalChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Token settings for each layer.</p>
     */
    inline const Aws::Vector<HierarchicalChunkingLevelConfiguration>& GetLevelConfigurations() const { return m_levelConfigurations; }
    inline bool LevelConfigurationsHasBeenSet() const { return m_levelConfigurationsHasBeenSet; }
    template<typename LevelConfigurationsT = Aws::Vector<HierarchicalChunkingLevelConfiguration>>
    void SetLevelConfigurations(LevelConfigurationsT&& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations = std::forward<LevelConfigurationsT>(value); }
    template<typename LevelConfigurationsT = Aws::Vector<HierarchicalChunkingLevelConfiguration>>
    HierarchicalChunkingConfiguration& WithLevelConfigurations(LevelConfigurationsT&& value) { SetLevelConfigurations(std::forward<LevelConfigurationsT>(value)); return *this;}
    template<typename LevelConfigurationsT = HierarchicalChunkingLevelConfiguration>
    HierarchicalChunkingConfiguration& AddLevelConfigurations(LevelConfigurationsT&& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations.emplace_back(std::forward<LevelConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of tokens to repeat across chunks in the same layer.</p>
     */
    inline int GetOverlapTokens() const { return m_overlapTokens; }
    inline bool OverlapTokensHasBeenSet() const { return m_overlapTokensHasBeenSet; }
    inline void SetOverlapTokens(int value) { m_overlapTokensHasBeenSet = true; m_overlapTokens = value; }
    inline HierarchicalChunkingConfiguration& WithOverlapTokens(int value) { SetOverlapTokens(value); return *this;}
    ///@}
  private:

    Aws::Vector<HierarchicalChunkingLevelConfiguration> m_levelConfigurations;
    bool m_levelConfigurationsHasBeenSet = false;

    int m_overlapTokens{0};
    bool m_overlapTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
