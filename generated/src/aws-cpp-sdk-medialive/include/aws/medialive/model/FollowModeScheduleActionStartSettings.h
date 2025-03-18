/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FollowPoint.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings to specify if an action follows another.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FollowModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class FollowModeScheduleActionStartSettings
  {
  public:
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings() = default;
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FollowModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Identifies whether this action starts relative to the start or relative to the
     * end of the reference action.
     */
    inline FollowPoint GetFollowPoint() const { return m_followPoint; }
    inline bool FollowPointHasBeenSet() const { return m_followPointHasBeenSet; }
    inline void SetFollowPoint(FollowPoint value) { m_followPointHasBeenSet = true; m_followPoint = value; }
    inline FollowModeScheduleActionStartSettings& WithFollowPoint(FollowPoint value) { SetFollowPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * The action name of another action that this one refers to.
     */
    inline const Aws::String& GetReferenceActionName() const { return m_referenceActionName; }
    inline bool ReferenceActionNameHasBeenSet() const { return m_referenceActionNameHasBeenSet; }
    template<typename ReferenceActionNameT = Aws::String>
    void SetReferenceActionName(ReferenceActionNameT&& value) { m_referenceActionNameHasBeenSet = true; m_referenceActionName = std::forward<ReferenceActionNameT>(value); }
    template<typename ReferenceActionNameT = Aws::String>
    FollowModeScheduleActionStartSettings& WithReferenceActionName(ReferenceActionNameT&& value) { SetReferenceActionName(std::forward<ReferenceActionNameT>(value)); return *this;}
    ///@}
  private:

    FollowPoint m_followPoint{FollowPoint::NOT_SET};
    bool m_followPointHasBeenSet = false;

    Aws::String m_referenceActionName;
    bool m_referenceActionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
