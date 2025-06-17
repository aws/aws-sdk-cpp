/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/IdentitySourceType.h>
#include <aws/mpa/model/IdentitySourceParametersForGet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/IdentitySourceStatus.h>
#include <aws/mpa/model/IdentitySourceStatusCode.h>
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
  class GetIdentitySourceResult
  {
  public:
    AWS_MPA_API GetIdentitySourceResult() = default;
    AWS_MPA_API GetIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API GetIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of resource that provided identities to the identity source. For
     * example, an IAM Identity Center instance.</p>
     */
    inline IdentitySourceType GetIdentitySourceType() const { return m_identitySourceType; }
    inline void SetIdentitySourceType(IdentitySourceType value) { m_identitySourceTypeHasBeenSet = true; m_identitySourceType = value; }
    inline GetIdentitySourceResult& WithIdentitySourceType(IdentitySourceType value) { SetIdentitySourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code> IdentitySourceParameters</code> object. Contains details for the
     * resource that provides identities to the identity source. For example, an IAM
     * Identity Center instance.</p>
     */
    inline const IdentitySourceParametersForGet& GetIdentitySourceParameters() const { return m_identitySourceParameters; }
    template<typename IdentitySourceParametersT = IdentitySourceParametersForGet>
    void SetIdentitySourceParameters(IdentitySourceParametersT&& value) { m_identitySourceParametersHasBeenSet = true; m_identitySourceParameters = std::forward<IdentitySourceParametersT>(value); }
    template<typename IdentitySourceParametersT = IdentitySourceParametersForGet>
    GetIdentitySourceResult& WithIdentitySourceParameters(IdentitySourceParametersT&& value) { SetIdentitySourceParameters(std::forward<IdentitySourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceArn() const { return m_identitySourceArn; }
    template<typename IdentitySourceArnT = Aws::String>
    void SetIdentitySourceArn(IdentitySourceArnT&& value) { m_identitySourceArnHasBeenSet = true; m_identitySourceArn = std::forward<IdentitySourceArnT>(value); }
    template<typename IdentitySourceArnT = Aws::String>
    GetIdentitySourceResult& WithIdentitySourceArn(IdentitySourceArnT&& value) { SetIdentitySourceArn(std::forward<IdentitySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the identity source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetIdentitySourceResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the identity source. For example, if the identity source is
     * <code>ACTIVE</code>.</p>
     */
    inline IdentitySourceStatus GetStatus() const { return m_status; }
    inline void SetStatus(IdentitySourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetIdentitySourceResult& WithStatus(IdentitySourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code of the identity source.</p>
     */
    inline IdentitySourceStatusCode GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(IdentitySourceStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline GetIdentitySourceResult& WithStatusCode(IdentitySourceStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for the identity source.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetIdentitySourceResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdentitySourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentitySourceType m_identitySourceType{IdentitySourceType::NOT_SET};
    bool m_identitySourceTypeHasBeenSet = false;

    IdentitySourceParametersForGet m_identitySourceParameters;
    bool m_identitySourceParametersHasBeenSet = false;

    Aws::String m_identitySourceArn;
    bool m_identitySourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    IdentitySourceStatus m_status{IdentitySourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IdentitySourceStatusCode m_statusCode{IdentitySourceStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
