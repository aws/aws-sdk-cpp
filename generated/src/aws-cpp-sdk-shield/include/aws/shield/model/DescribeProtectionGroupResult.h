/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/ProtectionGroup.h>
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
namespace Shield
{
namespace Model
{
  class DescribeProtectionGroupResult
  {
  public:
    AWS_SHIELD_API DescribeProtectionGroupResult() = default;
    AWS_SHIELD_API DescribeProtectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeProtectionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A grouping of protected resources that you and Shield Advanced can monitor as
     * a collective. This resource grouping improves the accuracy of detection and
     * reduces false positives. </p>
     */
    inline const ProtectionGroup& GetProtectionGroup() const { return m_protectionGroup; }
    template<typename ProtectionGroupT = ProtectionGroup>
    void SetProtectionGroup(ProtectionGroupT&& value) { m_protectionGroupHasBeenSet = true; m_protectionGroup = std::forward<ProtectionGroupT>(value); }
    template<typename ProtectionGroupT = ProtectionGroup>
    DescribeProtectionGroupResult& WithProtectionGroup(ProtectionGroupT&& value) { SetProtectionGroup(std::forward<ProtectionGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProtectionGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProtectionGroup m_protectionGroup;
    bool m_protectionGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
