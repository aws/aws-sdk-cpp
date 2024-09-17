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
  class DeleteActivityTypeRequest : public SWFRequest
  {
  public:
    AWS_SWF_API DeleteActivityTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActivityType"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain in which the activity type is registered.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DeleteActivityTypeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DeleteActivityTypeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DeleteActivityTypeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity type to delete.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }
    inline DeleteActivityTypeRequest& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}
    inline DeleteActivityTypeRequest& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}
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
