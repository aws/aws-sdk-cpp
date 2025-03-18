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
  class CreateAdditionalAssignmentsForHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API CreateAdditionalAssignmentsForHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAdditionalAssignmentsForHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    CreateAdditionalAssignmentsForHITRequest& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of additional assignments to request for this HIT.</p>
     */
    inline int GetNumberOfAdditionalAssignments() const { return m_numberOfAdditionalAssignments; }
    inline bool NumberOfAdditionalAssignmentsHasBeenSet() const { return m_numberOfAdditionalAssignmentsHasBeenSet; }
    inline void SetNumberOfAdditionalAssignments(int value) { m_numberOfAdditionalAssignmentsHasBeenSet = true; m_numberOfAdditionalAssignments = value; }
    inline CreateAdditionalAssignmentsForHITRequest& WithNumberOfAdditionalAssignments(int value) { SetNumberOfAdditionalAssignments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline const Aws::String& GetUniqueRequestToken() const { return m_uniqueRequestToken; }
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }
    template<typename UniqueRequestTokenT = Aws::String>
    void SetUniqueRequestToken(UniqueRequestTokenT&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::forward<UniqueRequestTokenT>(value); }
    template<typename UniqueRequestTokenT = Aws::String>
    CreateAdditionalAssignmentsForHITRequest& WithUniqueRequestToken(UniqueRequestTokenT&& value) { SetUniqueRequestToken(std::forward<UniqueRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    int m_numberOfAdditionalAssignments{0};
    bool m_numberOfAdditionalAssignmentsHasBeenSet = false;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
