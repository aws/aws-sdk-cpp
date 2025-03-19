/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class CreateWebExperienceResult
  {
  public:
    AWS_QBUSINESS_API CreateWebExperienceResult() = default;
    AWS_QBUSINESS_API CreateWebExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateWebExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const { return m_webExperienceId; }
    template<typename WebExperienceIdT = Aws::String>
    void SetWebExperienceId(WebExperienceIdT&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::forward<WebExperienceIdT>(value); }
    template<typename WebExperienceIdT = Aws::String>
    CreateWebExperienceResult& WithWebExperienceId(WebExperienceIdT&& value) { SetWebExperienceId(std::forward<WebExperienceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q Business web experience.</p>
     */
    inline const Aws::String& GetWebExperienceArn() const { return m_webExperienceArn; }
    template<typename WebExperienceArnT = Aws::String>
    void SetWebExperienceArn(WebExperienceArnT&& value) { m_webExperienceArnHasBeenSet = true; m_webExperienceArn = std::forward<WebExperienceArnT>(value); }
    template<typename WebExperienceArnT = Aws::String>
    CreateWebExperienceResult& WithWebExperienceArn(WebExperienceArnT&& value) { SetWebExperienceArn(std::forward<WebExperienceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWebExperienceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    Aws::String m_webExperienceArn;
    bool m_webExperienceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
