/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/SolutionVersion.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeSolutionVersionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeSolutionVersionResult() = default;
    AWS_PERSONALIZE_API DescribeSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The solution version.</p>
     */
    inline const SolutionVersion& GetSolutionVersion() const { return m_solutionVersion; }
    template<typename SolutionVersionT = SolutionVersion>
    void SetSolutionVersion(SolutionVersionT&& value) { m_solutionVersionHasBeenSet = true; m_solutionVersion = std::forward<SolutionVersionT>(value); }
    template<typename SolutionVersionT = SolutionVersion>
    DescribeSolutionVersionResult& WithSolutionVersion(SolutionVersionT&& value) { SetSolutionVersion(std::forward<SolutionVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSolutionVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SolutionVersion m_solutionVersion;
    bool m_solutionVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
