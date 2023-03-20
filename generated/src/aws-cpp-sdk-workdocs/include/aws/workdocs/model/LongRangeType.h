/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>

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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Filter based on size (in bytes).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/LongRangeType">AWS
   * API Reference</a></p>
   */
  class LongRangeType
  {
  public:
    AWS_WORKDOCS_API LongRangeType();
    AWS_WORKDOCS_API LongRangeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API LongRangeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size start range (in bytes).</p>
     */
    inline long long GetStartValue() const{ return m_startValue; }

    /**
     * <p>The size start range (in bytes).</p>
     */
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }

    /**
     * <p>The size start range (in bytes).</p>
     */
    inline void SetStartValue(long long value) { m_startValueHasBeenSet = true; m_startValue = value; }

    /**
     * <p>The size start range (in bytes).</p>
     */
    inline LongRangeType& WithStartValue(long long value) { SetStartValue(value); return *this;}


    /**
     * <p>The size end range (in bytes).</p>
     */
    inline long long GetEndValue() const{ return m_endValue; }

    /**
     * <p>The size end range (in bytes).</p>
     */
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }

    /**
     * <p>The size end range (in bytes).</p>
     */
    inline void SetEndValue(long long value) { m_endValueHasBeenSet = true; m_endValue = value; }

    /**
     * <p>The size end range (in bytes).</p>
     */
    inline LongRangeType& WithEndValue(long long value) { SetEndValue(value); return *this;}

  private:

    long long m_startValue;
    bool m_startValueHasBeenSet = false;

    long long m_endValue;
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
