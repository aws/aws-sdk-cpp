/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CustomerProjectsContext.h>
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
   * <p>Represents the payload of an Engagement context. The structure of this
   * payload varies based on the context type specified in the
   * EngagementContextDetails. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementContextPayload">AWS
   * API Reference</a></p>
   */
  class EngagementContextPayload
  {
  public:
    AWS_PARTNERCENTRALSELLING_API EngagementContextPayload();
    AWS_PARTNERCENTRALSELLING_API EngagementContextPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API EngagementContextPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains detailed information about a customer project when the context type
     * is "CustomerProject". This field is present only when the Type in
     * EngagementContextDetails is set to "CustomerProject". </p>
     */
    inline const CustomerProjectsContext& GetCustomerProject() const{ return m_customerProject; }
    inline bool CustomerProjectHasBeenSet() const { return m_customerProjectHasBeenSet; }
    inline void SetCustomerProject(const CustomerProjectsContext& value) { m_customerProjectHasBeenSet = true; m_customerProject = value; }
    inline void SetCustomerProject(CustomerProjectsContext&& value) { m_customerProjectHasBeenSet = true; m_customerProject = std::move(value); }
    inline EngagementContextPayload& WithCustomerProject(const CustomerProjectsContext& value) { SetCustomerProject(value); return *this;}
    inline EngagementContextPayload& WithCustomerProject(CustomerProjectsContext&& value) { SetCustomerProject(std::move(value)); return *this;}
    ///@}
  private:

    CustomerProjectsContext m_customerProject;
    bool m_customerProjectHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
