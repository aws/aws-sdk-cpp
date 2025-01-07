﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CaseEditItem">AWS
   * API Reference</a></p>
   */
  class CaseEditItem
  {
  public:
    AWS_SECURITYIR_API CaseEditItem();
    AWS_SECURITYIR_API CaseEditItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API CaseEditItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }
    inline CaseEditItem& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}
    inline CaseEditItem& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline CaseEditItem& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline CaseEditItem& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline CaseEditItem& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline CaseEditItem& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline CaseEditItem& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline CaseEditItem& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline CaseEditItem& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CaseEditItem& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CaseEditItem& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
