/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about an override specified for an on-call
   * rotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/RotationOverride">AWS
   * API Reference</a></p>
   */
  class RotationOverride
  {
  public:
    AWS_SSMCONTACTS_API RotationOverride();
    AWS_SSMCONTACTS_API RotationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RotationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const{ return m_rotationOverrideId; }
    inline bool RotationOverrideIdHasBeenSet() const { return m_rotationOverrideIdHasBeenSet; }
    inline void SetRotationOverrideId(const Aws::String& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = value; }
    inline void SetRotationOverrideId(Aws::String&& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = std::move(value); }
    inline void SetRotationOverrideId(const char* value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId.assign(value); }
    inline RotationOverride& WithRotationOverrideId(const Aws::String& value) { SetRotationOverrideId(value); return *this;}
    inline RotationOverride& WithRotationOverrideId(Aws::String&& value) { SetRotationOverrideId(std::move(value)); return *this;}
    inline RotationOverride& WithRotationOverrideId(const char* value) { SetRotationOverrideId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewContactIds() const{ return m_newContactIds; }
    inline bool NewContactIdsHasBeenSet() const { return m_newContactIdsHasBeenSet; }
    inline void SetNewContactIds(const Aws::Vector<Aws::String>& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = value; }
    inline void SetNewContactIds(Aws::Vector<Aws::String>&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = std::move(value); }
    inline RotationOverride& WithNewContactIds(const Aws::Vector<Aws::String>& value) { SetNewContactIds(value); return *this;}
    inline RotationOverride& WithNewContactIds(Aws::Vector<Aws::String>&& value) { SetNewContactIds(std::move(value)); return *this;}
    inline RotationOverride& AddNewContactIds(const Aws::String& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(value); return *this; }
    inline RotationOverride& AddNewContactIds(Aws::String&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(std::move(value)); return *this; }
    inline RotationOverride& AddNewContactIds(const char* value) { m_newContactIdsHasBeenSet = true; m_newContactIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time a rotation override begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RotationOverride& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RotationOverride& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a rotation override ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline RotationOverride& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline RotationOverride& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a rotation override was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline RotationOverride& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline RotationOverride& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationOverrideId;
    bool m_rotationOverrideIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_newContactIds;
    bool m_newContactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
