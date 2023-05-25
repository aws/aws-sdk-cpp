/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/ReviewStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about your account details
   * review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ReviewDetails">AWS
   * API Reference</a></p>
   */
  class ReviewDetails
  {
  public:
    AWS_SESV2_API ReviewDetails();
    AWS_SESV2_API ReviewDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReviewDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline const ReviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline void SetStatus(const ReviewStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline void SetStatus(ReviewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline ReviewDetails& WithStatus(const ReviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the latest review of your account. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – We have received your appeal
     * and are in the process of reviewing it.</p> </li> <li> <p> <code>GRANTED</code>
     * – Your appeal has been reviewed and your production access has been granted.</p>
     * </li> <li> <p> <code>DENIED</code> – Your appeal has been reviewed and your
     * production access has been denied.</p> </li> <li> <p> <code>FAILED</code> – An
     * internal error occurred and we didn't receive your appeal. You can submit your
     * appeal again.</p> </li> </ul>
     */
    inline ReviewDetails& WithStatus(ReviewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline ReviewDetails& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline ReviewDetails& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline ReviewDetails& WithCaseId(const char* value) { SetCaseId(value); return *this;}

  private:

    ReviewStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
