/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class GenerateEmbedUrlForAnonymousUserResult
  {
  public:
    AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserResult() = default;
    AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline const Aws::String& GetEmbedUrl() const { return m_embedUrl; }
    template<typename EmbedUrlT = Aws::String>
    void SetEmbedUrl(EmbedUrlT&& value) { m_embedUrlHasBeenSet = true; m_embedUrl = std::forward<EmbedUrlT>(value); }
    template<typename EmbedUrlT = Aws::String>
    GenerateEmbedUrlForAnonymousUserResult& WithEmbedUrl(EmbedUrlT&& value) { SetEmbedUrl(std::forward<EmbedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline GenerateEmbedUrlForAnonymousUserResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateEmbedUrlForAnonymousUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) to use for the anonymous Amazon QuickSight
     * user.</p>
     */
    inline const Aws::String& GetAnonymousUserArn() const { return m_anonymousUserArn; }
    template<typename AnonymousUserArnT = Aws::String>
    void SetAnonymousUserArn(AnonymousUserArnT&& value) { m_anonymousUserArnHasBeenSet = true; m_anonymousUserArn = std::forward<AnonymousUserArnT>(value); }
    template<typename AnonymousUserArnT = Aws::String>
    GenerateEmbedUrlForAnonymousUserResult& WithAnonymousUserArn(AnonymousUserArnT&& value) { SetAnonymousUserArn(std::forward<AnonymousUserArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_embedUrl;
    bool m_embedUrlHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_anonymousUserArn;
    bool m_anonymousUserArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
