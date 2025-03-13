/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityControl.h>
#include <aws/securityhub/model/UnprocessedSecurityControl.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchGetSecurityControlsResult
  {
  public:
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult() = default;
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline const Aws::Vector<SecurityControl>& GetSecurityControls() const { return m_securityControls; }
    template<typename SecurityControlsT = Aws::Vector<SecurityControl>>
    void SetSecurityControls(SecurityControlsT&& value) { m_securityControlsHasBeenSet = true; m_securityControls = std::forward<SecurityControlsT>(value); }
    template<typename SecurityControlsT = Aws::Vector<SecurityControl>>
    BatchGetSecurityControlsResult& WithSecurityControls(SecurityControlsT&& value) { SetSecurityControls(std::forward<SecurityControlsT>(value)); return *this;}
    template<typename SecurityControlsT = SecurityControl>
    BatchGetSecurityControlsResult& AddSecurityControls(SecurityControlsT&& value) { m_securityControlsHasBeenSet = true; m_securityControls.emplace_back(std::forward<SecurityControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline const Aws::Vector<UnprocessedSecurityControl>& GetUnprocessedIds() const { return m_unprocessedIds; }
    template<typename UnprocessedIdsT = Aws::Vector<UnprocessedSecurityControl>>
    void SetUnprocessedIds(UnprocessedIdsT&& value) { m_unprocessedIdsHasBeenSet = true; m_unprocessedIds = std::forward<UnprocessedIdsT>(value); }
    template<typename UnprocessedIdsT = Aws::Vector<UnprocessedSecurityControl>>
    BatchGetSecurityControlsResult& WithUnprocessedIds(UnprocessedIdsT&& value) { SetUnprocessedIds(std::forward<UnprocessedIdsT>(value)); return *this;}
    template<typename UnprocessedIdsT = UnprocessedSecurityControl>
    BatchGetSecurityControlsResult& AddUnprocessedIds(UnprocessedIdsT&& value) { m_unprocessedIdsHasBeenSet = true; m_unprocessedIds.emplace_back(std::forward<UnprocessedIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetSecurityControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityControl> m_securityControls;
    bool m_securityControlsHasBeenSet = false;

    Aws::Vector<UnprocessedSecurityControl> m_unprocessedIds;
    bool m_unprocessedIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
