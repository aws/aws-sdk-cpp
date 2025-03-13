/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/SeverityLevel.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The list of severity levels returned by the <a>DescribeSeverityLevels</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevelsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSeverityLevelsResult
  {
  public:
    AWS_SUPPORT_API DescribeSeverityLevelsResult() = default;
    AWS_SUPPORT_API DescribeSeverityLevelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeSeverityLevelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const { return m_severityLevels; }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    void SetSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels = std::forward<SeverityLevelsT>(value); }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    DescribeSeverityLevelsResult& WithSeverityLevels(SeverityLevelsT&& value) { SetSeverityLevels(std::forward<SeverityLevelsT>(value)); return *this;}
    template<typename SeverityLevelsT = SeverityLevel>
    DescribeSeverityLevelsResult& AddSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels.emplace_back(std::forward<SeverityLevelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSeverityLevelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SeverityLevel> m_severityLevels;
    bool m_severityLevelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
