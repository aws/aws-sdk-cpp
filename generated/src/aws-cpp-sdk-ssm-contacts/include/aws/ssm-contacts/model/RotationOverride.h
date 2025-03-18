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
    AWS_SSMCONTACTS_API RotationOverride() = default;
    AWS_SSMCONTACTS_API RotationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API RotationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the override to an on-call rotation.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const { return m_rotationOverrideId; }
    inline bool RotationOverrideIdHasBeenSet() const { return m_rotationOverrideIdHasBeenSet; }
    template<typename RotationOverrideIdT = Aws::String>
    void SetRotationOverrideId(RotationOverrideIdT&& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = std::forward<RotationOverrideIdT>(value); }
    template<typename RotationOverrideIdT = Aws::String>
    RotationOverride& WithRotationOverrideId(RotationOverrideIdT&& value) { SetRotationOverrideId(std::forward<RotationOverrideIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the contacts assigned to the override of
     * the on-call rotation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNewContactIds() const { return m_newContactIds; }
    inline bool NewContactIdsHasBeenSet() const { return m_newContactIdsHasBeenSet; }
    template<typename NewContactIdsT = Aws::Vector<Aws::String>>
    void SetNewContactIds(NewContactIdsT&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds = std::forward<NewContactIdsT>(value); }
    template<typename NewContactIdsT = Aws::Vector<Aws::String>>
    RotationOverride& WithNewContactIds(NewContactIdsT&& value) { SetNewContactIds(std::forward<NewContactIdsT>(value)); return *this;}
    template<typename NewContactIdsT = Aws::String>
    RotationOverride& AddNewContactIds(NewContactIdsT&& value) { m_newContactIdsHasBeenSet = true; m_newContactIds.emplace_back(std::forward<NewContactIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time a rotation override begins.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RotationOverride& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a rotation override ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    RotationOverride& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time a rotation override was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    RotationOverride& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rotationOverrideId;
    bool m_rotationOverrideIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_newContactIds;
    bool m_newContactIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
