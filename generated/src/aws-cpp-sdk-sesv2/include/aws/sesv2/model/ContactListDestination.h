/**
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
    AWS_SESV2_API ContactListDestination();
    AWS_SESV2_API ContactListDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ContactListDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline ContactListDestination& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline ContactListDestination& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline ContactListDestination& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline const ContactListImportAction& GetContactListImportAction() const{ return m_contactListImportAction; }

    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline bool ContactListImportActionHasBeenSet() const { return m_contactListImportActionHasBeenSet; }

    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline void SetContactListImportAction(const ContactListImportAction& value) { m_contactListImportActionHasBeenSet = true; m_contactListImportAction = value; }

    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline void SetContactListImportAction(ContactListImportAction&& value) { m_contactListImportActionHasBeenSet = true; m_contactListImportAction = std::move(value); }

    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline ContactListDestination& WithContactListImportAction(const ContactListImportAction& value) { SetContactListImportAction(value); return *this;}

    /**
     * <p>&gt;The type of action to perform on the addresses. The following are the
     * possible values:</p> <ul> <li> <p>PUT: add the addresses to the contact list. If
     * the record already exists, it will override it with the new value.</p> </li>
     * <li> <p>DELETE: remove the addresses from the contact list.</p> </li> </ul>
     */
    inline ContactListDestination& WithContactListImportAction(ContactListImportAction&& value) { SetContactListImportAction(std::move(value)); return *this;}

  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    ContactListImportAction m_contactListImportAction;
    bool m_contactListImportActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
