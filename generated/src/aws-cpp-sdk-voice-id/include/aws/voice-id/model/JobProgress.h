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
   * <p>Indicates the completion progress for a batch job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/JobProgress">AWS
   * API Reference</a></p>
   */
  class JobProgress
  {
  public:
    AWS_VOICEID_API JobProgress();
    AWS_VOICEID_API JobProgress(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API JobProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows the completed percentage of enrollment or registration requests listed
     * in the input file.</p>
     */
    inline int GetPercentComplete() const{ return m_percentComplete; }

    /**
     * <p>Shows the completed percentage of enrollment or registration requests listed
     * in the input file.</p>
     */
    inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }

    /**
     * <p>Shows the completed percentage of enrollment or registration requests listed
     * in the input file.</p>
     */
    inline void SetPercentComplete(int value) { m_percentCompleteHasBeenSet = true; m_percentComplete = value; }

    /**
     * <p>Shows the completed percentage of enrollment or registration requests listed
     * in the input file.</p>
     */
    inline JobProgress& WithPercentComplete(int value) { SetPercentComplete(value); return *this;}

  private:

    int m_percentComplete;
    bool m_percentCompleteHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
