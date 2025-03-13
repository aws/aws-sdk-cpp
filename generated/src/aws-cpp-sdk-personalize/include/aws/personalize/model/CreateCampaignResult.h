/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateCampaignResult
  {
  public:
    AWS_PERSONALIZE_API CreateCampaignResult() = default;
    AWS_PERSONALIZE_API CreateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetCampaignArn() const { return m_campaignArn; }
    template<typename CampaignArnT = Aws::String>
    void SetCampaignArn(CampaignArnT&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::forward<CampaignArnT>(value); }
    template<typename CampaignArnT = Aws::String>
    CreateCampaignResult& WithCampaignArn(CampaignArnT&& value) { SetCampaignArn(std::forward<CampaignArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCampaignResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
