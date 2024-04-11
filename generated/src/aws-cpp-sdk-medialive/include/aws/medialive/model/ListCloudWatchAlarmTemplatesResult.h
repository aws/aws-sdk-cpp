/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CloudWatchAlarmTemplateSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListCloudWatchAlarmTemplatesResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListCloudWatchAlarmTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCloudWatchAlarmTemplatesResult
  {
  public:
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult();
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListCloudWatchAlarmTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<CloudWatchAlarmTemplateSummary>& GetCloudWatchAlarmTemplates() const{ return m_cloudWatchAlarmTemplates; }

    
    inline void SetCloudWatchAlarmTemplates(const Aws::Vector<CloudWatchAlarmTemplateSummary>& value) { m_cloudWatchAlarmTemplates = value; }

    
    inline void SetCloudWatchAlarmTemplates(Aws::Vector<CloudWatchAlarmTemplateSummary>&& value) { m_cloudWatchAlarmTemplates = std::move(value); }

    
    inline ListCloudWatchAlarmTemplatesResult& WithCloudWatchAlarmTemplates(const Aws::Vector<CloudWatchAlarmTemplateSummary>& value) { SetCloudWatchAlarmTemplates(value); return *this;}

    
    inline ListCloudWatchAlarmTemplatesResult& WithCloudWatchAlarmTemplates(Aws::Vector<CloudWatchAlarmTemplateSummary>&& value) { SetCloudWatchAlarmTemplates(std::move(value)); return *this;}

    
    inline ListCloudWatchAlarmTemplatesResult& AddCloudWatchAlarmTemplates(const CloudWatchAlarmTemplateSummary& value) { m_cloudWatchAlarmTemplates.push_back(value); return *this; }

    
    inline ListCloudWatchAlarmTemplatesResult& AddCloudWatchAlarmTemplates(CloudWatchAlarmTemplateSummary&& value) { m_cloudWatchAlarmTemplates.push_back(std::move(value)); return *this; }


    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListCloudWatchAlarmTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListCloudWatchAlarmTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListCloudWatchAlarmTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCloudWatchAlarmTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCloudWatchAlarmTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCloudWatchAlarmTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CloudWatchAlarmTemplateSummary> m_cloudWatchAlarmTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
