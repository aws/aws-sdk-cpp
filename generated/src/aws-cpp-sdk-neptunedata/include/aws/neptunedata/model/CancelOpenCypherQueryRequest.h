/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class CancelOpenCypherQueryRequest : public NeptunedataRequest
  {
  public:
    AWS_NEPTUNEDATA_API CancelOpenCypherQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelOpenCypherQuery"; }

    AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline CancelOpenCypherQueryRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline CancelOpenCypherQueryRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the openCypher query to cancel.</p>
     */
    inline CancelOpenCypherQueryRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>If set to <code>TRUE</code>, causes the cancelation of the openCypher query
     * to happen silently.</p>
     */
    inline bool GetSilent() const{ return m_silent; }

    /**
     * <p>If set to <code>TRUE</code>, causes the cancelation of the openCypher query
     * to happen silently.</p>
     */
    inline bool SilentHasBeenSet() const { return m_silentHasBeenSet; }

    /**
     * <p>If set to <code>TRUE</code>, causes the cancelation of the openCypher query
     * to happen silently.</p>
     */
    inline void SetSilent(bool value) { m_silentHasBeenSet = true; m_silent = value; }

    /**
     * <p>If set to <code>TRUE</code>, causes the cancelation of the openCypher query
     * to happen silently.</p>
     */
    inline CancelOpenCypherQueryRequest& WithSilent(bool value) { SetSilent(value); return *this;}

  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    bool m_silent;
    bool m_silentHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
