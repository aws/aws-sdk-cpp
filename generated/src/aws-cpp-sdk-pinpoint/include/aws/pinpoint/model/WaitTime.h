/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a duration or a date and time that indicates when Amazon Pinpoint
   * determines whether an activity's conditions have been met or an activity moves
   * participants to the next activity in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WaitTime">AWS
   * API Reference</a></p>
   */
  class WaitTime
  {
  public:
    AWS_PINPOINT_API WaitTime();
    AWS_PINPOINT_API WaitTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WaitTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline const Aws::String& GetWaitFor() const{ return m_waitFor; }

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline bool WaitForHasBeenSet() const { return m_waitForHasBeenSet; }

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitFor(const Aws::String& value) { m_waitForHasBeenSet = true; m_waitFor = value; }

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitFor(Aws::String&& value) { m_waitForHasBeenSet = true; m_waitFor = std::move(value); }

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitFor(const char* value) { m_waitForHasBeenSet = true; m_waitFor.assign(value); }

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitFor(const Aws::String& value) { SetWaitFor(value); return *this;}

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitFor(Aws::String&& value) { SetWaitFor(std::move(value)); return *this;}

    /**
     * <p>The amount of time to wait, as a duration in ISO 8601 format, before
     * determining whether the activity's conditions have been met or moving
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitFor(const char* value) { SetWaitFor(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline const Aws::String& GetWaitUntil() const{ return m_waitUntil; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline bool WaitUntilHasBeenSet() const { return m_waitUntilHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitUntil(const Aws::String& value) { m_waitUntilHasBeenSet = true; m_waitUntil = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitUntil(Aws::String&& value) { m_waitUntilHasBeenSet = true; m_waitUntil = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline void SetWaitUntil(const char* value) { m_waitUntilHasBeenSet = true; m_waitUntil.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitUntil(const Aws::String& value) { SetWaitUntil(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitUntil(Aws::String&& value) { SetWaitUntil(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint determines
     * whether the activity's conditions have been met or the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline WaitTime& WithWaitUntil(const char* value) { SetWaitUntil(value); return *this;}

  private:

    Aws::String m_waitFor;
    bool m_waitForHasBeenSet = false;

    Aws::String m_waitUntil;
    bool m_waitUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
