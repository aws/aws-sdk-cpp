/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{
  class CreateAdapterResult
  {
  public:
    AWS_TEXTRACT_API CreateAdapterResult();
    AWS_TEXTRACT_API CreateAdapterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API CreateAdapterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterId = value; }

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterId = std::move(value); }

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterId.assign(value); }

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline CreateAdapterResult& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline CreateAdapterResult& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing the unique ID for the adapter that has been created.</p>
     */
    inline CreateAdapterResult& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAdapterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAdapterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAdapterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_adapterId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
