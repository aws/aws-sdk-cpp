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
  class DeleteActionTargetResult
  {
  public:
    AWS_SECURITYHUB_API DeleteActionTargetResult() = default;
    AWS_SECURITYHUB_API DeleteActionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DeleteActionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline const Aws::String& GetActionTargetArn() const { return m_actionTargetArn; }
    template<typename ActionTargetArnT = Aws::String>
    void SetActionTargetArn(ActionTargetArnT&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::forward<ActionTargetArnT>(value); }
    template<typename ActionTargetArnT = Aws::String>
    DeleteActionTargetResult& WithActionTargetArn(ActionTargetArnT&& value) { SetActionTargetArn(std::forward<ActionTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteActionTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionTargetArn;
    bool m_actionTargetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
