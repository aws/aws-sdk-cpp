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
    AWS_REKOGNITION_API DescribeDatasetResult() = default;
    AWS_REKOGNITION_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The description for the dataset. </p>
     */
    inline const DatasetDescription& GetDatasetDescription() const { return m_datasetDescription; }
    template<typename DatasetDescriptionT = DatasetDescription>
    void SetDatasetDescription(DatasetDescriptionT&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::forward<DatasetDescriptionT>(value); }
    template<typename DatasetDescriptionT = DatasetDescription>
    DescribeDatasetResult& WithDatasetDescription(DatasetDescriptionT&& value) { SetDatasetDescription(std::forward<DatasetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetDescription m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
