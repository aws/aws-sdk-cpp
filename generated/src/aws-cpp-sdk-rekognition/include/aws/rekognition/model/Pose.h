/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Indicates the pose of the face as determined by its pitch, roll, and
   * yaw.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Pose">AWS
   * API Reference</a></p>
   */
  class Pose
  {
  public:
    AWS_REKOGNITION_API Pose();
    AWS_REKOGNITION_API Pose(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Pose& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline double GetRoll() const{ return m_roll; }

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline bool RollHasBeenSet() const { return m_rollHasBeenSet; }

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline void SetRoll(double value) { m_rollHasBeenSet = true; m_roll = value; }

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline Pose& WithRoll(double value) { SetRoll(value); return *this;}


    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline double GetYaw() const{ return m_yaw; }

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline bool YawHasBeenSet() const { return m_yawHasBeenSet; }

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline void SetYaw(double value) { m_yawHasBeenSet = true; m_yaw = value; }

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline Pose& WithYaw(double value) { SetYaw(value); return *this;}


    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline double GetPitch() const{ return m_pitch; }

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline bool PitchHasBeenSet() const { return m_pitchHasBeenSet; }

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline void SetPitch(double value) { m_pitchHasBeenSet = true; m_pitch = value; }

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline Pose& WithPitch(double value) { SetPitch(value); return *this;}

  private:

    double m_roll;
    bool m_rollHasBeenSet = false;

    double m_yaw;
    bool m_yawHasBeenSet = false;

    double m_pitch;
    bool m_pitchHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
