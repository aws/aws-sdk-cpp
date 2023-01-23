/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/DuplicateRegistrationAction.h>
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
   * <p>The configuration defining the action to take when a duplicate fraudster is
   * detected, and the similarity threshold to use for detecting a duplicate
   * fraudster during a batch fraudster registration job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/RegistrationConfig">AWS
   * API Reference</a></p>
   */
  class RegistrationConfig
  {
  public:
    AWS_VOICEID_API RegistrationConfig();
    AWS_VOICEID_API RegistrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API RegistrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline const DuplicateRegistrationAction& GetDuplicateRegistrationAction() const{ return m_duplicateRegistrationAction; }

    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline bool DuplicateRegistrationActionHasBeenSet() const { return m_duplicateRegistrationActionHasBeenSet; }

    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline void SetDuplicateRegistrationAction(const DuplicateRegistrationAction& value) { m_duplicateRegistrationActionHasBeenSet = true; m_duplicateRegistrationAction = value; }

    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline void SetDuplicateRegistrationAction(DuplicateRegistrationAction&& value) { m_duplicateRegistrationActionHasBeenSet = true; m_duplicateRegistrationAction = std::move(value); }

    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline RegistrationConfig& WithDuplicateRegistrationAction(const DuplicateRegistrationAction& value) { SetDuplicateRegistrationAction(value); return *this;}

    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline RegistrationConfig& WithDuplicateRegistrationAction(DuplicateRegistrationAction&& value) { SetDuplicateRegistrationAction(std::move(value)); return *this;}


    /**
     * <p>The minimum similarity score between the new and old fraudsters in order to
     * consider the new fraudster a duplicate.</p>
     */
    inline int GetFraudsterSimilarityThreshold() const{ return m_fraudsterSimilarityThreshold; }

    /**
     * <p>The minimum similarity score between the new and old fraudsters in order to
     * consider the new fraudster a duplicate.</p>
     */
    inline bool FraudsterSimilarityThresholdHasBeenSet() const { return m_fraudsterSimilarityThresholdHasBeenSet; }

    /**
     * <p>The minimum similarity score between the new and old fraudsters in order to
     * consider the new fraudster a duplicate.</p>
     */
    inline void SetFraudsterSimilarityThreshold(int value) { m_fraudsterSimilarityThresholdHasBeenSet = true; m_fraudsterSimilarityThreshold = value; }

    /**
     * <p>The minimum similarity score between the new and old fraudsters in order to
     * consider the new fraudster a duplicate.</p>
     */
    inline RegistrationConfig& WithFraudsterSimilarityThreshold(int value) { SetFraudsterSimilarityThreshold(value); return *this;}

  private:

    DuplicateRegistrationAction m_duplicateRegistrationAction;
    bool m_duplicateRegistrationActionHasBeenSet = false;

    int m_fraudsterSimilarityThreshold;
    bool m_fraudsterSimilarityThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
