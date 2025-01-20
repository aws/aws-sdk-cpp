﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementCustomer.h>
#include <aws/partnercentral-selling/model/EngagementCustomerProjectDetails.h>
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
   * <p>The CustomerProjects structure in Engagements offers a flexible framework for
   * managing customer-project relationships. It supports multiple customers per
   * Engagement and multiple projects per customer, while also allowing for customers
   * without projects and projects without specific customers. </p> <p>All Engagement
   * members have full visibility of customers and their associated projects,
   * enabling the capture of relevant context even when project details are not fully
   * defined. This structure also facilitates targeted invitations, allowing partners
   * to focus on specific customers and their business problems when sending
   * Engagement invitations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerProjectsContext">AWS
   * API Reference</a></p>
   */
  class CustomerProjectsContext
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext();
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const EngagementCustomer& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const EngagementCustomer& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(EngagementCustomer&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline CustomerProjectsContext& WithCustomer(const EngagementCustomer& value) { SetCustomer(value); return *this;}
    inline CustomerProjectsContext& WithCustomer(EngagementCustomer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the customer project associated with the Engagement.</p>
     */
    inline const EngagementCustomerProjectDetails& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const EngagementCustomerProjectDetails& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(EngagementCustomerProjectDetails&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline CustomerProjectsContext& WithProject(const EngagementCustomerProjectDetails& value) { SetProject(value); return *this;}
    inline CustomerProjectsContext& WithProject(EngagementCustomerProjectDetails&& value) { SetProject(std::move(value)); return *this;}
    ///@}
  private:

    EngagementCustomer m_customer;
    bool m_customerHasBeenSet = false;

    EngagementCustomerProjectDetails m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
