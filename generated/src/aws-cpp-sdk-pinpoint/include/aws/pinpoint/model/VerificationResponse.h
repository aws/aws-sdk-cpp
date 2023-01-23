/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
   * <p>Verify OTP Message Response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VerificationResponse">AWS
   * API Reference</a></p>
   */
  class VerificationResponse
  {
  public:
    AWS_PINPOINT_API VerificationResponse();
    AWS_PINPOINT_API VerificationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API VerificationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the OTP is valid or not.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>Specifies whether the OTP is valid or not.</p>
     */
    inline bool ValidHasBeenSet() const { return m_validHasBeenSet; }

    /**
     * <p>Specifies whether the OTP is valid or not.</p>
     */
    inline void SetValid(bool value) { m_validHasBeenSet = true; m_valid = value; }

    /**
     * <p>Specifies whether the OTP is valid or not.</p>
     */
    inline VerificationResponse& WithValid(bool value) { SetValid(value); return *this;}

  private:

    bool m_valid;
    bool m_validHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
