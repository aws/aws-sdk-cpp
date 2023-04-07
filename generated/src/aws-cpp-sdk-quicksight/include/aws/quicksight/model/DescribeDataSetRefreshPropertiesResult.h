/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetRefreshProperties.h>
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
  class DescribeDataSetRefreshPropertiesResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult();
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDataSetRefreshPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDataSetRefreshPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDataSetRefreshPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeDataSetRefreshPropertiesResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The dataset refresh properties.</p>
     */
    inline const DataSetRefreshProperties& GetDataSetRefreshProperties() const{ return m_dataSetRefreshProperties; }

    /**
     * <p>The dataset refresh properties.</p>
     */
    inline void SetDataSetRefreshProperties(const DataSetRefreshProperties& value) { m_dataSetRefreshProperties = value; }

    /**
     * <p>The dataset refresh properties.</p>
     */
    inline void SetDataSetRefreshProperties(DataSetRefreshProperties&& value) { m_dataSetRefreshProperties = std::move(value); }

    /**
     * <p>The dataset refresh properties.</p>
     */
    inline DescribeDataSetRefreshPropertiesResult& WithDataSetRefreshProperties(const DataSetRefreshProperties& value) { SetDataSetRefreshProperties(value); return *this;}

    /**
     * <p>The dataset refresh properties.</p>
     */
    inline DescribeDataSetRefreshPropertiesResult& WithDataSetRefreshProperties(DataSetRefreshProperties&& value) { SetDataSetRefreshProperties(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    int m_status;

    DataSetRefreshProperties m_dataSetRefreshProperties;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
