/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/AccessStatus.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Orgs Service trust for User Notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationsAccessForOrganization">AWS
   * API Reference</a></p>
   */
  class NotificationsAccessForOrganization
  {
  public:
    AWS_NOTIFICATIONS_API NotificationsAccessForOrganization() = default;
    AWS_NOTIFICATIONS_API NotificationsAccessForOrganization(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationsAccessForOrganization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Access Status for the Orgs Service.</p>
     */
    inline AccessStatus GetAccessStatus() const { return m_accessStatus; }
    inline bool AccessStatusHasBeenSet() const { return m_accessStatusHasBeenSet; }
    inline void SetAccessStatus(AccessStatus value) { m_accessStatusHasBeenSet = true; m_accessStatus = value; }
    inline NotificationsAccessForOrganization& WithAccessStatus(AccessStatus value) { SetAccessStatus(value); return *this;}
    ///@}
  private:

    AccessStatus m_accessStatus{AccessStatus::NOT_SET};
    bool m_accessStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
