/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AutoSubscriptionStatus.h>
#include <aws/qbusiness/model/SubscriptionType.h>
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
   * <p>Subscription configuration information for an Amazon Q Business application
   * using IAM identity federation for user management. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AutoSubscriptionConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoSubscriptionConfiguration
  {
  public:
    AWS_QBUSINESS_API AutoSubscriptionConfiguration() = default;
    AWS_QBUSINESS_API AutoSubscriptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AutoSubscriptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether automatic subscriptions are enabled for an Amazon Q
     * Business application using IAM identity federation for user management.</p>
     */
    inline AutoSubscriptionStatus GetAutoSubscribe() const { return m_autoSubscribe; }
    inline bool AutoSubscribeHasBeenSet() const { return m_autoSubscribeHasBeenSet; }
    inline void SetAutoSubscribe(AutoSubscriptionStatus value) { m_autoSubscribeHasBeenSet = true; m_autoSubscribe = value; }
    inline AutoSubscriptionConfiguration& WithAutoSubscribe(AutoSubscriptionStatus value) { SetAutoSubscribe(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the default subscription type assigned to an Amazon Q Business
     * application using IAM identity federation for user management. If the value for
     * <code>autoSubscribe</code> is set to <code>ENABLED</code> you must select a
     * value for this field.</p>
     */
    inline SubscriptionType GetDefaultSubscriptionType() const { return m_defaultSubscriptionType; }
    inline bool DefaultSubscriptionTypeHasBeenSet() const { return m_defaultSubscriptionTypeHasBeenSet; }
    inline void SetDefaultSubscriptionType(SubscriptionType value) { m_defaultSubscriptionTypeHasBeenSet = true; m_defaultSubscriptionType = value; }
    inline AutoSubscriptionConfiguration& WithDefaultSubscriptionType(SubscriptionType value) { SetDefaultSubscriptionType(value); return *this;}
    ///@}
  private:

    AutoSubscriptionStatus m_autoSubscribe{AutoSubscriptionStatus::NOT_SET};
    bool m_autoSubscribeHasBeenSet = false;

    SubscriptionType m_defaultSubscriptionType{SubscriptionType::NOT_SET};
    bool m_defaultSubscriptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
