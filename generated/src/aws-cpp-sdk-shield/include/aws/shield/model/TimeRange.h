/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The time range. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/TimeRange">AWS
   * API Reference</a></p>
   */
  class TimeRange
  {
  public:
    AWS_SHIELD_API TimeRange() = default;
    AWS_SHIELD_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetFromInclusive() const { return m_fromInclusive; }
    inline bool FromInclusiveHasBeenSet() const { return m_fromInclusiveHasBeenSet; }
    template<typename FromInclusiveT = Aws::Utils::DateTime>
    void SetFromInclusive(FromInclusiveT&& value) { m_fromInclusiveHasBeenSet = true; m_fromInclusive = std::forward<FromInclusiveT>(value); }
    template<typename FromInclusiveT = Aws::Utils::DateTime>
    TimeRange& WithFromInclusive(FromInclusiveT&& value) { SetFromInclusive(std::forward<FromInclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetToExclusive() const { return m_toExclusive; }
    inline bool ToExclusiveHasBeenSet() const { return m_toExclusiveHasBeenSet; }
    template<typename ToExclusiveT = Aws::Utils::DateTime>
    void SetToExclusive(ToExclusiveT&& value) { m_toExclusiveHasBeenSet = true; m_toExclusive = std::forward<ToExclusiveT>(value); }
    template<typename ToExclusiveT = Aws::Utils::DateTime>
    TimeRange& WithToExclusive(ToExclusiveT&& value) { SetToExclusive(std::forward<ToExclusiveT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_fromInclusive{};
    bool m_fromInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_toExclusive{};
    bool m_toExclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
