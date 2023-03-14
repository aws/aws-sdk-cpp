/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DatasetDescription.h>
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
namespace Rekognition
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_REKOGNITION_API DescribeDatasetResult();
    AWS_REKOGNITION_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The description for the dataset. </p>
     */
    inline const DatasetDescription& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p> The description for the dataset. </p>
     */
    inline void SetDatasetDescription(const DatasetDescription& value) { m_datasetDescription = value; }

    /**
     * <p> The description for the dataset. </p>
     */
    inline void SetDatasetDescription(DatasetDescription&& value) { m_datasetDescription = std::move(value); }

    /**
     * <p> The description for the dataset. </p>
     */
    inline DescribeDatasetResult& WithDatasetDescription(const DatasetDescription& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p> The description for the dataset. </p>
     */
    inline DescribeDatasetResult& WithDatasetDescription(DatasetDescription&& value) { SetDatasetDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetDescription m_datasetDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
