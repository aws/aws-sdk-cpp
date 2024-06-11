/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccountStatus.h>
#include <aws/organizations/model/AccountJoinedMethod.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Web Services account that is a member of
   * an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Account">AWS
   * API Reference</a></p>
   */
  class Account
  {
  public:
    AWS_ORGANIZATIONS_API Account();
    AWS_ORGANIZATIONS_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Account& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Account& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Account& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Account& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Account& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Account& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the Amazon Web Services account.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter
     * is a string of characters that represents a standard internet email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline Account& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline Account& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline Account& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Account& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Account& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Account& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the account in the organization.</p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AccountStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AccountStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Account& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}
    inline Account& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline const AccountJoinedMethod& GetJoinedMethod() const{ return m_joinedMethod; }
    inline bool JoinedMethodHasBeenSet() const { return m_joinedMethodHasBeenSet; }
    inline void SetJoinedMethod(const AccountJoinedMethod& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }
    inline void SetJoinedMethod(AccountJoinedMethod&& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = std::move(value); }
    inline Account& WithJoinedMethod(const AccountJoinedMethod& value) { SetJoinedMethod(value); return *this;}
    inline Account& WithJoinedMethod(AccountJoinedMethod&& value) { SetJoinedMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const{ return m_joinedTimestamp; }
    inline bool JoinedTimestampHasBeenSet() const { return m_joinedTimestampHasBeenSet; }
    inline void SetJoinedTimestamp(const Aws::Utils::DateTime& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = value; }
    inline void SetJoinedTimestamp(Aws::Utils::DateTime&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = std::move(value); }
    inline Account& WithJoinedTimestamp(const Aws::Utils::DateTime& value) { SetJoinedTimestamp(value); return *this;}
    inline Account& WithJoinedTimestamp(Aws::Utils::DateTime&& value) { SetJoinedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountStatus m_status;
    bool m_statusHasBeenSet = false;

    AccountJoinedMethod m_joinedMethod;
    bool m_joinedMethodHasBeenSet = false;

    Aws::Utils::DateTime m_joinedTimestamp;
    bool m_joinedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
