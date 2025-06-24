/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class EnableSecurityHubV2Result
  {
  public:
    AWS_SECURITYHUB_API EnableSecurityHubV2Result() = default;
    AWS_SECURITYHUB_API EnableSecurityHubV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API EnableSecurityHubV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the V2 resource that was created.</p>
     */
    inline const Aws::String& GetHubV2Arn() const { return m_hubV2Arn; }
    template<typename HubV2ArnT = Aws::String>
    void SetHubV2Arn(HubV2ArnT&& value) { m_hubV2ArnHasBeenSet = true; m_hubV2Arn = std::forward<HubV2ArnT>(value); }
    template<typename HubV2ArnT = Aws::String>
    EnableSecurityHubV2Result& WithHubV2Arn(HubV2ArnT&& value) { SetHubV2Arn(std::forward<HubV2ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EnableSecurityHubV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubV2Arn;
    bool m_hubV2ArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
