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
    AWS_WORKDOCS_API DateRangeType() = default;
    AWS_WORKDOCS_API DateRangeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API DateRangeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp range start value (in epochs)</p>
     */
    inline const Aws::Utils::DateTime& GetStartValue() const { return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    template<typename StartValueT = Aws::Utils::DateTime>
    void SetStartValue(StartValueT&& value) { m_startValueHasBeenSet = true; m_startValue = std::forward<StartValueT>(value); }
    template<typename StartValueT = Aws::Utils::DateTime>
    DateRangeType& WithStartValue(StartValueT&& value) { SetStartValue(std::forward<StartValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp range end value (in epochs).</p>
     */
    inline const Aws::Utils::DateTime& GetEndValue() const { return m_endValue; }
    inline bool EndValueHasBeenSet() const { return m_endValueHasBeenSet; }
    template<typename EndValueT = Aws::Utils::DateTime>
    void SetEndValue(EndValueT&& value) { m_endValueHasBeenSet = true; m_endValue = std::forward<EndValueT>(value); }
    template<typename EndValueT = Aws::Utils::DateTime>
    DateRangeType& WithEndValue(EndValueT&& value) { SetEndValue(std::forward<EndValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startValue{};
    bool m_startValueHasBeenSet = false;

    Aws::Utils::DateTime m_endValue{};
    bool m_endValueHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
