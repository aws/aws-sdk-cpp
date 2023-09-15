/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace neptunedata
{
namespace Model
{

  /**
   */
  class ListLoaderJobsRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ListLoaderJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLoaderJobs"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The number of load IDs to list. Must be a positive integer greater than zero
     * and not more than <code>100</code> (which is the default).</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of load IDs to list. Must be a positive integer greater than zero
     * and not more than <code>100</code> (which is the default).</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The number of load IDs to list. Must be a positive integer greater than zero
     * and not more than <code>100</code> (which is the default).</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of load IDs to list. Must be a positive integer greater than zero
     * and not more than <code>100</code> (which is the default).</p>
     */
    inline ListLoaderJobsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>An optional parameter that can be used to exclude the load IDs of queued load
     * requests when requesting a list of load IDs by setting the parameter to
     * <code>FALSE</code>. The default value is <code>TRUE</code>.</p>
     */
    inline bool GetIncludeQueuedLoads() const{ return m_includeQueuedLoads; }

    /**
     * <p>An optional parameter that can be used to exclude the load IDs of queued load
     * requests when requesting a list of load IDs by setting the parameter to
     * <code>FALSE</code>. The default value is <code>TRUE</code>.</p>
     */
    inline bool IncludeQueuedLoadsHasBeenSet() const { return m_includeQueuedLoadsHasBeenSet; }

    /**
     * <p>An optional parameter that can be used to exclude the load IDs of queued load
     * requests when requesting a list of load IDs by setting the parameter to
     * <code>FALSE</code>. The default value is <code>TRUE</code>.</p>
     */
    inline void SetIncludeQueuedLoads(bool value) { m_includeQueuedLoadsHasBeenSet = true; m_includeQueuedLoads = value; }

    /**
     * <p>An optional parameter that can be used to exclude the load IDs of queued load
     * requests when requesting a list of load IDs by setting the parameter to
     * <code>FALSE</code>. The default value is <code>TRUE</code>.</p>
     */
    inline ListLoaderJobsRequest& WithIncludeQueuedLoads(bool value) { SetIncludeQueuedLoads(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_includeQueuedLoads;
    bool m_includeQueuedLoadsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
