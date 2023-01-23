/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>

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
   * <p>The configuration used to authenticate a speaker during a
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/AuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfiguration
  {
  public:
    AWS_VOICEID_API AuthenticationConfiguration();
    AWS_VOICEID_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum threshold needed to successfully authenticate a speaker.</p>
     */
    inline int GetAcceptanceThreshold() const{ return m_acceptanceThreshold; }

    /**
     * <p>The minimum threshold needed to successfully authenticate a speaker.</p>
     */
    inline bool AcceptanceThresholdHasBeenSet() const { return m_acceptanceThresholdHasBeenSet; }

    /**
     * <p>The minimum threshold needed to successfully authenticate a speaker.</p>
     */
    inline void SetAcceptanceThreshold(int value) { m_acceptanceThresholdHasBeenSet = true; m_acceptanceThreshold = value; }

    /**
     * <p>The minimum threshold needed to successfully authenticate a speaker.</p>
     */
    inline AuthenticationConfiguration& WithAcceptanceThreshold(int value) { SetAcceptanceThreshold(value); return *this;}

  private:

    int m_acceptanceThreshold;
    bool m_acceptanceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
