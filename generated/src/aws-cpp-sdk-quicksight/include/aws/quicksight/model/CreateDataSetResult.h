/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateDataSetResult
  {
  public:
    AWS_QUICKSIGHT_API CreateDataSetResult() = default;
    AWS_QUICKSIGHT_API CreateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateDataSetResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    CreateDataSetResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionArn() const { return m_ingestionArn; }
    template<typename IngestionArnT = Aws::String>
    void SetIngestionArn(IngestionArnT&& value) { m_ingestionArnHasBeenSet = true; m_ingestionArn = std::forward<IngestionArnT>(value); }
    template<typename IngestionArnT = Aws::String>
    CreateDataSetResult& WithIngestionArn(IngestionArnT&& value) { SetIngestionArn(std::forward<IngestionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionId() const { return m_ingestionId; }
    template<typename IngestionIdT = Aws::String>
    void SetIngestionId(IngestionIdT&& value) { m_ingestionIdHasBeenSet = true; m_ingestionId = std::forward<IngestionIdT>(value); }
    template<typename IngestionIdT = Aws::String>
    CreateDataSetResult& WithIngestionId(IngestionIdT&& value) { SetIngestionId(std::forward<IngestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateDataSetResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_ingestionArn;
    bool m_ingestionArnHasBeenSet = false;

    Aws::String m_ingestionId;
    bool m_ingestionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
