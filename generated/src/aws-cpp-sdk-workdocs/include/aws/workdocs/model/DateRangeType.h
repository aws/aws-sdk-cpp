/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Filters results based on timestamp range (in epochs).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DateRangeType">AWS
   * API Reference</a></p>
   */
  class DateRangeType
  {
  public:
    AWS_WORKDOCS_API DateRangeType();
    AWS_WORKDOCS_API DateRangeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API DateRangeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp range start value (in epochs)</p>
     */
    inline const Aws::Utils::DateTime& GetStartValue() const{ return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    inline void SetStartValue(const Aws::Utils::DateTime& value) { m_startValueHasBeenSet = true; m_startValue = value; }
    inline void SetStartValue(Aws::Utils::DateTime&& value) { m_startValueHasBeenSet = true; m_startValue = std::move(value); }
    inline DateRangeType& WithStartValue(const Aws::Utils::DateTime& value) { SetStartValue(value); return *this;}
    inline DateRangeType& WithStartValue(Aws::Utils::DateTime&& value) { SetStartValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp range end value (in epochs).</p>
     */
    inline const Aws::Utils::DateTime& GetEndValue() const{ return m_endValue; }
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }
    inline void SetEndValue(const Aws::Utils::DateTime& value) { m_endValueHasBeenSet = true; m_endValue = value; }
    inline void SetEndValue(Aws::Utils::DateTime&& value) { m_endValueHasBeenSet = true; m_endValue = std::move(value); }
    inline DateRangeType& WithEndValue(const Aws::Utils::DateTime& value) { SetEndValue(value); return *this;}
    inline DateRangeType& WithEndValue(Aws::Utils::DateTime&& value) { SetEndValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startValue;
    bool m_startValueHasBeenSet = false;

    Aws::Utils::DateTime m_endValue;
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
