/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RejectGroupingRecommendationEntry.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class RejectResourceGroupingRecommendationsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API RejectResourceGroupingRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectResourceGroupingRecommendations"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline RejectResourceGroupingRecommendationsRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline RejectResourceGroupingRecommendationsRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline RejectResourceGroupingRecommendationsRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of resource grouping recommendations you have selected to exclude from
     * your application.</p>
     */
    inline const Aws::Vector<RejectGroupingRecommendationEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<RejectGroupingRecommendationEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<RejectGroupingRecommendationEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline RejectResourceGroupingRecommendationsRequest& WithEntries(const Aws::Vector<RejectGroupingRecommendationEntry>& value) { SetEntries(value); return *this;}
    inline RejectResourceGroupingRecommendationsRequest& WithEntries(Aws::Vector<RejectGroupingRecommendationEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline RejectResourceGroupingRecommendationsRequest& AddEntries(const RejectGroupingRecommendationEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline RejectResourceGroupingRecommendationsRequest& AddEntries(RejectGroupingRecommendationEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<RejectGroupingRecommendationEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
