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
  class CreateTopicResult
  {
  public:
    AWS_QUICKSIGHT_API CreateTopicResult();
    AWS_QUICKSIGHT_API CreateTopicResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateTopicResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline CreateTopicResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline CreateTopicResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline CreateTopicResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateTopicResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateTopicResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID for the topic that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateTopicResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline const Aws::String& GetRefreshArn() const{ return m_refreshArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(const Aws::String& value) { m_refreshArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(Aws::String&& value) { m_refreshArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(const char* value) { m_refreshArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline CreateTopicResult& WithRefreshArn(const Aws::String& value) { SetRefreshArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline CreateTopicResult& WithRefreshArn(Aws::String&& value) { SetRefreshArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline CreateTopicResult& WithRefreshArn(const char* value) { SetRefreshArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTopicResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTopicResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTopicResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline CreateTopicResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_topicId;

    Aws::String m_refreshArn;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
