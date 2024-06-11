﻿/**
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
   * <p>Specifies the rule settings for when messages can't be sent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ClosedDaysRule">AWS
   * API Reference</a></p>
   */
  class ClosedDaysRule
  {
  public:
    AWS_PINPOINT_API ClosedDaysRule();
    AWS_PINPOINT_API ClosedDaysRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ClosedDaysRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the closed day rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ClosedDaysRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ClosedDaysRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ClosedDaysRule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start DateTime ISO 8601 format</p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }
    inline void SetStartDateTime(const char* value) { m_startDateTimeHasBeenSet = true; m_startDateTime.assign(value); }
    inline ClosedDaysRule& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}
    inline ClosedDaysRule& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}
    inline ClosedDaysRule& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End DateTime ISO 8601 format</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }
    inline ClosedDaysRule& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}
    inline ClosedDaysRule& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}
    inline ClosedDaysRule& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
