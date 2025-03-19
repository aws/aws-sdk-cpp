/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

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
   * <p>Token settings for each layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/HierarchicalChunkingLevelConfiguration">AWS
   * API Reference</a></p>
   */
  class HierarchicalChunkingLevelConfiguration
  {
  public:
    AWS_QCONNECT_API HierarchicalChunkingLevelConfiguration() = default;
    AWS_QCONNECT_API HierarchicalChunkingLevelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API HierarchicalChunkingLevelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens that a chunk can contain in this layer.</p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline HierarchicalChunkingLevelConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}
  private:

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
