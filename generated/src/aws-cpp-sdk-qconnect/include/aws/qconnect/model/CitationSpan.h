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
   * <p>Contains information about where the text with a citation begins and ends in
   * the generated output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CitationSpan">AWS
   * API Reference</a></p>
   */
  class CitationSpan
  {
  public:
    AWS_QCONNECT_API CitationSpan() = default;
    AWS_QCONNECT_API CitationSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API CitationSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Where the text with a citation starts in the generated output.</p>
     */
    inline int GetBeginOffsetInclusive() const { return m_beginOffsetInclusive; }
    inline bool BeginOffsetInclusiveHasBeenSet() const { return m_beginOffsetInclusiveHasBeenSet; }
    inline void SetBeginOffsetInclusive(int value) { m_beginOffsetInclusiveHasBeenSet = true; m_beginOffsetInclusive = value; }
    inline CitationSpan& WithBeginOffsetInclusive(int value) { SetBeginOffsetInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the text with a citation ends in the generated output.</p>
     */
    inline int GetEndOffsetExclusive() const { return m_endOffsetExclusive; }
    inline bool EndOffsetExclusiveHasBeenSet() const { return m_endOffsetExclusiveHasBeenSet; }
    inline void SetEndOffsetExclusive(int value) { m_endOffsetExclusiveHasBeenSet = true; m_endOffsetExclusive = value; }
    inline CitationSpan& WithEndOffsetExclusive(int value) { SetEndOffsetExclusive(value); return *this;}
    ///@}
  private:

    int m_beginOffsetInclusive{0};
    bool m_beginOffsetInclusiveHasBeenSet = false;

    int m_endOffsetExclusive{0};
    bool m_endOffsetExclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
