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
    AWS_SSMCONTACTS_API PreviewOverride() = default;
    AWS_SSMCONTACTS_API PreviewOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API PreviewOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about contacts to add to an on-call rotation override.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewMembers() const { return m_newMembers; }
    inline bool NewMembersHasBeenSet() const { return m_newMembersHasBeenSet; }
    template<typename NewMembersT = Aws::Vector<Aws::String>>
    void SetNewMembers(NewMembersT&& value) { m_newMembersHasBeenSet = true; m_newMembers = std::forward<NewMembersT>(value); }
    template<typename NewMembersT = Aws::Vector<Aws::String>>
    PreviewOverride& WithNewMembers(NewMembersT&& value) { SetNewMembers(std::forward<NewMembersT>(value)); return *this;}
    template<typename NewMembersT = Aws::String>
    PreviewOverride& AddNewMembers(NewMembersT&& value) { m_newMembersHasBeenSet = true; m_newMembers.emplace_back(std::forward<NewMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the time a rotation override would begin.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PreviewOverride& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the time a rotation override would end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    PreviewOverride& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_newMembers;
    bool m_newMembersHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
