/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/IdentitySourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateIdentitySourceResult
  {
  public:
    AWS_MPA_API CreateIdentitySourceResult() = default;
    AWS_MPA_API CreateIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API CreateIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of resource that provided identities to the identity source. For
     * example, an IAM Identity Center instance.</p>
     */
    inline IdentitySourceType GetIdentitySourceType() const { return m_identitySourceType; }
    inline void SetIdentitySourceType(IdentitySourceType value) { m_identitySourceTypeHasBeenSet = true; m_identitySourceType = value; }
    inline CreateIdentitySourceResult& WithIdentitySourceType(IdentitySourceType value) { SetIdentitySourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the identity source that was created.</p>
     */
    inline const Aws::String& GetIdentitySourceArn() const { return m_identitySourceArn; }
    template<typename IdentitySourceArnT = Aws::String>
    void SetIdentitySourceArn(IdentitySourceArnT&& value) { m_identitySourceArnHasBeenSet = true; m_identitySourceArn = std::forward<IdentitySourceArnT>(value); }
    template<typename IdentitySourceArnT = Aws::String>
    CreateIdentitySourceResult& WithIdentitySourceArn(IdentitySourceArnT&& value) { SetIdentitySourceArn(std::forward<IdentitySourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the identity source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateIdentitySourceResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateIdentitySourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentitySourceType m_identitySourceType{IdentitySourceType::NOT_SET};
    bool m_identitySourceTypeHasBeenSet = false;

    Aws::String m_identitySourceArn;
    bool m_identitySourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
