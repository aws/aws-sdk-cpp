﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CategoryProperties.h>
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
namespace TranscribeService
{
namespace Model
{
  class CreateCallAnalyticsCategoryResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult() = default;
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline const CategoryProperties& GetCategoryProperties() const { return m_categoryProperties; }
    template<typename CategoryPropertiesT = CategoryProperties>
    void SetCategoryProperties(CategoryPropertiesT&& value) { m_categoryPropertiesHasBeenSet = true; m_categoryProperties = std::forward<CategoryPropertiesT>(value); }
    template<typename CategoryPropertiesT = CategoryProperties>
    CreateCallAnalyticsCategoryResult& WithCategoryProperties(CategoryPropertiesT&& value) { SetCategoryProperties(std::forward<CategoryPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCallAnalyticsCategoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CategoryProperties m_categoryProperties;
    bool m_categoryPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
