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
  class CreateAdapterVersionResult
  {
  public:
    AWS_TEXTRACT_API CreateAdapterVersionResult();
    AWS_TEXTRACT_API CreateAdapterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API CreateAdapterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterId = value; }

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterId = std::move(value); }

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterId.assign(value); }

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing the unique ID for the adapter that has received a new
     * version.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline const Aws::String& GetAdapterVersion() const{ return m_adapterVersion; }

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline void SetAdapterVersion(const Aws::String& value) { m_adapterVersion = value; }

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline void SetAdapterVersion(Aws::String&& value) { m_adapterVersion = std::move(value); }

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline void SetAdapterVersion(const char* value) { m_adapterVersion.assign(value); }

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterVersion(const Aws::String& value) { SetAdapterVersion(value); return *this;}

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterVersion(Aws::String&& value) { SetAdapterVersion(std::move(value)); return *this;}

    /**
     * <p>A string describing the new version of the adapter.</p>
     */
    inline CreateAdapterVersionResult& WithAdapterVersion(const char* value) { SetAdapterVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAdapterVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAdapterVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAdapterVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_adapterId;

    Aws::String m_adapterVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
