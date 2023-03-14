/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/DimensionKeyDetail.h>
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
namespace PI
{
namespace Model
{
  class GetDimensionKeyDetailsResult
  {
  public:
    AWS_PI_API GetDimensionKeyDetailsResult();
    AWS_PI_API GetDimensionKeyDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetDimensionKeyDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline const Aws::Vector<DimensionKeyDetail>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline void SetDimensions(const Aws::Vector<DimensionKeyDetail>& value) { m_dimensions = value; }

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline void SetDimensions(Aws::Vector<DimensionKeyDetail>&& value) { m_dimensions = std::move(value); }

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline GetDimensionKeyDetailsResult& WithDimensions(const Aws::Vector<DimensionKeyDetail>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline GetDimensionKeyDetailsResult& WithDimensions(Aws::Vector<DimensionKeyDetail>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline GetDimensionKeyDetailsResult& AddDimensions(const DimensionKeyDetail& value) { m_dimensions.push_back(value); return *this; }

    /**
     * <p>The details for the requested dimensions.</p>
     */
    inline GetDimensionKeyDetailsResult& AddDimensions(DimensionKeyDetail&& value) { m_dimensions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDimensionKeyDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDimensionKeyDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDimensionKeyDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DimensionKeyDetail> m_dimensions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
