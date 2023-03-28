/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about contacts and times that an on-call override
   * replaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/PreviewOverride">AWS
   * API Reference</a></p>
   */
  class PreviewOverride
  {
  public:
    AWS_SSMCONTACTS_API PreviewOverride();
    AWS_SSMCONTACTS_API PreviewOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API PreviewOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewMembers() const{ return m_newMembers; }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline bool NewMembersHasBeenSet() const { return m_newMembersHasBeenSet; }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline void SetNewMembers(const Aws::Vector<Aws::String>& value) { m_newMembersHasBeenSet = true; m_newMembers = value; }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline void SetNewMembers(Aws::Vector<Aws::String>&& value) { m_newMembersHasBeenSet = true; m_newMembers = std::move(value); }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline PreviewOverride& WithNewMembers(const Aws::Vector<Aws::String>& value) { SetNewMembers(value); return *this;}

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline PreviewOverride& WithNewMembers(Aws::Vector<Aws::String>&& value) { SetNewMembers(std::move(value)); return *this;}

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline PreviewOverride& AddNewMembers(const Aws::String& value) { m_newMembersHasBeenSet = true; m_newMembers.push_back(value); return *this; }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline PreviewOverride& AddNewMembers(Aws::String&& value) { m_newMembersHasBeenSet = true; m_newMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline PreviewOverride& AddNewMembers(const char* value) { m_newMembersHasBeenSet = true; m_newMembers.push_back(value); return *this; }


    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline PreviewOverride& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline PreviewOverride& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline PreviewOverride& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline PreviewOverride& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_newMembers;
    bool m_newMembersHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
