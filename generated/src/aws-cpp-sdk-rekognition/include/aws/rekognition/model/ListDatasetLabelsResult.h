/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetLabelDescription.h>
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
  class ListDatasetLabelsResult
  {
  public:
    AWS_REKOGNITION_API ListDatasetLabelsResult() = default;
    AWS_REKOGNITION_API ListDatasetLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListDatasetLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the labels in the dataset. </p>
     */
    inline const Aws::Vector<DatasetLabelDescription>& GetDatasetLabelDescriptions() const { return m_datasetLabelDescriptions; }
    template<typename DatasetLabelDescriptionsT = Aws::Vector<DatasetLabelDescription>>
    void SetDatasetLabelDescriptions(DatasetLabelDescriptionsT&& value) { m_datasetLabelDescriptionsHasBeenSet = true; m_datasetLabelDescriptions = std::forward<DatasetLabelDescriptionsT>(value); }
    template<typename DatasetLabelDescriptionsT = Aws::Vector<DatasetLabelDescription>>
    ListDatasetLabelsResult& WithDatasetLabelDescriptions(DatasetLabelDescriptionsT&& value) { SetDatasetLabelDescriptions(std::forward<DatasetLabelDescriptionsT>(value)); return *this;}
    template<typename DatasetLabelDescriptionsT = DatasetLabelDescription>
    ListDatasetLabelsResult& AddDatasetLabelDescriptions(DatasetLabelDescriptionsT&& value) { m_datasetLabelDescriptionsHasBeenSet = true; m_datasetLabelDescriptions.emplace_back(std::forward<DatasetLabelDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetLabelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetLabelDescription> m_datasetLabelDescriptions;
    bool m_datasetLabelDescriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
