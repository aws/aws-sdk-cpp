/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/ExistingEnrollmentAction.h>
#include <aws/voice-id/model/EnrollmentJobFraudDetectionConfig.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains configurations defining enrollment behavior for the batch
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EnrollmentConfig">AWS
   * API Reference</a></p>
   */
  class EnrollmentConfig
  {
  public:
    AWS_VOICEID_API EnrollmentConfig();
    AWS_VOICEID_API EnrollmentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API EnrollmentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The action to take when the specified speaker is already enrolled in the
     * specified domain. The default value is <code>SKIP</code>, which skips the
     * enrollment for the existing speaker. Setting the value to <code>OVERWRITE</code>
     * replaces the existing voice prints and enrollment audio stored for that speaker
     * with new data generated from the latest audio.</p>
     */
    inline const ExistingEnrollmentAction& GetExistingEnrollmentAction() const{ return m_existingEnrollmentAction; }
    inline bool ExistingEnrollmentActionHasBeenSet() const { return m_existingEnrollmentActionHasBeenSet; }
    inline void SetExistingEnrollmentAction(const ExistingEnrollmentAction& value) { m_existingEnrollmentActionHasBeenSet = true; m_existingEnrollmentAction = value; }
    inline void SetExistingEnrollmentAction(ExistingEnrollmentAction&& value) { m_existingEnrollmentActionHasBeenSet = true; m_existingEnrollmentAction = std::move(value); }
    inline EnrollmentConfig& WithExistingEnrollmentAction(const ExistingEnrollmentAction& value) { SetExistingEnrollmentAction(value); return *this;}
    inline EnrollmentConfig& WithExistingEnrollmentAction(ExistingEnrollmentAction&& value) { SetExistingEnrollmentAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fraud detection configuration to use for the speaker enrollment job.</p>
     */
    inline const EnrollmentJobFraudDetectionConfig& GetFraudDetectionConfig() const{ return m_fraudDetectionConfig; }
    inline bool FraudDetectionConfigHasBeenSet() const { return m_fraudDetectionConfigHasBeenSet; }
    inline void SetFraudDetectionConfig(const EnrollmentJobFraudDetectionConfig& value) { m_fraudDetectionConfigHasBeenSet = true; m_fraudDetectionConfig = value; }
    inline void SetFraudDetectionConfig(EnrollmentJobFraudDetectionConfig&& value) { m_fraudDetectionConfigHasBeenSet = true; m_fraudDetectionConfig = std::move(value); }
    inline EnrollmentConfig& WithFraudDetectionConfig(const EnrollmentJobFraudDetectionConfig& value) { SetFraudDetectionConfig(value); return *this;}
    inline EnrollmentConfig& WithFraudDetectionConfig(EnrollmentJobFraudDetectionConfig&& value) { SetFraudDetectionConfig(std::move(value)); return *this;}
    ///@}
  private:

    ExistingEnrollmentAction m_existingEnrollmentAction;
    bool m_existingEnrollmentActionHasBeenSet = false;

    EnrollmentJobFraudDetectionConfig m_fraudDetectionConfig;
    bool m_fraudDetectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
