/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/UpdateRecommendationStatusRequestEntry.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class BatchUpdateRecommendationStatusRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateRecommendationStatus"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline const Aws::Vector<UpdateRecommendationStatusRequestEntry>& GetRequestEntries() const{ return m_requestEntries; }

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline bool RequestEntriesHasBeenSet() const { return m_requestEntriesHasBeenSet; }

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline void SetRequestEntries(const Aws::Vector<UpdateRecommendationStatusRequestEntry>& value) { m_requestEntriesHasBeenSet = true; m_requestEntries = value; }

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline void SetRequestEntries(Aws::Vector<UpdateRecommendationStatusRequestEntry>&& value) { m_requestEntriesHasBeenSet = true; m_requestEntries = std::move(value); }

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& WithRequestEntries(const Aws::Vector<UpdateRecommendationStatusRequestEntry>& value) { SetRequestEntries(value); return *this;}

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& WithRequestEntries(Aws::Vector<UpdateRecommendationStatusRequestEntry>&& value) { SetRequestEntries(std::move(value)); return *this;}

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& AddRequestEntries(const UpdateRecommendationStatusRequestEntry& value) { m_requestEntriesHasBeenSet = true; m_requestEntries.push_back(value); return *this; }

    /**
     * <p>Defines the list of operational recommendations that need to be included or
     * excluded.</p>
     */
    inline BatchUpdateRecommendationStatusRequest& AddRequestEntries(UpdateRecommendationStatusRequestEntry&& value) { m_requestEntriesHasBeenSet = true; m_requestEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<UpdateRecommendationStatusRequestEntry> m_requestEntries;
    bool m_requestEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
