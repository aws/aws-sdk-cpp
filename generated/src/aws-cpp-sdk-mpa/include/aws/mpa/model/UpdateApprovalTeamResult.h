/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
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
namespace MPA
{
namespace Model
{
  class UpdateApprovalTeamResult
  {
  public:
    AWS_MPA_API UpdateApprovalTeamResult() = default;
    AWS_MPA_API UpdateApprovalTeamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API UpdateApprovalTeamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Version ID for the team that was created. When an approval team is updated,
     * the version ID changes.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    UpdateApprovalTeamResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApprovalTeamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
