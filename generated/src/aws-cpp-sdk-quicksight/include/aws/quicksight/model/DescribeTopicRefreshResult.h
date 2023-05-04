/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicRefreshDetails.h>
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
  class DescribeTopicRefreshResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult();
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline const TopicRefreshDetails& GetRefreshDetails() const{ return m_refreshDetails; }

    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline void SetRefreshDetails(const TopicRefreshDetails& value) { m_refreshDetails = value; }

    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline void SetRefreshDetails(TopicRefreshDetails&& value) { m_refreshDetails = std::move(value); }

    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline DescribeTopicRefreshResult& WithRefreshDetails(const TopicRefreshDetails& value) { SetRefreshDetails(value); return *this;}

    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline DescribeTopicRefreshResult& WithRefreshDetails(TopicRefreshDetails&& value) { SetRefreshDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTopicRefreshResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTopicRefreshResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTopicRefreshResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeTopicRefreshResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    TopicRefreshDetails m_refreshDetails;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
