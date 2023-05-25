/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DescribeEmergencyContactSettingsRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DescribeEmergencyContactSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEmergencyContactSettings"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace Shield
} // namespace Aws
