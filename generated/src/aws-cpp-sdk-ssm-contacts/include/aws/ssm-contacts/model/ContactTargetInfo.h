/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
   * <p>The contact that Incident Manager is engaging during an
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ContactTargetInfo">AWS
   * API Reference</a></p>
   */
  class ContactTargetInfo
  {
  public:
    AWS_SSMCONTACTS_API ContactTargetInfo();
    AWS_SSMCONTACTS_API ContactTargetInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ContactTargetInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline ContactTargetInfo& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline ContactTargetInfo& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline ContactTargetInfo& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>A Boolean value determining if the contact's acknowledgement stops the
     * progress of stages in the plan.</p>
     */
    inline bool GetIsEssential() const{ return m_isEssential; }

    /**
     * <p>A Boolean value determining if the contact's acknowledgement stops the
     * progress of stages in the plan.</p>
     */
    inline bool IsEssentialHasBeenSet() const { return m_isEssentialHasBeenSet; }

    /**
     * <p>A Boolean value determining if the contact's acknowledgement stops the
     * progress of stages in the plan.</p>
     */
    inline void SetIsEssential(bool value) { m_isEssentialHasBeenSet = true; m_isEssential = value; }

    /**
     * <p>A Boolean value determining if the contact's acknowledgement stops the
     * progress of stages in the plan.</p>
     */
    inline ContactTargetInfo& WithIsEssential(bool value) { SetIsEssential(value); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    bool m_isEssential;
    bool m_isEssentialHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
