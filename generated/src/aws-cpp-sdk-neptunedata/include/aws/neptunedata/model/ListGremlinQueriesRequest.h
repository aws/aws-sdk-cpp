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
  class ListGremlinQueriesRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API ListGremlinQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGremlinQueries"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If set to <code>TRUE</code>, the list returned includes waiting queries. The
     * default is <code>FALSE</code>;</p>
     */
    inline bool GetIncludeWaiting() const{ return m_includeWaiting; }

    /**
     * <p>If set to <code>TRUE</code>, the list returned includes waiting queries. The
     * default is <code>FALSE</code>;</p>
     */
    inline bool IncludeWaitingHasBeenSet() const { return m_includeWaitingHasBeenSet; }

    /**
     * <p>If set to <code>TRUE</code>, the list returned includes waiting queries. The
     * default is <code>FALSE</code>;</p>
     */
    inline void SetIncludeWaiting(bool value) { m_includeWaitingHasBeenSet = true; m_includeWaiting = value; }

    /**
     * <p>If set to <code>TRUE</code>, the list returned includes waiting queries. The
     * default is <code>FALSE</code>;</p>
     */
    inline ListGremlinQueriesRequest& WithIncludeWaiting(bool value) { SetIncludeWaiting(value); return *this;}

  private:

    bool m_includeWaiting;
    bool m_includeWaitingHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
