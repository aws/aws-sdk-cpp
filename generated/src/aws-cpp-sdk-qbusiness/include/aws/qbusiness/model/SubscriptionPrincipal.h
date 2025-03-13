/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A user or group in the IAM Identity Center instance connected to the Amazon Q
   * Business application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SubscriptionPrincipal">AWS
   * API Reference</a></p>
   */
  class SubscriptionPrincipal
  {
  public:
    AWS_QBUSINESS_API SubscriptionPrincipal() = default;
    AWS_QBUSINESS_API SubscriptionPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SubscriptionPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a user in the IAM Identity Center instance connected to the
     * Amazon Q Business application.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    SubscriptionPrincipal& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a group in the IAM Identity Center instance connected to
     * the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    SubscriptionPrincipal& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
