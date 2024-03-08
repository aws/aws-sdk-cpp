/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class DisassociateDefaultViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API DisassociateDefaultViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDefaultView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
