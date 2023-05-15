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
   * <p>Indicates the direction the eyes are gazing in (independent of the head pose)
   * as determined by its pitch and yaw. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/EyeDirection">AWS
   * API Reference</a></p>
   */
  class EyeDirection
  {
  public:
    AWS_REKOGNITION_API EyeDirection();
    AWS_REKOGNITION_API EyeDirection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API EyeDirection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Value representing eye direction on the yaw axis.</p>
     */
    inline double GetYaw() const{ return m_yaw; }

    /**
     * <p>Value representing eye direction on the yaw axis.</p>
     */
    inline bool YawHasBeenSet() const { return m_yawHasBeenSet; }

    /**
     * <p>Value representing eye direction on the yaw axis.</p>
     */
    inline void SetYaw(double value) { m_yawHasBeenSet = true; m_yaw = value; }

    /**
     * <p>Value representing eye direction on the yaw axis.</p>
     */
    inline EyeDirection& WithYaw(double value) { SetYaw(value); return *this;}


    /**
     * <p>Value representing eye direction on the pitch axis.</p>
     */
    inline double GetPitch() const{ return m_pitch; }

    /**
     * <p>Value representing eye direction on the pitch axis.</p>
     */
    inline bool PitchHasBeenSet() const { return m_pitchHasBeenSet; }

    /**
     * <p>Value representing eye direction on the pitch axis.</p>
     */
    inline void SetPitch(double value) { m_pitchHasBeenSet = true; m_pitch = value; }

    /**
     * <p>Value representing eye direction on the pitch axis.</p>
     */
    inline EyeDirection& WithPitch(double value) { SetPitch(value); return *this;}


    /**
     * <p>The confidence that the service has in its predicted eye direction.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that the service has in its predicted eye direction.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that the service has in its predicted eye direction.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that the service has in its predicted eye direction.</p>
     */
    inline EyeDirection& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    double m_yaw;
    bool m_yawHasBeenSet = false;

    double m_pitch;
    bool m_pitchHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
