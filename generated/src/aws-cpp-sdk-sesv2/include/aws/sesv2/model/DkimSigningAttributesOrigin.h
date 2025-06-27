/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class DkimSigningAttributesOrigin
  {
    NOT_SET,
    AWS_SES,
    EXTERNAL,
    AWS_SES_AF_SOUTH_1,
    AWS_SES_EU_NORTH_1,
    AWS_SES_AP_SOUTH_1,
    AWS_SES_EU_WEST_3,
    AWS_SES_EU_WEST_2,
    AWS_SES_EU_SOUTH_1,
    AWS_SES_EU_WEST_1,
    AWS_SES_AP_NORTHEAST_3,
    AWS_SES_AP_NORTHEAST_2,
    AWS_SES_ME_SOUTH_1,
    AWS_SES_AP_NORTHEAST_1,
    AWS_SES_IL_CENTRAL_1,
    AWS_SES_SA_EAST_1,
    AWS_SES_CA_CENTRAL_1,
    AWS_SES_AP_SOUTHEAST_1,
    AWS_SES_AP_SOUTHEAST_2,
    AWS_SES_AP_SOUTHEAST_3,
    AWS_SES_EU_CENTRAL_1,
    AWS_SES_US_EAST_1,
    AWS_SES_US_EAST_2,
    AWS_SES_US_WEST_1,
    AWS_SES_US_WEST_2,
    AWS_SES_ME_CENTRAL_1,
    AWS_SES_AP_SOUTH_2,
    AWS_SES_EU_CENTRAL_2
  };

namespace DkimSigningAttributesOriginMapper
{
AWS_SESV2_API DkimSigningAttributesOrigin GetDkimSigningAttributesOriginForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForDkimSigningAttributesOrigin(DkimSigningAttributesOrigin value);
} // namespace DkimSigningAttributesOriginMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
