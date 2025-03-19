/**
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
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext() = default;
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API CustomerProjectsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const EngagementCustomer& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = EngagementCustomer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = EngagementCustomer>
    CustomerProjectsContext& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the customer project associated with the Engagement.</p>
     */
    inline const EngagementCustomerProjectDetails& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = EngagementCustomerProjectDetails>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = EngagementCustomerProjectDetails>
    CustomerProjectsContext& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
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
