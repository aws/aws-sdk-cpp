/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API BatchGetViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetViewArns() const { return m_viewArns; }
    inline bool ViewArnsHasBeenSet() const { return m_viewArnsHasBeenSet; }
    template<typename ViewArnsT = Aws::Vector<Aws::String>>
    void SetViewArns(ViewArnsT&& value) { m_viewArnsHasBeenSet = true; m_viewArns = std::forward<ViewArnsT>(value); }
    template<typename ViewArnsT = Aws::Vector<Aws::String>>
    BatchGetViewRequest& WithViewArns(ViewArnsT&& value) { SetViewArns(std::forward<ViewArnsT>(value)); return *this;}
    template<typename ViewArnsT = Aws::String>
    BatchGetViewRequest& AddViewArns(ViewArnsT&& value) { m_viewArnsHasBeenSet = true; m_viewArns.emplace_back(std::forward<ViewArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_viewArns;
    bool m_viewArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
