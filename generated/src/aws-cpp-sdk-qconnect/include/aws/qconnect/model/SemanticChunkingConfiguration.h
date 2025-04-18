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
   * <p>Settings for semantic document chunking for a data source. Semantic chunking
   * splits a document into smaller documents based on groups of similar content
   * derived from the text with natural language processing.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SemanticChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class SemanticChunkingConfiguration
  {
  public:
    AWS_QCONNECT_API SemanticChunkingConfiguration() = default;
    AWS_QCONNECT_API SemanticChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SemanticChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens that a chunk can contain.</p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline SemanticChunkingConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffer size.</p>
     */
    inline int GetBufferSize() const { return m_bufferSize; }
    inline bool BufferSizeHasBeenSet() const { return m_bufferSizeHasBeenSet; }
    inline void SetBufferSize(int value) { m_bufferSizeHasBeenSet = true; m_bufferSize = value; }
    inline SemanticChunkingConfiguration& WithBufferSize(int value) { SetBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dissimilarity threshold for splitting chunks.</p>
     */
    inline int GetBreakpointPercentileThreshold() const { return m_breakpointPercentileThreshold; }
    inline bool BreakpointPercentileThresholdHasBeenSet() const { return m_breakpointPercentileThresholdHasBeenSet; }
    inline void SetBreakpointPercentileThreshold(int value) { m_breakpointPercentileThresholdHasBeenSet = true; m_breakpointPercentileThreshold = value; }
    inline SemanticChunkingConfiguration& WithBreakpointPercentileThreshold(int value) { SetBreakpointPercentileThreshold(value); return *this;}
    ///@}
  private:

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;

    int m_bufferSize{0};
    bool m_bufferSizeHasBeenSet = false;

    int m_breakpointPercentileThreshold{0};
    bool m_breakpointPercentileThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
