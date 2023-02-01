/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public WAFRequest
  {
  public:
    AWS_WAF_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p/>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p/>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p/>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p/>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p/>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p/>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p/>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
