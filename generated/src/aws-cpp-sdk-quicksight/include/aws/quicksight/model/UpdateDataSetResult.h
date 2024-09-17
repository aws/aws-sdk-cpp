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
  class UpdateDataSetResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDataSetResult();
    AWS_QUICKSIGHT_API UpdateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateDataSetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateDataSetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }
    inline UpdateDataSetResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline UpdateDataSetResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionArn() const{ return m_ingestionArn; }
    inline void SetIngestionArn(const Aws::String& value) { m_ingestionArn = value; }
    inline void SetIngestionArn(Aws::String&& value) { m_ingestionArn = std::move(value); }
    inline void SetIngestionArn(const char* value) { m_ingestionArn.assign(value); }
    inline UpdateDataSetResult& WithIngestionArn(const Aws::String& value) { SetIngestionArn(value); return *this;}
    inline UpdateDataSetResult& WithIngestionArn(Aws::String&& value) { SetIngestionArn(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithIngestionArn(const char* value) { SetIngestionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ingestion, which is triggered as a result of dataset creation
     * if the import mode is SPICE.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }
    inline void SetIngestionId(const Aws::String& value) { m_ingestionId = value; }
    inline void SetIngestionId(Aws::String&& value) { m_ingestionId = std::move(value); }
    inline void SetIngestionId(const char* value) { m_ingestionId.assign(value); }
    inline UpdateDataSetResult& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}
    inline UpdateDataSetResult& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateDataSetResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_dataSetId;

    Aws::String m_ingestionArn;

    Aws::String m_ingestionId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
