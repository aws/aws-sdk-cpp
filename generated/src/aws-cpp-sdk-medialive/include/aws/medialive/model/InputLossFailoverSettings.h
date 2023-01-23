/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * MediaLive will perform a failover if content is not detected in this input for
   * the specified period.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputLossFailoverSettings">AWS
   * API Reference</a></p>
   */
  class InputLossFailoverSettings
  {
  public:
    AWS_MEDIALIVE_API InputLossFailoverSettings();
    AWS_MEDIALIVE_API InputLossFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputLossFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The amount of time (in milliseconds) that no input is detected. After that time,
     * an input failover will occur.
     */
    inline int GetInputLossThresholdMsec() const{ return m_inputLossThresholdMsec; }

    /**
     * The amount of time (in milliseconds) that no input is detected. After that time,
     * an input failover will occur.
     */
    inline bool InputLossThresholdMsecHasBeenSet() const { return m_inputLossThresholdMsecHasBeenSet; }

    /**
     * The amount of time (in milliseconds) that no input is detected. After that time,
     * an input failover will occur.
     */
    inline void SetInputLossThresholdMsec(int value) { m_inputLossThresholdMsecHasBeenSet = true; m_inputLossThresholdMsec = value; }

    /**
     * The amount of time (in milliseconds) that no input is detected. After that time,
     * an input failover will occur.
     */
    inline InputLossFailoverSettings& WithInputLossThresholdMsec(int value) { SetInputLossThresholdMsec(value); return *this;}

  private:

    int m_inputLossThresholdMsec;
    bool m_inputLossThresholdMsecHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
