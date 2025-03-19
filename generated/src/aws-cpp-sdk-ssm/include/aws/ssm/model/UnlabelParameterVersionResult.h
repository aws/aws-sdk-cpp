/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{
  class UnlabelParameterVersionResult
  {
  public:
    AWS_SSM_API UnlabelParameterVersionResult() = default;
    AWS_SSM_API UnlabelParameterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UnlabelParameterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all labels deleted from the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovedLabels() const { return m_removedLabels; }
    template<typename RemovedLabelsT = Aws::Vector<Aws::String>>
    void SetRemovedLabels(RemovedLabelsT&& value) { m_removedLabelsHasBeenSet = true; m_removedLabels = std::forward<RemovedLabelsT>(value); }
    template<typename RemovedLabelsT = Aws::Vector<Aws::String>>
    UnlabelParameterVersionResult& WithRemovedLabels(RemovedLabelsT&& value) { SetRemovedLabels(std::forward<RemovedLabelsT>(value)); return *this;}
    template<typename RemovedLabelsT = Aws::String>
    UnlabelParameterVersionResult& AddRemovedLabels(RemovedLabelsT&& value) { m_removedLabelsHasBeenSet = true; m_removedLabels.emplace_back(std::forward<RemovedLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that aren't attached to the given parameter version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const { return m_invalidLabels; }
    template<typename InvalidLabelsT = Aws::Vector<Aws::String>>
    void SetInvalidLabels(InvalidLabelsT&& value) { m_invalidLabelsHasBeenSet = true; m_invalidLabels = std::forward<InvalidLabelsT>(value); }
    template<typename InvalidLabelsT = Aws::Vector<Aws::String>>
    UnlabelParameterVersionResult& WithInvalidLabels(InvalidLabelsT&& value) { SetInvalidLabels(std::forward<InvalidLabelsT>(value)); return *this;}
    template<typename InvalidLabelsT = Aws::String>
    UnlabelParameterVersionResult& AddInvalidLabels(InvalidLabelsT&& value) { m_invalidLabelsHasBeenSet = true; m_invalidLabels.emplace_back(std::forward<InvalidLabelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UnlabelParameterVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_removedLabels;
    bool m_removedLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_invalidLabels;
    bool m_invalidLabelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
