/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class EnableAllFeaturesRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API EnableAllFeaturesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableAllFeatures"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
