/**
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
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult();
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline const CategoryProperties& GetCategoryProperties() const{ return m_categoryProperties; }

    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline void SetCategoryProperties(const CategoryProperties& value) { m_categoryProperties = value; }

    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline void SetCategoryProperties(CategoryProperties&& value) { m_categoryProperties = std::move(value); }

    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline CreateCallAnalyticsCategoryResult& WithCategoryProperties(const CategoryProperties& value) { SetCategoryProperties(value); return *this;}

    /**
     * <p>Provides you with the properties of your new category, including its
     * associated rules.</p>
     */
    inline CreateCallAnalyticsCategoryResult& WithCategoryProperties(CategoryProperties&& value) { SetCategoryProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCallAnalyticsCategoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCallAnalyticsCategoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCallAnalyticsCategoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CategoryProperties m_categoryProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
