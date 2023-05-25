/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetGroup.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeDatasetGroupResult
  {
  public:
    AWS_PERSONALIZE_API DescribeDatasetGroupResult();
    AWS_PERSONALIZE_API DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline const DatasetGroup& GetDatasetGroup() const{ return m_datasetGroup; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(const DatasetGroup& value) { m_datasetGroup = value; }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline void SetDatasetGroup(DatasetGroup&& value) { m_datasetGroup = std::move(value); }

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(const DatasetGroup& value) { SetDatasetGroup(value); return *this;}

    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroup(DatasetGroup&& value) { SetDatasetGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatasetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatasetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatasetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetGroup m_datasetGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
