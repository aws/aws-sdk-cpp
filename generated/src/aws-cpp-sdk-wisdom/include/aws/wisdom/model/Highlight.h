/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>

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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Offset specification to describe highlighting of document excerpts for
   * rendering search results and recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/Highlight">AWS
   * API Reference</a></p>
   */
  class Highlight
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API Highlight();
    AWS_CONNECTWISDOMSERVICE_API Highlight(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Highlight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The offset for the start of the highlight.</p>
     */
    inline int GetBeginOffsetInclusive() const{ return m_beginOffsetInclusive; }

    /**
     * <p>The offset for the start of the highlight.</p>
     */
    inline bool BeginOffsetInclusiveHasBeenSet() const { return m_beginOffsetInclusiveHasBeenSet; }

    /**
     * <p>The offset for the start of the highlight.</p>
     */
    inline void SetBeginOffsetInclusive(int value) { m_beginOffsetInclusiveHasBeenSet = true; m_beginOffsetInclusive = value; }

    /**
     * <p>The offset for the start of the highlight.</p>
     */
    inline Highlight& WithBeginOffsetInclusive(int value) { SetBeginOffsetInclusive(value); return *this;}


    /**
     * <p>The offset for the end of the highlight.</p>
     */
    inline int GetEndOffsetExclusive() const{ return m_endOffsetExclusive; }

    /**
     * <p>The offset for the end of the highlight.</p>
     */
    inline bool EndOffsetExclusiveHasBeenSet() const { return m_endOffsetExclusiveHasBeenSet; }

    /**
     * <p>The offset for the end of the highlight.</p>
     */
    inline void SetEndOffsetExclusive(int value) { m_endOffsetExclusiveHasBeenSet = true; m_endOffsetExclusive = value; }

    /**
     * <p>The offset for the end of the highlight.</p>
     */
    inline Highlight& WithEndOffsetExclusive(int value) { SetEndOffsetExclusive(value); return *this;}

  private:

    int m_beginOffsetInclusive;
    bool m_beginOffsetInclusiveHasBeenSet = false;

    int m_endOffsetExclusive;
    bool m_endOffsetExclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
