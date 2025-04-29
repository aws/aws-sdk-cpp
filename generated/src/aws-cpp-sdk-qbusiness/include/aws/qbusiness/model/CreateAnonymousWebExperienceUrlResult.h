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
  class CreateAnonymousWebExperienceUrlResult
  {
  public:
    AWS_QBUSINESS_API CreateAnonymousWebExperienceUrlResult() = default;
    AWS_QBUSINESS_API CreateAnonymousWebExperienceUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateAnonymousWebExperienceUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique URL for accessing the web experience.</p>  <p>This URL
     * can only be used once and must be used within 5 minutes after it's
     * generated.</p> 
     */
    inline const Aws::String& GetAnonymousUrl() const { return m_anonymousUrl; }
    template<typename AnonymousUrlT = Aws::String>
    void SetAnonymousUrl(AnonymousUrlT&& value) { m_anonymousUrlHasBeenSet = true; m_anonymousUrl = std::forward<AnonymousUrlT>(value); }
    template<typename AnonymousUrlT = Aws::String>
    CreateAnonymousWebExperienceUrlResult& WithAnonymousUrl(AnonymousUrlT&& value) { SetAnonymousUrl(std::forward<AnonymousUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAnonymousWebExperienceUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anonymousUrl;
    bool m_anonymousUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
