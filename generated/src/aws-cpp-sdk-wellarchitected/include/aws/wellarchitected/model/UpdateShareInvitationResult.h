/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ShareInvitation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WellArchitected
{
namespace Model
{
  class UpdateShareInvitationResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult() = default;
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated workload or custom lens share invitation.</p>
     */
    inline const ShareInvitation& GetShareInvitation() const { return m_shareInvitation; }
    template<typename ShareInvitationT = ShareInvitation>
    void SetShareInvitation(ShareInvitationT&& value) { m_shareInvitationHasBeenSet = true; m_shareInvitation = std::forward<ShareInvitationT>(value); }
    template<typename ShareInvitationT = ShareInvitation>
    UpdateShareInvitationResult& WithShareInvitation(ShareInvitationT&& value) { SetShareInvitation(std::forward<ShareInvitationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateShareInvitationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ShareInvitation m_shareInvitation;
    bool m_shareInvitationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
