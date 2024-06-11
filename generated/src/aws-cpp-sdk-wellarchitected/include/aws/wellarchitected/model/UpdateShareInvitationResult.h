﻿/**
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
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult();
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateShareInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated workload or custom lens share invitation.</p>
     */
    inline const ShareInvitation& GetShareInvitation() const{ return m_shareInvitation; }
    inline void SetShareInvitation(const ShareInvitation& value) { m_shareInvitation = value; }
    inline void SetShareInvitation(ShareInvitation&& value) { m_shareInvitation = std::move(value); }
    inline UpdateShareInvitationResult& WithShareInvitation(const ShareInvitation& value) { SetShareInvitation(value); return *this;}
    inline UpdateShareInvitationResult& WithShareInvitation(ShareInvitation&& value) { SetShareInvitation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateShareInvitationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateShareInvitationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateShareInvitationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ShareInvitation m_shareInvitation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
