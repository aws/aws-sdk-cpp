﻿/**
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
  class UpdateQPersonalizationConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult() = default;
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The personalization mode that is used for the personalization
     * configuration.</p>
     */
    inline PersonalizationMode GetPersonalizationMode() const { return m_personalizationMode; }
    inline void SetPersonalizationMode(PersonalizationMode value) { m_personalizationModeHasBeenSet = true; m_personalizationMode = value; }
    inline UpdateQPersonalizationConfigurationResult& WithPersonalizationMode(PersonalizationMode value) { SetPersonalizationMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateQPersonalizationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateQPersonalizationConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
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
