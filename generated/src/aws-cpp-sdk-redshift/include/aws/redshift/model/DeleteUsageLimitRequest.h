/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DeleteUsageLimitRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteUsageLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUsageLimit"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the usage limit to delete.</p>
     */
    inline const Aws::String& GetUsageLimitId() const { return m_usageLimitId; }
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }
    template<typename UsageLimitIdT = Aws::String>
    void SetUsageLimitId(UsageLimitIdT&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::forward<UsageLimitIdT>(value); }
    template<typename UsageLimitIdT = Aws::String>
    DeleteUsageLimitRequest& WithUsageLimitId(UsageLimitIdT&& value) { SetUsageLimitId(std::forward<UsageLimitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
