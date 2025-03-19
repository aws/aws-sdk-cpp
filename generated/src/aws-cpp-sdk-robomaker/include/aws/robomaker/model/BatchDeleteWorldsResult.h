/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{
  class BatchDeleteWorldsResult
  {
  public:
    AWS_ROBOMAKER_API BatchDeleteWorldsResult() = default;
    AWS_ROBOMAKER_API BatchDeleteWorldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API BatchDeleteWorldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of unprocessed worlds associated with the call. These worlds were not
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedWorlds() const { return m_unprocessedWorlds; }
    template<typename UnprocessedWorldsT = Aws::Vector<Aws::String>>
    void SetUnprocessedWorlds(UnprocessedWorldsT&& value) { m_unprocessedWorldsHasBeenSet = true; m_unprocessedWorlds = std::forward<UnprocessedWorldsT>(value); }
    template<typename UnprocessedWorldsT = Aws::Vector<Aws::String>>
    BatchDeleteWorldsResult& WithUnprocessedWorlds(UnprocessedWorldsT&& value) { SetUnprocessedWorlds(std::forward<UnprocessedWorldsT>(value)); return *this;}
    template<typename UnprocessedWorldsT = Aws::String>
    BatchDeleteWorldsResult& AddUnprocessedWorlds(UnprocessedWorldsT&& value) { m_unprocessedWorldsHasBeenSet = true; m_unprocessedWorlds.emplace_back(std::forward<UnprocessedWorldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteWorldsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_unprocessedWorlds;
    bool m_unprocessedWorldsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
