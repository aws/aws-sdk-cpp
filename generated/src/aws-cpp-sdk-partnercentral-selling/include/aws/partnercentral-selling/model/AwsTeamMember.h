/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsMemberBusinessTitle.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Represents an Amazon Web Services team member for the engagement. This
   * structure includes details such as name, email, and business
   * title.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsTeamMember">AWS
   * API Reference</a></p>
   */
  class AwsTeamMember
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsTeamMember();
    AWS_PARTNERCENTRALSELLING_API AwsTeamMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsTeamMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon Web Services team member's business title and indicates
     * their organizational role.</p>
     */
    inline const AwsMemberBusinessTitle& GetBusinessTitle() const{ return m_businessTitle; }
    inline bool BusinessTitleHasBeenSet() const { return m_businessTitleHasBeenSet; }
    inline void SetBusinessTitle(const AwsMemberBusinessTitle& value) { m_businessTitleHasBeenSet = true; m_businessTitle = value; }
    inline void SetBusinessTitle(AwsMemberBusinessTitle&& value) { m_businessTitleHasBeenSet = true; m_businessTitle = std::move(value); }
    inline AwsTeamMember& WithBusinessTitle(const AwsMemberBusinessTitle& value) { SetBusinessTitle(value); return *this;}
    inline AwsTeamMember& WithBusinessTitle(AwsMemberBusinessTitle&& value) { SetBusinessTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Web Services team member's email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline AwsTeamMember& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline AwsTeamMember& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline AwsTeamMember& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Web Services team member's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline AwsTeamMember& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline AwsTeamMember& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline AwsTeamMember& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Web Services team member's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline AwsTeamMember& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline AwsTeamMember& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline AwsTeamMember& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}
  private:

    AwsMemberBusinessTitle m_businessTitle;
    bool m_businessTitleHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
