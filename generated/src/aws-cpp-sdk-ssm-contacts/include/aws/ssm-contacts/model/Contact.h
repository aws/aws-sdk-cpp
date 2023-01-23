/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ContactType.h>
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
   * <p>A personal contact or escalation plan that Incident Manager engages during an
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Contact">AWS
   * API Reference</a></p>
   */
  class Contact
  {
  public:
    AWS_SSMCONTACTS_API Contact();
    AWS_SSMCONTACTS_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline Contact& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline Contact& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline Contact& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline Contact& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline Contact& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The unique and identifiable alias of the contact or escalation plan.</p>
     */
    inline Contact& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline Contact& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline Contact& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The full name of the contact or escalation plan.</p>
     */
    inline Contact& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline const ContactType& GetType() const{ return m_type; }

    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline void SetType(const ContactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline void SetType(ContactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline Contact& WithType(const ContactType& value) { SetType(value); return *this;}

    /**
     * <p>Refers to the type of contact. A single contact is type <code>PERSONAL</code>
     * and an escalation plan is type <code>ESCALATION</code>.</p>
     */
    inline Contact& WithType(ContactType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ContactType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
