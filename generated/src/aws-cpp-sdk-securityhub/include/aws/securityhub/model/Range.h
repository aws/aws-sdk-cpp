/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Identifies where the sensitive data begins and ends.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Range">AWS
   * API Reference</a></p>
   */
  class Range
  {
  public:
    AWS_SECURITYHUB_API Range() = default;
    AWS_SECURITYHUB_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of lines (for a line range) or characters (for an offset range)
     * from the beginning of the file to the end of the sensitive data.</p>
     */
    inline long long GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }
    inline Range& WithStart(long long value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines (for a line range) or characters (for an offset range)
     * from the beginning of the file to the end of the sensitive data.</p>
     */
    inline long long GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }
    inline Range& WithEnd(long long value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the line where the sensitive data starts, the column within the line where
     * the sensitive data starts.</p>
     */
    inline long long GetStartColumn() const { return m_startColumn; }
    inline bool StartColumnHasBeenSet() const { return m_startColumnHasBeenSet; }
    inline void SetStartColumn(long long value) { m_startColumnHasBeenSet = true; m_startColumn = value; }
    inline Range& WithStartColumn(long long value) { SetStartColumn(value); return *this;}
    ///@}
  private:

    long long m_start{0};
    bool m_startHasBeenSet = false;

    long long m_end{0};
    bool m_endHasBeenSet = false;

    long long m_startColumn{0};
    bool m_startColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
