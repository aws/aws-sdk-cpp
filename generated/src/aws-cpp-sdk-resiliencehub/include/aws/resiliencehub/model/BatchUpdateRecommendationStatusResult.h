/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusFailedEntry.h>
#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusSuccessfulEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{
  class BatchUpdateRecommendationStatusResult
  {
  public:
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult();
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline const Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>& GetFailedEntries() const{ return m_failedEntries; }

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline void SetFailedEntries(const Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>& value) { m_failedEntries = value; }

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline void SetFailedEntries(Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>&& value) { m_failedEntries = std::move(value); }

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithFailedEntries(const Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>& value) { SetFailedEntries(value); return *this;}

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithFailedEntries(Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>&& value) { SetFailedEntries(std::move(value)); return *this;}

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& AddFailedEntries(const BatchUpdateRecommendationStatusFailedEntry& value) { m_failedEntries.push_back(value); return *this; }

    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& AddFailedEntries(BatchUpdateRecommendationStatusFailedEntry&& value) { m_failedEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline const Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>& GetSuccessfulEntries() const{ return m_successfulEntries; }

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline void SetSuccessfulEntries(const Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>& value) { m_successfulEntries = value; }

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline void SetSuccessfulEntries(Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>&& value) { m_successfulEntries = std::move(value); }

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithSuccessfulEntries(const Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>& value) { SetSuccessfulEntries(value); return *this;}

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& WithSuccessfulEntries(Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>&& value) { SetSuccessfulEntries(std::move(value)); return *this;}

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& AddSuccessfulEntries(const BatchUpdateRecommendationStatusSuccessfulEntry& value) { m_successfulEntries.push_back(value); return *this; }

    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline BatchUpdateRecommendationStatusResult& AddSuccessfulEntries(BatchUpdateRecommendationStatusSuccessfulEntry&& value) { m_successfulEntries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchUpdateRecommendationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchUpdateRecommendationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchUpdateRecommendationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appArn;

    Aws::Vector<BatchUpdateRecommendationStatusFailedEntry> m_failedEntries;

    Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry> m_successfulEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
