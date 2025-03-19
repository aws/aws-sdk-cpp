/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
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
namespace neptunedata
{
namespace Model
{
  class ListMLModelTransformJobsResult
  {
  public:
    AWS_NEPTUNEDATA_API ListMLModelTransformJobsResult() = default;
    AWS_NEPTUNEDATA_API ListMLModelTransformJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ListMLModelTransformJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A page from the list of model transform IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
    template<typename IdsT = Aws::Vector<Aws::String>>
    void SetIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids = std::forward<IdsT>(value); }
    template<typename IdsT = Aws::Vector<Aws::String>>
    ListMLModelTransformJobsResult& WithIds(IdsT&& value) { SetIds(std::forward<IdsT>(value)); return *this;}
    template<typename IdsT = Aws::String>
    ListMLModelTransformJobsResult& AddIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids.emplace_back(std::forward<IdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMLModelTransformJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
