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
  class CancelIngestionResult
  {
  public:
    AWS_QUICKSIGHT_API CancelIngestionResult();
    AWS_QUICKSIGHT_API CancelIngestionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CancelIngestionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CancelIngestionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CancelIngestionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CancelIngestionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the ingestion.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }
    inline void SetIngestionId(const Aws::String& value) { m_ingestionId = value; }
    inline void SetIngestionId(Aws::String&& value) { m_ingestionId = std::move(value); }
    inline void SetIngestionId(const char* value) { m_ingestionId.assign(value); }
    inline CancelIngestionResult& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}
    inline CancelIngestionResult& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}
    inline CancelIngestionResult& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelIngestionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelIngestionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelIngestionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CancelIngestionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_ingestionId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
