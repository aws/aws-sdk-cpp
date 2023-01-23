/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class InitializeServiceRequest : public MgnRequest
  {
  public:
    AWS_MGN_API InitializeServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitializeService"; }

    AWS_MGN_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace mgn
} // namespace Aws
