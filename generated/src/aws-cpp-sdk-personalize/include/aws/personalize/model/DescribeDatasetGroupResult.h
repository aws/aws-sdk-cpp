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
    AWS_PERSONALIZE_API DescribeDatasetGroupResult() = default;
    AWS_PERSONALIZE_API DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A listing of the dataset group's properties.</p>
     */
    inline const DatasetGroup& GetDatasetGroup() const { return m_datasetGroup; }
    template<typename DatasetGroupT = DatasetGroup>
    void SetDatasetGroup(DatasetGroupT&& value) { m_datasetGroupHasBeenSet = true; m_datasetGroup = std::forward<DatasetGroupT>(value); }
    template<typename DatasetGroupT = DatasetGroup>
    DescribeDatasetGroupResult& WithDatasetGroup(DatasetGroupT&& value) { SetDatasetGroup(std::forward<DatasetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetGroup m_datasetGroup;
    bool m_datasetGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
