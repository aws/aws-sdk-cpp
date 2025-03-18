/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/BatchGetViewError.h>
#include <aws/resource-explorer-2/model/View.h>
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
  class BatchGetViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult() = default;
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API BatchGetViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If any of the specified ARNs result in an error, then this structure
     * describes the error.</p>
     */
    inline const Aws::Vector<BatchGetViewError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetViewError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetViewError>>
    BatchGetViewResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetViewError>
    BatchGetViewResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure with a list of objects with details for each of the specified
     * views.</p>
     */
    inline const Aws::Vector<View>& GetViews() const { return m_views; }
    template<typename ViewsT = Aws::Vector<View>>
    void SetViews(ViewsT&& value) { m_viewsHasBeenSet = true; m_views = std::forward<ViewsT>(value); }
    template<typename ViewsT = Aws::Vector<View>>
    BatchGetViewResult& WithViews(ViewsT&& value) { SetViews(std::forward<ViewsT>(value)); return *this;}
    template<typename ViewsT = View>
    BatchGetViewResult& AddViews(ViewsT&& value) { m_viewsHasBeenSet = true; m_views.emplace_back(std::forward<ViewsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetViewError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<View> m_views;
    bool m_viewsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
