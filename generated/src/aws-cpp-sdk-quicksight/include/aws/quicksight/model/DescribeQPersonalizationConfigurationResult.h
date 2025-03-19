/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PersonalizationMode.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeQPersonalizationConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeQPersonalizationConfigurationResult() = default;
    AWS_QUICKSIGHT_API DescribeQPersonalizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeQPersonalizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A value that indicates whether personalization is enabled or not.</p>
     */
    inline PersonalizationMode GetPersonalizationMode() const { return m_personalizationMode; }
    inline void SetPersonalizationMode(PersonalizationMode value) { m_personalizationModeHasBeenSet = true; m_personalizationMode = value; }
    inline DescribeQPersonalizationConfigurationResult& WithPersonalizationMode(PersonalizationMode value) { SetPersonalizationMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQPersonalizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeQPersonalizationConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    PersonalizationMode m_personalizationMode{PersonalizationMode::NOT_SET};
    bool m_personalizationModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
