/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceExplorer2
{
namespace Model
{
  class AssociateDefaultViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult() = default;
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline const Aws::String& GetViewArn() const { return m_viewArn; }
    template<typename ViewArnT = Aws::String>
    void SetViewArn(ViewArnT&& value) { m_viewArnHasBeenSet = true; m_viewArn = std::forward<ViewArnT>(value); }
    template<typename ViewArnT = Aws::String>
    AssociateDefaultViewResult& WithViewArn(ViewArnT&& value) { SetViewArn(std::forward<ViewArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateDefaultViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_viewArn;
    bool m_viewArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
