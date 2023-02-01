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


    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline CreateIngestionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline CreateIngestionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data ingestion.</p>
     */
    inline CreateIngestionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An ID for the ingestion.</p>
     */
    inline const Aws::String& GetIngestionId() const{ return m_ingestionId; }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(const Aws::String& value) { m_ingestionId = value; }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(Aws::String&& value) { m_ingestionId = std::move(value); }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline void SetIngestionId(const char* value) { m_ingestionId.assign(value); }

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CreateIngestionResult& WithIngestionId(const Aws::String& value) { SetIngestionId(value); return *this;}

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CreateIngestionResult& WithIngestionId(Aws::String&& value) { SetIngestionId(std::move(value)); return *this;}

    /**
     * <p>An ID for the ingestion.</p>
     */
    inline CreateIngestionResult& WithIngestionId(const char* value) { SetIngestionId(value); return *this;}


    /**
     * <p>The ingestion status.</p>
     */
    inline const IngestionStatus& GetIngestionStatus() const{ return m_ingestionStatus; }

    /**
     * <p>The ingestion status.</p>
     */
    inline void SetIngestionStatus(const IngestionStatus& value) { m_ingestionStatus = value; }

    /**
     * <p>The ingestion status.</p>
     */
    inline void SetIngestionStatus(IngestionStatus&& value) { m_ingestionStatus = std::move(value); }

    /**
     * <p>The ingestion status.</p>
     */
    inline CreateIngestionResult& WithIngestionStatus(const IngestionStatus& value) { SetIngestionStatus(value); return *this;}

    /**
     * <p>The ingestion status.</p>
     */
    inline CreateIngestionResult& WithIngestionStatus(IngestionStatus&& value) { SetIngestionStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateIngestionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateIngestionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateIngestionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline CreateIngestionResult& WithStatus(int value) { SetStatus(value); return *this;}

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
