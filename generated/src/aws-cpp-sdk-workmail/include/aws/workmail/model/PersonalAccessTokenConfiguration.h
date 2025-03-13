/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/PersonalAccessTokenConfigurationStatus.h>
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
   * <p> Displays the Personal Access Token status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PersonalAccessTokenConfiguration">AWS
   * API Reference</a></p>
   */
  class PersonalAccessTokenConfiguration
  {
  public:
    AWS_WORKMAIL_API PersonalAccessTokenConfiguration() = default;
    AWS_WORKMAIL_API PersonalAccessTokenConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API PersonalAccessTokenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The status of the Personal Access Token allowed for the organization. </p>
     * <ul> <li> <p> <i>Active</i> - Mailbox users can login to the web application and
     * choose <i>Settings</i> to see the new <i>Personal Access Tokens</i> page to
     * create and delete the Personal Access Tokens. Mailbox users can use the Personal
     * Access Tokens to set up mailbox connection from desktop or mobile email
     * clients.</p> </li> <li> <p> <i>Inactive</i> - Personal Access Tokens are
     * disabled for your organization. Mailbox users can’t create, list, or delete
     * Personal Access Tokens and can’t use them to connect to their mailboxes from
     * desktop or mobile email clients.</p> </li> </ul>
     */
    inline PersonalAccessTokenConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PersonalAccessTokenConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PersonalAccessTokenConfiguration& WithStatus(PersonalAccessTokenConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The validity of the Personal Access Token status in days. </p>
     */
    inline int GetLifetimeInDays() const { return m_lifetimeInDays; }
    inline bool LifetimeInDaysHasBeenSet() const { return m_lifetimeInDaysHasBeenSet; }
    inline void SetLifetimeInDays(int value) { m_lifetimeInDaysHasBeenSet = true; m_lifetimeInDays = value; }
    inline PersonalAccessTokenConfiguration& WithLifetimeInDays(int value) { SetLifetimeInDays(value); return *this;}
    ///@}
  private:

    PersonalAccessTokenConfigurationStatus m_status{PersonalAccessTokenConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_lifetimeInDays{0};
    bool m_lifetimeInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
