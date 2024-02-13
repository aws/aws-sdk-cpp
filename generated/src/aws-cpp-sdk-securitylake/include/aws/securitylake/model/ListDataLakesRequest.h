/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class ListDataLakesRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API ListDataLakesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataLakes"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;

    AWS_SECURITYLAKE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline ListDataLakesRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline ListDataLakesRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline ListDataLakesRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline ListDataLakesRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Regions where Security Lake is enabled.</p>
     */
    inline ListDataLakesRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
