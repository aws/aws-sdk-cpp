/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/model/UnlockDelayUnit.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>Information about the retention rule unlock delay. The unlock delay is the
   * period after which a retention rule can be modified or edited after it has been
   * unlocked by a user with the required permissions. The retention rule can't be
   * modified or deleted during the unlock delay.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UnlockDelay">AWS
   * API Reference</a></p>
   */
  class UnlockDelay
  {
  public:
    AWS_RECYCLEBIN_API UnlockDelay();
    AWS_RECYCLEBIN_API UnlockDelay(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API UnlockDelay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unlock delay period, measured in the unit specified for <b>
     * UnlockDelayUnit</b>.</p>
     */
    inline int GetUnlockDelayValue() const{ return m_unlockDelayValue; }

    /**
     * <p>The unlock delay period, measured in the unit specified for <b>
     * UnlockDelayUnit</b>.</p>
     */
    inline bool UnlockDelayValueHasBeenSet() const { return m_unlockDelayValueHasBeenSet; }

    /**
     * <p>The unlock delay period, measured in the unit specified for <b>
     * UnlockDelayUnit</b>.</p>
     */
    inline void SetUnlockDelayValue(int value) { m_unlockDelayValueHasBeenSet = true; m_unlockDelayValue = value; }

    /**
     * <p>The unlock delay period, measured in the unit specified for <b>
     * UnlockDelayUnit</b>.</p>
     */
    inline UnlockDelay& WithUnlockDelayValue(int value) { SetUnlockDelayValue(value); return *this;}


    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline const UnlockDelayUnit& GetUnlockDelayUnit() const{ return m_unlockDelayUnit; }

    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline bool UnlockDelayUnitHasBeenSet() const { return m_unlockDelayUnitHasBeenSet; }

    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline void SetUnlockDelayUnit(const UnlockDelayUnit& value) { m_unlockDelayUnitHasBeenSet = true; m_unlockDelayUnit = value; }

    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline void SetUnlockDelayUnit(UnlockDelayUnit&& value) { m_unlockDelayUnitHasBeenSet = true; m_unlockDelayUnit = std::move(value); }

    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline UnlockDelay& WithUnlockDelayUnit(const UnlockDelayUnit& value) { SetUnlockDelayUnit(value); return *this;}

    /**
     * <p>The unit of time in which to measure the unlock delay. Currently, the unlock
     * delay can be measure only in days.</p>
     */
    inline UnlockDelay& WithUnlockDelayUnit(UnlockDelayUnit&& value) { SetUnlockDelayUnit(std::move(value)); return *this;}

  private:

    int m_unlockDelayValue;
    bool m_unlockDelayValueHasBeenSet = false;

    UnlockDelayUnit m_unlockDelayUnit;
    bool m_unlockDelayUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
