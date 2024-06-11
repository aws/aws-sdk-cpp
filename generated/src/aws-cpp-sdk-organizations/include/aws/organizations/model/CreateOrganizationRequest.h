﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class CreateOrganizationRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API CreateOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrganization"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the feature set supported by the new organization. Each feature set
     * supports different levels of functionality.</p> <ul> <li> <p>
     * <code>CONSOLIDATED_BILLING</code>: All member accounts have their bills
     * consolidated to and paid by the management account. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-cb-only">Consolidated
     * billing</a> in the <i>Organizations User Guide</i>.</p> <p> The consolidated
     * billing feature subset isn't available for organizations in the Amazon Web
     * Services GovCloud (US) Region.</p> </li> <li> <p> <code>ALL</code>: In addition
     * to all the features supported by the consolidated billing feature set, the
     * management account can also apply any policy type to any member account in the
     * organization. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#feature-set-all">All
     * features</a> in the <i>Organizations User Guide</i>.</p> </li> </ul>
     */
    inline const OrganizationFeatureSet& GetFeatureSet() const{ return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(const OrganizationFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline void SetFeatureSet(OrganizationFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }
    inline CreateOrganizationRequest& WithFeatureSet(const OrganizationFeatureSet& value) { SetFeatureSet(value); return *this;}
    inline CreateOrganizationRequest& WithFeatureSet(OrganizationFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}
    ///@}
  private:

    OrganizationFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
