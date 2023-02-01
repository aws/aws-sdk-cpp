/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class GetLendingAnalysisSummaryRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API GetLendingAnalysisSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLendingAnalysisSummary"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline GetLendingAnalysisSummaryRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline GetLendingAnalysisSummaryRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from StartLendingAnalysis. A <code>JobId</code>
     * value is only valid for 7 days.</p>
     */
    inline GetLendingAnalysisSummaryRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
