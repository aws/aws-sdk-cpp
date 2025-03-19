/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AcceptQualificationRequestRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API AcceptQualificationRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptQualificationRequest"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline const Aws::String& GetQualificationRequestId() const { return m_qualificationRequestId; }
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }
    template<typename QualificationRequestIdT = Aws::String>
    void SetQualificationRequestId(QualificationRequestIdT&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::forward<QualificationRequestIdT>(value); }
    template<typename QualificationRequestIdT = Aws::String>
    AcceptQualificationRequestRequest& WithQualificationRequestId(QualificationRequestIdT&& value) { SetQualificationRequestId(std::forward<QualificationRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the Qualification. You can omit this value if you are using the
     * presence or absence of the Qualification as the basis for a HIT requirement.
     * </p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline AcceptQualificationRequestRequest& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}
  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet = false;

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
