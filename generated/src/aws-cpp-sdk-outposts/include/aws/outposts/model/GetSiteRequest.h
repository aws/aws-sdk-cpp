/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class GetSiteRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSite"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline GetSiteRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline GetSiteRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline GetSiteRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
