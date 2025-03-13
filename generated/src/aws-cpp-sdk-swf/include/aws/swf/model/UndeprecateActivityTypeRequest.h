/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/ActivityType.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class UndeprecateActivityTypeRequest : public SWFRequest
  {
  public:
    AWS_SWF_API UndeprecateActivityTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UndeprecateActivityType"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain of the deprecated activity type.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UndeprecateActivityTypeRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity type to undeprecate.</p>
     */
    inline const ActivityType& GetActivityType() const { return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    template<typename ActivityTypeT = ActivityType>
    void SetActivityType(ActivityTypeT&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::forward<ActivityTypeT>(value); }
    template<typename ActivityTypeT = ActivityType>
    UndeprecateActivityTypeRequest& WithActivityType(ActivityTypeT&& value) { SetActivityType(std::forward<ActivityTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
