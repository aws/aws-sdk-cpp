/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
#include <aws/workmail/model/EntityState.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of a user or group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Member">AWS API
   * Reference</a></p>
   */
  class Member
  {
  public:
    AWS_WORKMAIL_API Member() = default;
    AWS_WORKMAIL_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the member.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Member& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Member& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A member can be a user or group.</p>
     */
    inline MemberType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MemberType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Member& WithType(MemberType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the member, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Member& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the member was enabled for WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const { return m_enabledDate; }
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    void SetEnabledDate(EnabledDateT&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::forward<EnabledDateT>(value); }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    Member& WithEnabledDate(EnabledDateT&& value) { SetEnabledDate(std::forward<EnabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the member was disabled from WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const { return m_disabledDate; }
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    void SetDisabledDate(DisabledDateT&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::forward<DisabledDateT>(value); }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    Member& WithDisabledDate(DisabledDateT&& value) { SetDisabledDate(std::forward<DisabledDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MemberType m_type{MemberType::NOT_SET};
    bool m_typeHasBeenSet = false;

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate{};
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate{};
    bool m_disabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
