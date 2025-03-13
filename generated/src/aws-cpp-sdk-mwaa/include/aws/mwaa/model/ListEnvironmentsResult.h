/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_MWAA_API ListEnvironmentsResult() = default;
    AWS_MWAA_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of Amazon MWAA environments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironments() const { return m_environments; }
    template<typename EnvironmentsT = Aws::Vector<Aws::String>>
    void SetEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments = std::forward<EnvironmentsT>(value); }
    template<typename EnvironmentsT = Aws::Vector<Aws::String>>
    ListEnvironmentsResult& WithEnvironments(EnvironmentsT&& value) { SetEnvironments(std::forward<EnvironmentsT>(value)); return *this;}
    template<typename EnvironmentsT = Aws::String>
    ListEnvironmentsResult& AddEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments.emplace_back(std::forward<EnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves the next page of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_environments;
    bool m_environmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
