/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class StartAccessRequestResult
  {
  public:
    AWS_SSM_API StartAccessRequestResult() = default;
    AWS_SSM_API StartAccessRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API StartAccessRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the access request.</p>
     */
    inline const Aws::String& GetAccessRequestId() const { return m_accessRequestId; }
    template<typename AccessRequestIdT = Aws::String>
    void SetAccessRequestId(AccessRequestIdT&& value) { m_accessRequestIdHasBeenSet = true; m_accessRequestId = std::forward<AccessRequestIdT>(value); }
    template<typename AccessRequestIdT = Aws::String>
    StartAccessRequestResult& WithAccessRequestId(AccessRequestIdT&& value) { SetAccessRequestId(std::forward<AccessRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartAccessRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessRequestId;
    bool m_accessRequestIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
