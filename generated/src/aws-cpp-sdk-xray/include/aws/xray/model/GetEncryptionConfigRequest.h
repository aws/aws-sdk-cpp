/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetEncryptionConfigRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetEncryptionConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEncryptionConfig"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace XRay
} // namespace Aws
