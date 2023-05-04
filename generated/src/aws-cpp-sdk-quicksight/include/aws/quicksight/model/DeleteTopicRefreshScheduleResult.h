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
  class DeleteTopicRefreshScheduleResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteTopicRefreshScheduleResult();
    AWS_QUICKSIGHT_API DeleteTopicRefreshScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteTopicRefreshScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DeleteTopicRefreshScheduleResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


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
    inline DeleteTopicRefreshScheduleResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteTopicRefreshScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteTopicRefreshScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteTopicRefreshScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_topicId;

    Aws::String m_topicArn;

    Aws::String m_datasetArn;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
