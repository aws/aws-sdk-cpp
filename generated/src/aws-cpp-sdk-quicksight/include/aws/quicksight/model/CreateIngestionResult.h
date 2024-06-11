/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IngestionStatus.h>
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
  class CreateIngestionResult
  {
  public:
    AWS_QUICKSIGHT_API CreateIngestionResult();
    AWS_QUICKSIGHT_API CreateIngestionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateIngestionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateIngestionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateIngestionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateIngestionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the ingestion.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }
    inline void SetIngestionId(const Aws::String& value) { m_ingestionId = value; }
    inline void SetIngestionId(Aws::String&& value) { m_ingestionId = std::move(value); }
    inline void SetIngestionId(const char* value) { m_ingestionId.assign(value); }
    inline CreateIngestionResult& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}
    inline CreateIngestionResult& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}
    inline CreateIngestionResult& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion status.</p>
     */
    inline const IngestionStatus& GetIngestionStatus() const{ return m_ingestionStatus; }
    inline void SetIngestionStatus(const IngestionStatus& value) { m_ingestionStatus = value; }
    inline void SetIngestionStatus(IngestionStatus&& value) { m_ingestionStatus = std::move(value); }
    inline CreateIngestionResult& WithIngestionStatus(const IngestionStatus& value) { SetIngestionStatus(value); return *this;}
    inline CreateIngestionResult& WithIngestionStatus(IngestionStatus&& value) { SetIngestionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIngestionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIngestionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIngestionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateIngestionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_ingestionId;

    IngestionStatus m_ingestionStatus;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
