﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a holdout activity in a journey. This type of
   * activity stops a journey for a specified percentage of
   * participants.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/HoldoutActivity">AWS
   * API Reference</a></p>
   */
  class HoldoutActivity
  {
  public:
    AWS_PINPOINT_API HoldoutActivity() = default;
    AWS_PINPOINT_API HoldoutActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API HoldoutActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after performing the
     * holdout activity.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    HoldoutActivity& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of participants who shouldn't continue the journey.</p> <p>To
     * determine which participants are held out, Amazon Pinpoint applies a
     * probability-based algorithm to the percentage that you specify. Therefore, the
     * actual percentage of participants who are held out may not be equal to the
     * percentage that you specify.</p>
     */
    inline int GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline HoldoutActivity& WithPercentage(int value) { SetPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    int m_percentage{0};
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
