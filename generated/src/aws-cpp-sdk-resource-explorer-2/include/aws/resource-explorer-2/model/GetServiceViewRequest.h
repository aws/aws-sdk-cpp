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
  class GetServiceViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetServiceViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service view to retrieve details
     * for.</p>
     */
    inline const Aws::String& GetServiceViewArn() const { return m_serviceViewArn; }
    inline bool ServiceViewArnHasBeenSet() const { return m_serviceViewArnHasBeenSet; }
    template<typename ServiceViewArnT = Aws::String>
    void SetServiceViewArn(ServiceViewArnT&& value) { m_serviceViewArnHasBeenSet = true; m_serviceViewArn = std::forward<ServiceViewArnT>(value); }
    template<typename ServiceViewArnT = Aws::String>
    GetServiceViewRequest& WithServiceViewArn(ServiceViewArnT&& value) { SetServiceViewArn(std::forward<ServiceViewArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceViewArn;
    bool m_serviceViewArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
