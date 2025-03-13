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
    AWS_SESV2_API ReviewDetails() = default;
    AWS_SESV2_API ReviewDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReviewDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline ReviewStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReviewDetails& WithStatus(ReviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated support center case ID (if any).</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    ReviewDetails& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}
  private:

    ReviewStatus m_status{ReviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
