﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ContactListImportAction.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains details about the action of a contact
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ContactListDestination">AWS
   * API Reference</a></p>
   */
  class ContactListDestination
  {
  public:
    AWS_SESV2_API ContactListDestination() = default;
    AWS_SESV2_API ContactListDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ContactListDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const { return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    template<typename ContactListNameT = Aws::String>
    void SetContactListName(ContactListNameT&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::forward<ContactListNameT>(value); }
    template<typename ContactListNameT = Aws::String>
    ContactListDestination& WithContactListName(ContactListNameT&& value) { SetContactListName(std::forward<ContactListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline ContactListImportAction GetContactListImportAction() const { return m_contactListImportAction; }
    inline bool ContactListImportActionHasBeenSet() const { return m_contactListImportActionHasBeenSet; }
    inline void SetContactListImportAction(ContactListImportAction value) { m_contactListImportActionHasBeenSet = true; m_contactListImportAction = value; }
    inline ContactListDestination& WithContactListImportAction(ContactListImportAction value) { SetContactListImportAction(value); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    ContactListImportAction m_contactListImportAction{ContactListImportAction::NOT_SET};
    bool m_contactListImportActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
