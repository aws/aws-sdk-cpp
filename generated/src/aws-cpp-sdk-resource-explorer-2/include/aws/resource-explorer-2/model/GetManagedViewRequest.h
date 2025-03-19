/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class GetManagedViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetManagedViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetManagedView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the managed view.</p>
     */
    inline const Aws::String& GetManagedViewArn() const { return m_managedViewArn; }
    inline bool ManagedViewArnHasBeenSet() const { return m_managedViewArnHasBeenSet; }
    template<typename ManagedViewArnT = Aws::String>
    void SetManagedViewArn(ManagedViewArnT&& value) { m_managedViewArnHasBeenSet = true; m_managedViewArn = std::forward<ManagedViewArnT>(value); }
    template<typename ManagedViewArnT = Aws::String>
    GetManagedViewRequest& WithManagedViewArn(ManagedViewArnT&& value) { SetManagedViewArn(std::forward<ManagedViewArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedViewArn;
    bool m_managedViewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
