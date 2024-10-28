/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/HarvestJob.h>
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
namespace mediapackagev2
{
namespace Model
{
  /**
   * <p>The response object containing the list of harvest jobs that match the
   * specified criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListHarvestJobsResponse">AWS
   * API Reference</a></p>
   */
  class ListHarvestJobsResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API ListHarvestJobsResult();
    AWS_MEDIAPACKAGEV2_API ListHarvestJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API ListHarvestJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of harvest job objects that match the specified criteria.</p>
     */
    inline const Aws::Vector<HarvestJob>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<HarvestJob>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<HarvestJob>&& value) { m_items = std::move(value); }
    inline ListHarvestJobsResult& WithItems(const Aws::Vector<HarvestJob>& value) { SetItems(value); return *this;}
    inline ListHarvestJobsResult& WithItems(Aws::Vector<HarvestJob>&& value) { SetItems(std::move(value)); return *this;}
    inline ListHarvestJobsResult& AddItems(const HarvestJob& value) { m_items.push_back(value); return *this; }
    inline ListHarvestJobsResult& AddItems(HarvestJob&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination. Include this value in subsequent requests to
     * retrieve the next set of results. If null, there are no more results to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHarvestJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHarvestJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHarvestJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHarvestJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHarvestJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHarvestJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HarvestJob> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
