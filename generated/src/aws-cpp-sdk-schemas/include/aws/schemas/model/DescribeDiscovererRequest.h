/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class DescribeDiscovererRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API DescribeDiscovererRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDiscoverer"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const { return m_discovererId; }
    inline bool DiscovererIdHasBeenSet() const { return m_discovererIdHasBeenSet; }
    template<typename DiscovererIdT = Aws::String>
    void SetDiscovererId(DiscovererIdT&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::forward<DiscovererIdT>(value); }
    template<typename DiscovererIdT = Aws::String>
    DescribeDiscovererRequest& WithDiscovererId(DiscovererIdT&& value) { SetDiscovererId(std::forward<DiscovererIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
