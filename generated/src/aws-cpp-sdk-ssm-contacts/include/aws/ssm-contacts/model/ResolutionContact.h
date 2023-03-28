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
   * <p>Information about the engagement resolution steps. The resolution starts from
   * the first contact, which can be an escalation plan, then resolves to an on-call
   * rotation, and finally to a personal contact.</p> <p>The
   * <code>ResolutionContact</code> structure describes the information for each node
   * or step in that process. It contains information about different contact types,
   * such as the escalation, rotation, and personal contacts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ResolutionContact">AWS
   * API Reference</a></p>
   */
  class ResolutionContact
  {
  public:
    AWS_SSMCONTACTS_API ResolutionContact();
    AWS_SSMCONTACTS_API ResolutionContact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ResolutionContact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline ResolutionContact& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline ResolutionContact& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a contact in the engagement resolution
     * process. </p>
     */
    inline ResolutionContact& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline const ContactType& GetType() const{ return m_type; }

    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline void SetType(const ContactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline void SetType(ContactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline ResolutionContact& WithType(const ContactType& value) { SetType(value); return *this;}

    /**
     * <p>The type of contact for a resolution step.</p>
     */
    inline ResolutionContact& WithType(ContactType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The stage in the escalation plan that resolves to this contact.</p>
     */
    inline int GetStageIndex() const{ return m_stageIndex; }

    /**
     * <p>The stage in the escalation plan that resolves to this contact.</p>
     */
    inline bool StageIndexHasBeenSet() const { return m_stageIndexHasBeenSet; }

    /**
     * <p>The stage in the escalation plan that resolves to this contact.</p>
     */
    inline void SetStageIndex(int value) { m_stageIndexHasBeenSet = true; m_stageIndex = value; }

    /**
     * <p>The stage in the escalation plan that resolves to this contact.</p>
     */
    inline ResolutionContact& WithStageIndex(int value) { SetStageIndex(value); return *this;}

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    ContactType m_type;
    bool m_typeHasBeenSet = false;

    int m_stageIndex;
    bool m_stageIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
